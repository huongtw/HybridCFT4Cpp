(set-option :timeout 5000)
(declare-fun tvw_age () Int)
(declare-fun tvw_distance () Int)
(assert (=  tvw_distance   10 ) )
(check-sat)(get-model)