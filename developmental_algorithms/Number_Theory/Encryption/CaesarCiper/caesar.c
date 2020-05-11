//engineer: Partha Ray

//algorithm specifications:

//Caesar Cipher
//c(p) = (p+k) mod26        
//datatype basic arithmetic integer int variable(lvalue) with identifier k
//datatype derived aggregate basic arithmetic integer char data structure array with identifier plaintxt
//datatype derived aggregate basic arithmetic integer char data structure array with identifier ciphertxt
//implement program(source code)(application software)(algorithm written in a human readable programming language) in a source code file with identifier caesar.c and in directory with identifier Caesar
//if program is executed without any command line arguments or more than one command line argument then a customized print message(Usage: ./caesar key) should display+ a int (rvalue)(data) of 1, the routine with identifier main should return to signify an error ELSE  customized print message(Success) + print second command line argument -> user provided key
//program must take input(rvalue)(data) -> single command line input -> a non negative integer (<2^31)->datatype int variable(lvalue)(storage space location memmory address) with identifier k 
//even if  data (rvalue) of datatype int variable(lvalue)(storage space location memmory address) with identifier k is > 26 -> alphabetical characters data(rvalue) inputed as arguments(actual parameters) -> special variables(formal parameters)(lvalues) of program's userinput's said sub routine should remain alphabetical characters
//output array of characters -> string -> "plaintext: "  without a new linedata (rvalues) ->stdout(file pointer)->  screen(file)(device):userinput's said sub routine  
//output array of characters -> string-> "ciphertext: " without a new line data(rvalues)-> stdout(file pointer) -> screen(file)(device):output data(rvlaues) of datatype derived aggregate basic arithmetic integer char data structure array variable with identifier ciphertxt -> stdout(file pointer) -> screen(file/device) 
//non alphabetical characters in data structure array variable with identifier plaintxt should remain unchanged characters in data structure array variable with identifier ciphertxt
//capital characters in data strucutre array variable with identifier plaintxt should remain capital characters in ciphertxt
//lowercase characters in data structure array variable with identifier plaintxt should remain lowercase characters in ciphertext
//after outputing characters data (rvalues) of derived aggregate datatype char data structure array with identifier ciphertxt -> then output char newline (data)(rvalue) to stdout(file pointer) -> screen(file)(device)
//routine with identifier main-> return int data(rvlaue) of 0
//striving to implement most efficient time + space complexity 


//computer -> computer system -> setup computing platform -> hardware + software(operating + application)

//C programming language ->programming paradigm -> imperative +structural + procedural->  execution model -> how work takes place  -> statements:

//set up C source code environment -> source code editor + C compiler

//set up C programming structure(structure of its building blocks\elements\primitives) (most efficient algorithm (time,space) during runtime flow of execution of stored native machine code instructions by CPU)

//preprocessing-> compilation -> assembly -> linking -> executable binary file


//preprocessing before the actual compilation
//C Preprocessor (CPP) 
//CPP directive ->command->  #include -> stdio.h header file from System Libraries and add to current source code file with identifier caesar
#include <stdio.h>
//CPP directive ->command->  #include -> cs50.h header file from course file and add to current source code file with identifier caesar
//#include <cs50.h>
//CPP directive -> command-> #include -> stdlib.h header file and add to current source code file with identifier caesar
#include <stdlib.h>
//CPP directive-> command -> #include -> errno.h header file from System Libraries and add it to current source code file with identifier caesar
#include <errno.h>
//CPP directive -> command -> #include -> math.h header file and add to current source code file with identifier caesar
#include <math.h>
//CPP directive -> command -> #include -> string.h header file and add to current source code file with identifier caesar
#include <string.h>


//declare all sub routines & global variables


//implement and define derived return datatype basic arithmetic integer int main routine(function)(procedure) with identifier main
//performs task:

//algorithm to Caesar Cipher problem
//returns int (rvalue)(data) of 0 -> meaning program executed successfully during runtime
//command line arguments datatype basic arithmetic int variable with identifier argc, datatype basic arithmetic integer char data structure array of pointers with identifier argv[]
int main(int argc, char *argv[]) 
{
	//define datatype derived aggregate basic arithmetic interger char data structure array with identifier customized_print_err_msg + initialize and assign rvalues
	char customized_print_err_msg[] = "Usage: ./caesar keyr";
	
	//define datatype derived aggregate basic arithmetic interger char data structure array with identifier customized_print_success_msg + initialize and assign rvalues
	char customized_print_success_msg[] = "Success";
	
	
	//error handling-> implement a control structure to be executed only once -> statement/ group of statements within a block(conditional source code) to be executed sequentially but only once if boolean expression/s (condition/s) evaluates to true (rvalue of not null/non zero)-> one condition + one conditional source code -> if
	//boolean expression (argc == 2)
	if(argc == 2)
	{
		//output -> display data(rvlaues) to the screen(file)-> predefined built in return datatype derived basic arithmetic integer int sub routine with identifier fprintf ->pass(input)  data(lvalue)(acutal parameter)(argument) ->  1st formal datatype derived aggregate basic arithmetic integer char parameter(lvalue)(special variable) file pointer with identifier stream  of said sub routine + pass(input) char data (rvalues)(actual arguments) -> 2nd formal datataype derived aggregate data structure array basic arithmetic integer char parameter(lvalues)(special variable) with identifier format of said sub routine
		fprintf(&stdout[0],"%s \n",customized_print_success_msg);
		
		fprintf(&stdout[0],"%s \n",  argv[1]);
	
	}
	else
	{
		//output -> display data(rvlaues) to the screen(file)-> predefined built in return datatype derived basic arithmetic integer int sub routine with identifier fprintf ->pass(input)  data(lvalue)(acutal parameter)(argument) ->  1st formal datatype derived aggregate basic arithmetic integer char parameter(lvalue)(special variable) file pointer with identifier stream  of said sub routine + pass(input) char data (rvalues)(actual arguments) -> 2nd formal datataype derived aggregate data structure array basic arithmetic integer char parameter(lvalues)(special variable) with identifier format of said sub routine
		fprintf(&stdout[0],"%s",customized_print_err_msg);
		
		//return int data(rvlaue) of 1 -> meaning program did NOT execute successfully; error
		return 1;
	}
	
	
	
	//define datatype basic arithmetic integer int variables(lvalues) with identifier j,k
	int j, p, k;
	
	//define datatype basic arithmetic float double variables(lvalues) with identifier d
	double d;
	
	//define datatype derived aggregate basic arithmetic integer char data structure array with identifier plaintxt
	char plaintxt[25];
	
	//output -> display data (rvalues) -> screen(file)-> use predefined built in return datatype derived basic arithmetic integer int sub routine with identifier fprintf -> input  data(lvalue) -> argument(actual parameter) ->  1st formal parameter dataype derived basic arithmetic integer  pointer special variable(lvalue) with identifier *stream of said subroutine , input data(rvalues) -> arguments(actual parameters) ->2nd formal parameter constant datataype derived aggregate basic arithmetic integer char special variable(lvalue) of said sub routine
	fprintf(&stdout[0],"plaintext: ");
	
	
	//initialize and assign datatype derived aggregate data structure array basic arithmetic integer char variable(lvalue) with identifier plaintxt feed some data(rvalues) -> souce code/software app/ program -> use built return datatype basic arithmetic integer int sub routine with identifier *fgets -> input data(lvalue) -> argument(actual parameter) -> 1st formal parameter datataype derived pointer basic arithmetic integer char special variable(lvalue) with identifier *str + input data(rvlaue) -> argument(actual parameters) -> 2nd formal parameter datatype basic arithmetic integer int special variable(lvalue) with identifier int +pass data(lvalue) -> argument(actual parameter) -> 3rd formal parameter dataype derived pointer special variable(lvalue) with identifier *stream
	fgets(&plaintxt[0],25,&stdin[0]);
	
	//define datatype basic arithmetic integer int variable(lvalue) with identifier len_plaintxt;
	int len_plaintxt;
	
	//initialize and assign data(rvalue) using built in sub routine with identifier strlen -> variable(lvalue) with identifier len_plaintxt
	len_plaintxt = strlen(plaintxt);
	
	//define datataype derived aggregate basic arithmetic integer char data structure array with identifier ciphertxt
	char ciphertxt[25];
	 
	 
	//register datatype basic arithmetic integer int loop counter variable(lvalue) with identifier lcv
	register int lcv;
	
	
	//error handling before reassign of data(rvalue) of *argv[1] pointer variable(lvalue) check all the characters of the said data(rvlaue) are between 0 and 9 inclusive 
	//string length of data(rvalue) of *argv[1] 
	//initialize and assign data(rvalue) using builtin  sub routine with identifier strlen -> variable (lvalue) with identifier len_argv_1
	int len_argv_1 = strlen(argv[1]);
	
	//control structure executed multiple times -> loop -> executes block containing statement/ grp of statments(conditional source code ) sequentially + specifc number of times -> for loop
	//boolean expression (condition) -> (lcv < len_argv_1)
	for(lcv = 0; lcv < len_argv_1; ++lcv )
	{
		//if one of the characters(rvalue) of datatype basic arithmetic integer char data structure array with identifier (*argv[1]) is not between 0 and 9 ->
		// print customized error message +
		// return 1-> meaning program did NOT execute successfully -> error
		//else convert the char data structure array with identifier(*argv[1]) to integers 
		if (!( (argv[1][lcv] )>= '0' && (argv[1][lcv])<= '9') )
		{
			//output -> display data (rvalues) -> screen(file)-> use predefined built in return datatype derived basic arithmetic integer int sub routine with identifier fprintf
			fprintf(&stdout[0],"%s\n", customized_print_err_msg);
			
			//return int data(rvlaue) of 1 -> meaning program did NOT execute successfully; error
			return 1;
		}
		else 
		{
			j = atoi(argv[1]);
			
		}
		
	}
	
	//output -> display data (rvalues) -> screen(file)-> use predefined built in return datatype derived basic arithmetic integer int sub routine with identifier fprintf
	fprintf(&stdout[0],"%s\n", customized_print_success_msg);
	fprintf(&stdout[0],"%d\n", j);
	
	
	//program must take input(rvalue)(data) -> single command line input -> a non negative integer (<2^31)->datatype int variable(lvalue)(storage space location memmory address) with identifier k 
	//control structure -> executed sequentially + ONLY ONCE -> decision making-> statement/grp of statements executed sequentially + ONLY ONCE(conditional source code) if boolean expression/s (condition) evaluates to (rvalue of non-zero/not null)
	// 1  condition + 1 conditional source code + 1 conditional else source code
	// typecast -> explicit -> data (rvalue) of int j -> double + assign to d
	d = (double)j;
	
	if((d >= 0 ) && (d <= (pow(2,31))))
	{
		fprintf(&stdout[0],"%f\n", d);
		
		//Caesar Cipher
        //c(p) = (p+k) mod26
		//non alphabetical characters in data structure array variable with identifier plaintxt should remain unchanged characters in data structure array variable with identifier ciphertxt
		//capital characters in data strucutre array variable with identifier plaintxt should remain capital characters in ciphertxt
		//lowercase characters in data structure array variable with identifier plaintxt should remain lowercase characters in ciphertext
		//output array of characters -> string -> "plaintext: "  without a new linedata (rvalues) ->stdout(file pointer)->  screen(file)(device):userinput's said sub routine  
		//output array of characters -> string-> "ciphertext: " without a new line data(rvalues)-> stdout(file pointer) -> screen(file)(device):output data(rvlaues) of datatype derived aggregate basic arithmetic integer char data structure array variable with identifier ciphertxt -> stdout(file pointer) -> screen(file/device) 
		//non alphabetical characters in data structure array variable with identifier plaintxt should remain unchanged characters in data structure array variable with identifier ciphertxt
		//datatype derived aggregate basic arithmetic integer char data structure array with identifier plaintxt
		//datatype derived aggregate basic arithmetic integer char data structure array with identifier ciphertxt
		
		//striving to implement most efficient time + space complexity 
		//linear search -> 	
		
		// typecast -> explicit -> data (rvalue) of int d-> int + assign to p
		p = (int)d;
		
		//26 letters in alphabet 
		// if non negative integer (<2^31)->datatype int variable(lvalue)(storage space location memmory address) with identifier p mod division 26 == 0 then k = 0 else k = p mod divsion 26
		// control structure executed sequentially+ ONLY ONCE-> decision making -> 2 conditions + 2 conditional source code
		if((p%26)==(0))
		{
			//copy elements in plaintxt to ciphertxt
			//control structure executed sequentially + MULTIPLE TIMES -> loop -> specific number of time -> for
			for(lcv= 0;lcv < len_plaintxt; lcv++)
			{
				ciphertxt[lcv] = plaintxt[lcv];
				
			}
		}
		//fprintf(&stdout[0],"%s %s\n", "ciphertext: ", ciphertxt );
	    else if(!(p%26) == (0))
		{
			//control structure executed sequentially + MULTIPLE TIMES -> loop -> specific number of time -> for
			for(lcv = 0; lcv < len_plaintxt; lcv++)
			{
				//intialize k to p%26
				k = p%26;
				//go through elements in plaintxt and shift k integer number positions
				//lower case + upper case letters + non alphabetical letters 
				//control structure -> executed sequentially and ONLY ONCE -> decision making -> 2 conditions + 3 conditional source code
				//lower case
				if((plaintxt[lcv])>= 'a' && (plaintxt[lcv])<= 'z' )
				{
					// if interger k + plaintxt[lcv] > 122 then subtract 26
					// control structure executed sequentially+ ONLY ONCE-> decision making -> 1 conditions + 2 conditional source code -> if + else
						if(((int)plaintxt[lcv] + k ) > (122))
						{
						ciphertxt[lcv] = (int)plaintxt[lcv] + k-26; 
						}
						else
						{
							ciphertxt[lcv] = (int)plaintxt[lcv] + k; 
						}
						
				}
				else if((plaintxt[lcv])>= 'A' && (plaintxt[lcv])<= 'Z')
				{
					// if interger k + plaintxt[lcv] > 122 then subtract 26
					// control structure executed sequentially+ ONLY ONCE-> decision making -> 1 conditions + 2 conditional source code -> if + else
						if(((int)plaintxt[lcv] + k) > (90))
						{
							ciphertxt[lcv] = (int)plaintxt[lcv] + k-26; 
						}
						else
						{
							ciphertxt[lcv] = (int)plaintxt[lcv] + k; 
						}
				}
				else 
				{
					 ciphertxt[lcv]=plaintxt[lcv];
				}
			}
			
		}
		
		fprintf(&stdout[0],"%s%s\n", "ciphertext: ", ciphertxt );
	            
	}
	else
	{
		//output -> display data (rvalues) -> screen(file)-> use predefined built in return datatype derived basic arithmetic integer int sub routine with identifier fprintf
		fprintf(&stdout[0],"%s\n", customized_print_err_msg);
			
		//return int data(rvlaue) of 1 -> meaning program did NOT execute successfully; error
		return 1;
		
	}
	
	//returns int (rvalue)(data) of 0 -> meaning program executed successfully during runtime
	return 0; 
}