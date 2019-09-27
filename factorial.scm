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
;recursion ->  wishful thinking -> smaller instances than size n -> one instance
;induction -> start with the 1 instance -> 1  base case of n
;decomposing a problem(recursive algorithm) -> wishful thinking + convert solution to desired solution(ingenuity) -> test + base case + recursive case(wishful thinking)
;process evolution -> demands on computational resources(space(number of deferred operations) + time(number of primitive steps))
;space -> grows linearly(1x) with respect to size of said argument (each increase in argument size -> + 1constant amount of space requirement)
;time -> grows linearly(2x) with respect to size of said argument (each increase in argument size -> + 2constant amount of time requirement)
;orders of growth process 





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

