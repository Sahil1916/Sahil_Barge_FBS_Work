package stack;

public class TestCircular {
	public static void main(String[] args) {
		CircularQueue cq = new CircularQueue(5);
		cq.push(10);
		cq.push(20);
		cq.display();
		cq.pop();
		cq.display();
	}

}
