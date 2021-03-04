//algorithm program to check if parenthesis in string are properly closed + nested
//stack data structure
//4 operations -> 4 respective subroutines
// push() -> adds an element to the stack, if stack is full -> overflow condition
//pop() -> removes an item from the stack , if stack is empty -> underflow condition
//peek()-> looks at top object element of stack without removing it
//empty()-> checks whether to see if stack is empty -> if empty -> returns true, else -> false 

//import
import java.io.*;
import java.lang.*;
import java.util.*;

// Only 1 public class
public class ValidParenthesis
{
	//subroutine to check valid parenthesis user inputing a random string
	static public boolean validParenthesisChecker(String rndm_strng)
	{
		//utilize stack (Legacy) class
		//declare new stack object
		Stack obj_stck;
		obj_stck = new Stack();
		
		//find the length of rndm_strng
		int len_rndm_strng;
		len_rndm_strng = rndm_strng.length();
		
		//control structure loop -> for len_rndm_strng
		int lcv;
		for(lcv =0; lcv < len_rndm_strng; lcv ++)
		{
			//check if any element of string == '('   or '{' or '['
			//control structure decision making -> if -> 3 conditions + 3 conditional statements
			//utilize subroutine to get char at said index of given String rndm_strng
			char c = rndm_strng.charAt(lcv);
			
			if((c )== ('(') || (c)== ('{') || (c) == ('['))
			{
				//adds element to stack
				obj_stck.push(c);
				
				//skips rest of loop + continues back to condition + next iteration
				continue;
				
			}
			
			//if next element equals a compliment closing parenthesis -> check to see if it equals last object element on top of the stack -> if  yes -> pop of top of stack
			if (c == ')' && (Character)obj_stck.peek() == '(')
			{
				//remove said element from top of stack
				obj_stck.pop();
			}
			else if(c == '}' && (Character)obj_stck.peek() == '{')
			{
				//remove said element from top of stack
				obj_stck.pop();
			}
			else if (c == ']' && (Character)obj_stck.peek() == '[')
			{
				//remove said element from top of stack
				obj_stck.pop();
			}
		}
		
		//return statement
		return obj_stck.empty();
	}
	
	//main routine (caller)
	static public void main(String args[])
	{
		//control structure -> decision making -> if -> 1 condition + 2 conditional source code
		if (validParenthesisChecker(args[0]) == true )
		{
			System.out.println("Balanced");
		}
		else
		{
			System.out.println("NOT balanced");
		}
	}
}