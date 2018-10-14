
public class Problem6 {

	public static void main(String[] args) {
		int s1=0,s2=0,res=0,i;
		for(i=1;i<=100;i++)
		{
		s1+=i;
		s2+=i*i;
		}
		s1*=s1;
		res=s1-s2;
		System.out.println("Difference is "+res);
	}

}
