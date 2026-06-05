package stack;

public class MyStackTest {
	public static void main(String[] args) {
		
		MyStack s1 = new MyStack(5);
		
		s1.push(10);
		s1.push(5);
		s1.push(30);
		s1.display();
		System.out.println(s1.pop());
		s1.display();
		System.out.println(s1.peep());
		s1.display();;
		
		

		
	}

}
