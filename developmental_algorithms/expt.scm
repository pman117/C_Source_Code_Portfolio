<code>#!/usr/bin/guile -s
!#

;engineer: Partha Ray
;bottom up design of factorial 
;modularity 
;abstraction
;capture underlying  computational processess in procedures
;primtives + means of combination + means of abstraction
;substitution model 
;recursively apply the substitution model in applicative order:   evaluate sub expressions -> then substitute + apply the procedure
;a^b  exponent using simple multiplication + addtion
;recursion ->  wishful thinking once -> tool -> induction ->  smaller instances than size b -> 1 instance
;induction -> start with 1 instances -> 1 base cases of  n
;decomposing a problem(recursive algorithm) -> wishful thinking 1wice + convert solution to desired solution(ingenuity) -> 1test  +1 base case(wishful thinking once) + 1 recursive case
;process evolution -> demands on computational resources(space(number of deferred operations) + time(number of primitive steps))
;space ->  + 1 size of input b -> + 1 space (deferred operation) -> linear
;time ->  + 1 size of input b -> +1 timestep  of algorithm -> linear 
;orders of growth process 

(define  expt_base_ case_0
	(1))
	
	
(define expt_recursive_case_loop
	(lambda (b) (a)
		if (=(b) (0)
			expt_base_case_0
		(*(a)(expt_recursive_case_loop((a)(=(b)(b-1))))))))
		
		
(define fact_expt_recursive
	(lambda (b)(a)
		(expt_recursive_case_loop (b) (a))))