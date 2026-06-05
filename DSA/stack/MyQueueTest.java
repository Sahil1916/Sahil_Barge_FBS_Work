package stack;

public class MyQueueTest {
public static void main(String[] args) {
		
		MyQueue  q1 = new MyQueue(5);
		q1.push(10);
		q1.push(20);
		q1.display();
		q1.push(30);
		q1.push(40);
		q1.push(50);
		
		q1.pop();
		q1.push(60);
		
		q1.display();
 	}


}
