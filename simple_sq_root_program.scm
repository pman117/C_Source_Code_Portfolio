<code>#!/usr/bin/guile -s
!#

;engineer: Partha Ray
;bottom up design of simple square root implementation 
;modularity 
;abstraction
;capture underlying  computational processess in procedures
;primtives + means of combination + means of abstraction

(define square_num
	(lambda (x)
		(* (x) (x))))

(define close_enough
	(lambda (x) (guess)
		(<(abs( -(square_num guess) (x)))(.001))))
		
(define avg
	(lambda (x) (y)
		(*(+ (x) (y)).5)))

(define improve_guess
	(lambda (x) (guess)
		(avg(/ (x) (guess)) (guess))))
		
;integrate pieces/modulues together into a process that controls steps of computation -> special form IF expression
;(if <predicate> <consequence> <alternative>)
(if (close_enough (x) (guess)
	guess	
		(improve_guess (x )(guess))))
 
;integrate piece/modules together further using a engineer defined loop + abstraction + recursion
(define loop_sq_rt
	(lambda (x) (guess)
		(if (close_enough (x) (guess))
			guess	
		loop_sq_rt((x)(improve_guess((x)(guess)))))))
		
		
;integrate piece/modules further with further abstraction
(define find_sq_rt
	(lambda (x) 
		loop_sq_rt((x)(guess))))
		
		
		
