
public class Problem2 {

	public static void main(String[] args) {
		int f1=1,f2=1,s=0,r=0;
		while(r<4000000)
		{
		if(r%2==0)
		s+=r;
		r=f1+f2;
		f2=f1;
		f1=r;
		}
		System.out.println("Sum of even value in Fibonacci Series is: "+s);

	}

}
