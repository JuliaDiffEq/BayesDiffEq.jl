function createabcfunction(prob, t, distancefunction, alg, kwargs...)
    function simfunc(params, constants, targetdata)
        sol = solve(problem_new_parameters(prob, params), alg, kwargs...)
        randomized = VectorOfArray([sol(t[i]) for i in 1:length(t)])
        data = convert(Array, randomized)
        distancefunction(targetdata, data), data
    end
end

function abc_inference(prob::DEProblem, alg, t, data, priors; ϵ=0.001,
     distancefunction = euclidean, ABCalgorithm = ABCSMC, progress = false,
     num_samples = 500, maxiterations = 10^5, kwargs...)

    abcsetup = ABCalgorithm(createabcfunction(prob, t, distancefunction, alg, kwargs...),
     length(priors),
     ϵ,
     ApproxBayes.Prior(priors);
     nparticles = num_samples,
     maxiterations = maxiterations
    )

    abcresult = runabc(abcsetup, data, progress = progress)
    return abcresult
end
