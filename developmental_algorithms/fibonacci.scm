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
;Fibonacci
;F(n) = 0 if n=0
;F(n)= 1 if n=1
;else F(n) = F(n-1)+ F(n-2)
;recursion ->  wishful thinking -> smaller instances than size n -> 2 instances
;induction -> start with 2 instances -> 2 base cases of  n
;decomposing a problem(recursive algorithm) -> wishful thinking 2wice + convert solution to desired solution(ingenuity) -> 2test cases +2 base case(wishful thinking 2x) + recursive case
;process evolution -> demands on computational resources(space(number of deferred operations) + time(number of primitive steps))
;space -> grows linearly(1x) with respect to size of said argument (each increase in argument size -> + 1constant amount of space (disk stack)requirement) (maximium  depth exactly covers  maximium number of deferred operations)
;time -> grows exponentialy 2^(n/2)-> ROUGHLY O(2^n) with respect to size of said argument (each increase in argument size -> + 2^(n/2) time increment) (time steps)
;orders of growth process 

(define fib_base_case_0
	(lambda (n)
		(=(n)(0))))

(define fib_base_case_1
	(lambda (n
		if(=(n)(1)
			=(n)(1)
		fib_base_case_0
		
(define fib_recursive_case_loop
	(lambda (n)
		if(>(n)(1)
			+ (fib_recursive_case_loop(-(n)(1))
			   (fib_recursive_case_loop(-(n)(2))
		fib_base_case_1)))))
	
(define fib_recursive_case
	(lambda (n)
		fib_recursive_case_loop(n)))
		


