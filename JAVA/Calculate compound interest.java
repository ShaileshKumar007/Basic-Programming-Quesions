class CompundInterest
{
	public static void main(String args[]){
        // You can also change the program to take input from user
	    double amount=0,principle=100,rate=10,time=3,ci;			
	
	    System.out.println("principle= "+principle);
 
	    System.out.println("rate="+rate);
    
	    System.out.println("time="+time);
 
	    amount=principle*((1+rate/100)*(1+rate/100)*(1+rate/100));
 
	    System.out.println("amount="+amount);
 
    	ci=amount-principle;
 
	    System.out.println("compound interest="+ci);
 
	}
}