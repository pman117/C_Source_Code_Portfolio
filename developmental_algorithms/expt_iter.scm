<code>#!/usr/bin/guile -s
!#

;engineer: Partha Ray
;bottom up design of factorial 
;modularity 
;abstraction
;capture underlying  computational processess in procedures
;primtives + means of combination + means of abstraction
;substitution model 
;recursively + iteratively apply the substitution model in applicative order:   evaluate sub expressions -> then substitute + apply the procedure
;a^b  exponent using simple multiplication + addtion + substraction + state variables + table evolution
;p = product
;process evolution -> demands on computational resources(space(number of deferred operations) + time(number of primitive steps))
;space ->  + 1 size of input b -> +0 deferred operations -> constant
;time -> + 1 size of input b -> +1 timestep of algoritm -> linear
;orders of growth process 


(define expt_loop_iterative
	(lambda (a)(b)(p)
		if(>(b)(0))
			(=(p)(*(p)(a)) expt_loop_iterative((p)(=(b)(-(b)(1)))(a))
		(=(p)(*(1)(p))
		
(define expt_iter
	(lambda ((a)(b)(p)) (expt_loop_iterative ((a)(b)(p))