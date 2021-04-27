using System; 

class GFG { 
	
	static int onesComplement(int n) 
	{  
		int number_of_bits = (int)(Math.Floor(Math.Log(n) / Math.Log(2))) + 1; 		 
 		return ((1 << number_of_bits) - 1) ^ n; 			} 
 												
//Driver code 
												
public static void Main () { 												 											int n = 22; 																		
													Console.WriteLine(onesComplement(n));  																							} 
																			} 
