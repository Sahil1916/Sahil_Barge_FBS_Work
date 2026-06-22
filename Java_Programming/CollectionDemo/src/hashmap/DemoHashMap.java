package hashmap;

import java.util.HashMap;

import treemap.Employee;


class MyKey implements Comparable<MyKey>{
int key;

public MyKey(int i) {
	this.key = i;
}
	@Override
	public int compareTo(MyKey o) {
		// TODO Auto-generated method stub
		return this.key -o.key;
	}
	@Override
	public String toString() {
		return "MyKey" + this.key ;
	}
	
	
	
}

public class DemoHashMap {

	public static void main(String[] args) {
		
		HashMap<MyKey, Employee> tm = new HashMap <MyKey, Employee>();
		
		
		tm.put(new MyKey(101), new Employee(101,"sahil",50000));
		 tm.put(new MyKey(1), new Employee(101,"b",484545));
		 tm.put(new MyKey(104), new Employee(101,"v",5445));
		 tm.put(new MyKey(108), new Employee(101,"s",54845));
		 tm.put(new MyKey(107), new Employee(101,"e",45454));
		 
		 System.out.println(tm);
		
		
	}
}
