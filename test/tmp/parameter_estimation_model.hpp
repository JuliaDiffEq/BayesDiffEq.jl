// Code generated by Stan version 2.16.0

#include <stan/model/model_header.hpp>

namespace parameter_estimation_model_model_namespace {

using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;

typedef Eigen::Matrix<double,Eigen::Dynamic,1> vector_d;
typedef Eigen::Matrix<double,1,Eigen::Dynamic> row_vector_d;
typedef Eigen::Matrix<double,Eigen::Dynamic,Eigen::Dynamic> matrix_d;

static int current_statement_begin__;

stan::io::program_reader prog_reader__() {
    stan::io::program_reader reader;
    reader.add_event(0, 0, "start", "/Users/marcwilliams/.julia/v0.6/DiffEqBayes/test/tmp/parameter_estimation_model.stan");
    reader.add_event(39, 39, "end", "/Users/marcwilliams/.julia/v0.6/DiffEqBayes/test/tmp/parameter_estimation_model.stan");
    return reader;
}

template <typename T0__, typename T1__, typename T2__, typename T3__>
std::vector<typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type>
sho(const T0__& t,
        const std::vector<T1__>& internal_var___u,
        const std::vector<T2__>& theta,
        const std::vector<T3__>& x_r,
        const std::vector<int>& x_i, std::ostream* pstream__) {
    typedef typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type fun_scalar_t__;
    typedef fun_scalar_t__ fun_return_scalar_t__;
    const static bool propto__ = true;
    (void) propto__;
        fun_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

    int current_statement_begin__ = -1;
    try {
        {
            validate_non_negative_index("internal_var___du", "2", 2);
            vector<fun_scalar_t__> internal_var___du(2);
            stan::math::initialize(internal_var___du, std::numeric_limits<double>::quiet_NaN());
            stan::math::fill(internal_var___du,DUMMY_VAR__);


            current_statement_begin__ = 5;
            stan::math::assign(get_base1_lhs(internal_var___du,1,"internal_var___du",1), ((get_base1(theta,1,"theta",1) * get_base1(internal_var___u,1,"internal_var___u",1)) - ((get_base1(theta,2,"theta",1) * get_base1(internal_var___u,1,"internal_var___u",1)) * get_base1(internal_var___u,2,"internal_var___u",1))));
            current_statement_begin__ = 7;
            stan::math::assign(get_base1_lhs(internal_var___du,2,"internal_var___du",1), ((-(get_base1(theta,3,"theta",1)) * get_base1(internal_var___u,2,"internal_var___u",1)) + ((get_base1(theta,4,"theta",1) * get_base1(internal_var___u,1,"internal_var___u",1)) * get_base1(internal_var___u,2,"internal_var___u",1))));
            current_statement_begin__ = 9;
            return stan::math::promote_scalar<fun_return_scalar_t__>(internal_var___du);
        }
    } catch (const std::exception& e) {
        stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
        // Next line prevents compiler griping about no return
        throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
    }
}


struct sho_functor__ {
    template <typename T0__, typename T1__, typename T2__, typename T3__>
        std::vector<typename boost::math::tools::promote_args<T0__, T1__, T2__, T3__>::type>
    operator()(const T0__& t,
        const std::vector<T1__>& internal_var___u,
        const std::vector<T2__>& theta,
        const std::vector<T3__>& x_r,
        const std::vector<int>& x_i, std::ostream* pstream__) const {
        return sho(t, internal_var___u, theta, x_r, x_i, pstream__);
    }
};

class parameter_estimation_model_model : public prob_grad {
private:
    vector<double> u0;
    int T;
    vector<vector<double> > internal_var___u;
    double t0;
    vector<double> ts;
    vector<double> x_r;
    vector<int> x_i;
public:
    parameter_estimation_model_model(stan::io::var_context& context__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, 0, pstream__);
    }

    parameter_estimation_model_model(stan::io::var_context& context__,
        unsigned int random_seed__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, random_seed__, pstream__);
    }

    void ctor_body(stan::io::var_context& context__,
                   unsigned int random_seed__,
                   std::ostream* pstream__) {
        boost::ecuyer1988 base_rng__ =
          stan::services::util::create_rng(random_seed__, 0);
        (void) base_rng__;  // suppress unused var warning

        current_statement_begin__ = -1;

        static const char* function__ = "parameter_estimation_model_model_namespace::parameter_estimation_model_model";
        (void) function__;  // dummy to suppress unused var warning
        size_t pos__;
        (void) pos__;  // dummy to suppress unused var warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        double DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        // initialize member variables
        validate_non_negative_index("u0", "2", 2);
        context__.validate_dims("data initialization", "u0", "double", context__.to_vec(2));
        validate_non_negative_index("u0", "2", 2);
        u0 = std::vector<double>(2,double(0));
        vals_r__ = context__.vals_r("u0");
        pos__ = 0;
        size_t u0_limit_0__ = 2;
        for (size_t i_0__ = 0; i_0__ < u0_limit_0__; ++i_0__) {
            u0[i_0__] = vals_r__[pos__++];
        }
        context__.validate_dims("data initialization", "T", "int", context__.to_vec());
        T = int(0);
        vals_i__ = context__.vals_i("T");
        pos__ = 0;
        T = vals_i__[pos__++];
        validate_non_negative_index("internal_var___u", "T", T);
        validate_non_negative_index("internal_var___u", "2", 2);
        context__.validate_dims("data initialization", "internal_var___u", "double", context__.to_vec(T,2));
        validate_non_negative_index("internal_var___u", "T", T);
        validate_non_negative_index("internal_var___u", "2", 2);
        internal_var___u = std::vector<std::vector<double> >(T,std::vector<double>(2,double(0)));
        vals_r__ = context__.vals_r("internal_var___u");
        pos__ = 0;
        size_t internal_var___u_limit_1__ = 2;
        for (size_t i_1__ = 0; i_1__ < internal_var___u_limit_1__; ++i_1__) {
            size_t internal_var___u_limit_0__ = T;
            for (size_t i_0__ = 0; i_0__ < internal_var___u_limit_0__; ++i_0__) {
                internal_var___u[i_0__][i_1__] = vals_r__[pos__++];
            }
        }
        context__.validate_dims("data initialization", "t0", "double", context__.to_vec());
        t0 = double(0);
        vals_r__ = context__.vals_r("t0");
        pos__ = 0;
        t0 = vals_r__[pos__++];
        validate_non_negative_index("ts", "T", T);
        context__.validate_dims("data initialization", "ts", "double", context__.to_vec(T));
        validate_non_negative_index("ts", "T", T);
        ts = std::vector<double>(T,double(0));
        vals_r__ = context__.vals_r("ts");
        pos__ = 0;
        size_t ts_limit_0__ = T;
        for (size_t i_0__ = 0; i_0__ < ts_limit_0__; ++i_0__) {
            ts[i_0__] = vals_r__[pos__++];
        }

        // validate, data variables
        check_greater_or_equal(function__,"T",T,1);
        // initialize data variables
        validate_non_negative_index("x_r", "0", 0);
        x_r = std::vector<double>(0,double(0));
        stan::math::fill(x_r,DUMMY_VAR__);
        validate_non_negative_index("x_i", "0", 0);
        x_i = std::vector<int>(0,int(0));
        stan::math::fill(x_i, std::numeric_limits<int>::min());

        try {
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        // validate transformed data

        // validate, set parameter ranges
        num_params_r__ = 0U;
        param_ranges_i__.clear();
        validate_non_negative_index("sigma1", "2", 2);
        num_params_r__ += 2;
        ++num_params_r__;
        ++num_params_r__;
        ++num_params_r__;
        ++num_params_r__;
    }

    ~parameter_estimation_model_model() { }


    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        stan::io::writer<double> writer__(params_r__,params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;

        if (!(context__.contains_r("sigma1")))
            throw std::runtime_error("variable sigma1 missing");
        vals_r__ = context__.vals_r("sigma1");
        pos__ = 0U;
        validate_non_negative_index("sigma1", "2", 2);
        context__.validate_dims("initialization", "sigma1", "row_vector_d", context__.to_vec(2));
        // generate_declaration sigma1
        row_vector_d sigma1(static_cast<Eigen::VectorXd::Index>(2));
        for (int j1__ = 0U; j1__ < 2; ++j1__)
            sigma1(j1__) = vals_r__[pos__++];
        try {
            writer__.row_vector_lb_unconstrain(0,sigma1);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable sigma1: ") + e.what());
        }

        if (!(context__.contains_r("theta1")))
            throw std::runtime_error("variable theta1 missing");
        vals_r__ = context__.vals_r("theta1");
        pos__ = 0U;
        context__.validate_dims("initialization", "theta1", "double", context__.to_vec());
        // generate_declaration theta1
        double theta1(0);
        theta1 = vals_r__[pos__++];
        try {
            writer__.scalar_lub_unconstrain(0.0,2.0,theta1);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable theta1: ") + e.what());
        }

        if (!(context__.contains_r("theta2")))
            throw std::runtime_error("variable theta2 missing");
        vals_r__ = context__.vals_r("theta2");
        pos__ = 0U;
        context__.validate_dims("initialization", "theta2", "double", context__.to_vec());
        // generate_declaration theta2
        double theta2(0);
        theta2 = vals_r__[pos__++];
        try {
            writer__.scalar_lub_unconstrain(0.0,1.5,theta2);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable theta2: ") + e.what());
        }

        if (!(context__.contains_r("theta3")))
            throw std::runtime_error("variable theta3 missing");
        vals_r__ = context__.vals_r("theta3");
        pos__ = 0U;
        context__.validate_dims("initialization", "theta3", "double", context__.to_vec());
        // generate_declaration theta3
        double theta3(0);
        theta3 = vals_r__[pos__++];
        try {
            writer__.scalar_lub_unconstrain(0.0,4.0,theta3);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable theta3: ") + e.what());
        }

        if (!(context__.contains_r("theta4")))
            throw std::runtime_error("variable theta4 missing");
        vals_r__ = context__.vals_r("theta4");
        pos__ = 0U;
        context__.validate_dims("initialization", "theta4", "double", context__.to_vec());
        // generate_declaration theta4
        double theta4(0);
        theta4 = vals_r__[pos__++];
        try {
            writer__.scalar_lub_unconstrain(0.0,2.0,theta4);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable theta4: ") + e.what());
        }

        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }

    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }


    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(vector<T__>& params_r__,
                 vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {

        T__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;

        // model parameters
        stan::io::reader<T__> in__(params_r__,params_i__);

        Eigen::Matrix<T__,1,Eigen::Dynamic>  sigma1;
        (void) sigma1;  // dummy to suppress unused var warning
        if (jacobian__)
            sigma1 = in__.row_vector_lb_constrain(0,2,lp__);
        else
            sigma1 = in__.row_vector_lb_constrain(0,2);

        T__ theta1;
        (void) theta1;  // dummy to suppress unused var warning
        if (jacobian__)
            theta1 = in__.scalar_lub_constrain(0.0,2.0,lp__);
        else
            theta1 = in__.scalar_lub_constrain(0.0,2.0);

        T__ theta2;
        (void) theta2;  // dummy to suppress unused var warning
        if (jacobian__)
            theta2 = in__.scalar_lub_constrain(0.0,1.5,lp__);
        else
            theta2 = in__.scalar_lub_constrain(0.0,1.5);

        T__ theta3;
        (void) theta3;  // dummy to suppress unused var warning
        if (jacobian__)
            theta3 = in__.scalar_lub_constrain(0.0,4.0,lp__);
        else
            theta3 = in__.scalar_lub_constrain(0.0,4.0);

        T__ theta4;
        (void) theta4;  // dummy to suppress unused var warning
        if (jacobian__)
            theta4 = in__.scalar_lub_constrain(0.0,2.0,lp__);
        else
            theta4 = in__.scalar_lub_constrain(0.0,2.0);


        // transformed parameters
        validate_non_negative_index("theta", "4", 4);
        vector<T__> theta(4);
        stan::math::initialize(theta, DUMMY_VAR__);
        stan::math::fill(theta,DUMMY_VAR__);


        try {
            current_statement_begin__ = 29;
            stan::math::assign(get_base1_lhs(theta,1,"theta",1), theta1);
            current_statement_begin__ = 29;
            stan::math::assign(get_base1_lhs(theta,2,"theta",1), theta2);
            current_statement_begin__ = 29;
            stan::math::assign(get_base1_lhs(theta,3,"theta",1), theta3);
            current_statement_begin__ = 29;
            stan::math::assign(get_base1_lhs(theta,4,"theta",1), theta4);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        // validate transformed parameters
        for (int i0__ = 0; i0__ < 4; ++i0__) {
            if (stan::math::is_uninitialized(theta[i0__])) {
                std::stringstream msg__;
                msg__ << "Undefined transformed parameter: theta" << '[' << i0__ << ']';
                throw std::runtime_error(msg__.str());
            }
        }

        const char* function__ = "validate transformed params";
        (void) function__;  // dummy to suppress unused var warning

        // model body
        try {
            {
                validate_non_negative_index("u_hat", "T", T);
                validate_non_negative_index("u_hat", "2", 2);
                vector<vector<T__> > u_hat(T, (vector<T__>(2)));
                stan::math::initialize(u_hat, DUMMY_VAR__);
                stan::math::fill(u_hat,DUMMY_VAR__);


                current_statement_begin__ = 33;
                lp_accum__.add(inv_gamma_log<propto__>(sigma1, 4.0, 1.0));
                current_statement_begin__ = 34;
                lp_accum__.add(normal_log<propto__>(get_base1(theta,1,"theta",1), 1.5, 0.01));
                if (get_base1(theta,1,"theta",1) < 0.0) lp_accum__.add(-std::numeric_limits<double>::infinity());
                else if (get_base1(theta,1,"theta",1) > 2.0) lp_accum__.add(-std::numeric_limits<double>::infinity());
                else lp_accum__.add(-log_diff_exp(normal_cdf_log(2.0, 1.5, 0.01), normal_cdf_log(0.0, 1.5, 0.01)));
                current_statement_begin__ = 34;
                lp_accum__.add(normal_log<propto__>(get_base1(theta,2,"theta",1), 1.0, 0.01));
                if (get_base1(theta,2,"theta",1) < 0.0) lp_accum__.add(-std::numeric_limits<double>::infinity());
                else if (get_base1(theta,2,"theta",1) > 1.5) lp_accum__.add(-std::numeric_limits<double>::infinity());
                else lp_accum__.add(-log_diff_exp(normal_cdf_log(1.5, 1.0, 0.01), normal_cdf_log(0.0, 1.0, 0.01)));
                current_statement_begin__ = 34;
                lp_accum__.add(normal_log<propto__>(get_base1(theta,3,"theta",1), 3.0, 0.01));
                if (get_base1(theta,3,"theta",1) < 0.0) lp_accum__.add(-std::numeric_limits<double>::infinity());
                else if (get_base1(theta,3,"theta",1) > 4.0) lp_accum__.add(-std::numeric_limits<double>::infinity());
                else lp_accum__.add(-log_diff_exp(normal_cdf_log(4.0, 3.0, 0.01), normal_cdf_log(0.0, 3.0, 0.01)));
                current_statement_begin__ = 34;
                lp_accum__.add(normal_log<propto__>(get_base1(theta,4,"theta",1), 1.0, 0.01));
                if (get_base1(theta,4,"theta",1) < 0.0) lp_accum__.add(-std::numeric_limits<double>::infinity());
                else if (get_base1(theta,4,"theta",1) > 2.0) lp_accum__.add(-std::numeric_limits<double>::infinity());
                else lp_accum__.add(-log_diff_exp(normal_cdf_log(2.0, 1.0, 0.01), normal_cdf_log(0.0, 1.0, 0.01)));
                current_statement_begin__ = 35;
                stan::math::assign(u_hat, integrate_ode_rk45(sho_functor__(), u0, t0, ts, theta, x_r, x_i, pstream__, 0.001, 9.9999999999999995e-07, 100000));
                current_statement_begin__ = 36;
                for (int t = 1; t <= T; ++t) {

                    current_statement_begin__ = 37;
                    lp_accum__.add(normal_log<propto__>(stan::model::rvalue(internal_var___u, stan::model::cons_list(stan::model::index_uni(t), stan::model::cons_list(stan::model::index_omni(), stan::model::nil_index_list())), "internal_var___u"), stan::model::rvalue(u_hat, stan::model::cons_list(stan::model::index_uni(t), stan::model::cons_list(stan::model::index_omni(), stan::model::nil_index_list())), "u_hat"), sigma1));
                }
            }
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        lp_accum__.add(lp__);
        return lp_accum__.sum();

    } // log_prob()

    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }


    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("sigma1");
        names__.push_back("theta1");
        names__.push_back("theta2");
        names__.push_back("theta3");
        names__.push_back("theta4");
        names__.push_back("theta");
    }


    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dims__.push_back(2);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(4);
        dimss__.push_back(dims__);
    }

    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        vars__.resize(0);
        stan::io::reader<double> in__(params_r__,params_i__);
        static const char* function__ = "parameter_estimation_model_model_namespace::write_array";
        (void) function__;  // dummy to suppress unused var warning
        // read-transform, write parameters
        row_vector_d sigma1 = in__.row_vector_lb_constrain(0,2);
        double theta1 = in__.scalar_lub_constrain(0.0,2.0);
        double theta2 = in__.scalar_lub_constrain(0.0,1.5);
        double theta3 = in__.scalar_lub_constrain(0.0,4.0);
        double theta4 = in__.scalar_lub_constrain(0.0,2.0);
        for (int k_0__ = 0; k_0__ < 2; ++k_0__) {
            vars__.push_back(sigma1[k_0__]);
        }
        vars__.push_back(theta1);
        vars__.push_back(theta2);
        vars__.push_back(theta3);
        vars__.push_back(theta4);

        if (!include_tparams__) return;
        // declare and define transformed parameters
        double lp__ = 0.0;
        (void) lp__;  // dummy to suppress unused var warning
        stan::math::accumulator<double> lp_accum__;

        double DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        validate_non_negative_index("theta", "4", 4);
        vector<double> theta(4, 0.0);
        stan::math::initialize(theta, std::numeric_limits<double>::quiet_NaN());
        stan::math::fill(theta,DUMMY_VAR__);


        try {
            current_statement_begin__ = 29;
            stan::math::assign(get_base1_lhs(theta,1,"theta",1), theta1);
            current_statement_begin__ = 29;
            stan::math::assign(get_base1_lhs(theta,2,"theta",1), theta2);
            current_statement_begin__ = 29;
            stan::math::assign(get_base1_lhs(theta,3,"theta",1), theta3);
            current_statement_begin__ = 29;
            stan::math::assign(get_base1_lhs(theta,4,"theta",1), theta4);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        // validate transformed parameters

        // write transformed parameters
        for (int k_0__ = 0; k_0__ < 4; ++k_0__) {
            vars__.push_back(theta[k_0__]);
        }

        if (!include_gqs__) return;
        // declare and define generated quantities


        try {
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        // validate generated quantities

        // write generated quantities
    }

    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng,params_r_vec,params_i_vec,vars_vec,include_tparams,include_gqs,pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }

    static std::string model_name() {
        return "parameter_estimation_model_model";
    }


    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        for (int k_0__ = 1; k_0__ <= 2; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "sigma1" << '.' << k_0__;
            param_names__.push_back(param_name_stream__.str());
        }
        param_name_stream__.str(std::string());
        param_name_stream__ << "theta1";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "theta2";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "theta3";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "theta4";
        param_names__.push_back(param_name_stream__.str());

        if (!include_gqs__ && !include_tparams__) return;
        for (int k_0__ = 1; k_0__ <= 4; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "theta" << '.' << k_0__;
            param_names__.push_back(param_name_stream__.str());
        }

        if (!include_gqs__) return;
    }


    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        for (int k_0__ = 1; k_0__ <= 2; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "sigma1" << '.' << k_0__;
            param_names__.push_back(param_name_stream__.str());
        }
        param_name_stream__.str(std::string());
        param_name_stream__ << "theta1";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "theta2";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "theta3";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "theta4";
        param_names__.push_back(param_name_stream__.str());

        if (!include_gqs__ && !include_tparams__) return;
        for (int k_0__ = 1; k_0__ <= 4; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "theta" << '.' << k_0__;
            param_names__.push_back(param_name_stream__.str());
        }

        if (!include_gqs__) return;
    }

}; // model

}

typedef parameter_estimation_model_model_namespace::parameter_estimation_model_model stan_model;

