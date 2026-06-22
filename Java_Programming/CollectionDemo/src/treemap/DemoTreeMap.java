package treemap;

import java.util.TreeMap;

class MyKey implements Comparable<MyKey>{
	int key;
	
	public MyKey(int i) {
		this.key=i;
	}

	@Override
	public int compareTo(MyKey o) {
		return this.key - o.key;
	}

	@Override
	public String toString() {
		return "Key:" + this.key;
	}
	
}

public class DemoTreeMap {

	public static void main(String[] args) {
		
		
		
		 TreeMap<MyKey, Employee> tm = new TreeMap<MyKey, Employee>();
		 
		 tm.put(new MyKey(101), new Employee(101,"sahil",50000));
		 tm.put(new MyKey(1), new Employee(101,"b",484545));
		 tm.put(new MyKey(104), new Employee(101,"v",5445));
		 tm.put(new MyKey(108), new Employee(101,"s",54845));
		 tm.put(new MyKey(107), new Employee(101,"e",45454));
		 
		 System.out.println("==========================");
		 System.out.println(tm.higherEntry(new MyKey(104)));
		 

		 
	}
}
