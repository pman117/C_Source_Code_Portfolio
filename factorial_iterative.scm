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
;design algorithm for factorial that uses only constant space (no additional memory)(not keeping track of deferred operations)
; keep track of 3 things: product column + counter column + n column
;loop product counter = p
;loop counter = c
;loop n counter = n

(define fact_loop_iterative
	(lambda (n)(p)(c)
		(if (c > n)
			(=(p)(p))
		(fact_loop_iterative((=(p)(*(p)(c))) (=(c)(+(c)(1))) (= (n)(n))))))
		
(define fact_iterative
	(lambda (n)(p)(c)
		(fact_loop_iterative((n)(p)(c)))))