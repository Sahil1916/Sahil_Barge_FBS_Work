package Collection;

import java.util.TreeSet;

class Student implements Comparable<Student>{
	private int roll;
	private String name;
	
	
	public Student(int roll, String name) {
		this.roll = roll;
		this.name = name;
	}
	
	
	public int getRoll() {
		return roll;
	}
	public void setRoll(int roll) {
		this.roll = roll;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}


//	@Override
//	public int compareTo(Object o) {
//		Student s = (Student)o;
//		return   this.roll -s.roll ;
//	}


	@Override
	public String toString() {
		return "Student [roll=" + roll + ", name=" + name + "]";
	}


@Override
public int compareTo(Student o) {
	
	return o.name.compareTo(this.name);
}


//	@Override
//	public int compareTo(Student o) {
//		// TODO Auto-generated method stub
//		return this.roll - o.roll;
//	}
//	
	
	
}

public class DemoCollection {
	
	public static void main(String[] args) {
		
		TreeSet<Student>  ts =  new TreeSet<Student>();
		Student s1 = new Student(01,"a");
		Student s2 =new Student(02,"b");
		Student s3 =new Student(03,"c");
		Student s4 =new Student(04,"d");
		Student s5 =new Student(05,"e");
		
		ts.add(s1);
		ts.add(s2);
		//ts.add(10);
		ts.add(s3);
		ts.add(s4);
		ts.add(s5);
		
		System.out.println( ts);
		
		if(ts.contains(new Student(01, "a"))) {
			System.out.println(" found");
		}else {
			System.out.println("not found");
		}

	}

}
