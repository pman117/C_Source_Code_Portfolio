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
;recursion ->  wishful thinking -> smaller instances than size n
;decomposing a problem(recursive algorithm) -> wishful thinking + convert solution to desired solution -> test + base case + recursive case(wishful thinking)



(define recursive_case
	(lambda (n) 
		( > (n) (1))))

(define fact_recursive_loop
	(lambda (n)
		(if	 recursive_case (n)
			* (n) (fact_recursive_loop(- (n) (1) ))
		(n))))
		
(define fact_recursive
	(lambda (n) 
		(fact_recursive_loop (n))))
		

