
public class Problem1 {

	public static void main(String[] args) {
		int s=0,i;
		for(i=1;i<1000;i++)
		{
		if((i%3==0)||(i%5==0))
		s+=i;
		}
		System.out.println("Sum of multiple of 3 and 5 below 1000 is:"+s);

	}

}
