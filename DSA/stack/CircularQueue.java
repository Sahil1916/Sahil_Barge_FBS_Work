package stack;

public class CircularQueue {
	
	int front;
	int rare;
	int size;
	int [] cQueue;
	
	public CircularQueue(int size){
		this.front=-1;
		this.rare=-1;
		this.size=size;
		this.cQueue = new int[size];
		
	}
	
	boolean isEmpty() {
		if(front==-1 && rare==-1)
			return true;
		else
			return false;
	}
	
	boolean isFull() {
		if((rare+1)%size==front) 
			return true;
		else
			return false;
		
	}
	
	void push(int data) {
		
		if(isFull()) {
			System.out.println("queue is full");
		}else {
			
			if(isEmpty()) {
				front = rare = 0;
			}else {
				
				if(rare == size-1) 
					rare=0;
				else
					rare++;
			}
			cQueue[rare]= data;
		}
	}

	int pop() {

	    if (isEmpty()) {
	        System.out.println("Queue is empty");
	        return -1;
	    }

	    int data = cQueue[front];

	    if (front == rare) {
	        front = rare = -1;
	    } else {

	        if (front == size - 1) {
	            front = 0;
	        } else {
	            front++;
	        }
	    }

	    return data;
	}
	
	
	void display() {

	    if (isEmpty()) {
	        System.out.println("Queue is empty");
	        return;
	    }

	    int i = front;

	    while (true) {

	        System.out.print(cQueue[i] + " ");

	        if (i == rare) {
	            break;
	        }

	        if (i == size - 1) {
	            i = 0;
	        } else {
	            i++;
	        }
	    }

	    System.out.println();
	}
}
