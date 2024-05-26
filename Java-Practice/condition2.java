// conditions example 2

public class Main {
    public static void main(String[] args) {
        if (salary > 10000) {
            salary += 2000; // salary = salary + 2000
        } else if (salary > 20000){
            salary +=3000; // salary = salary +3000
        } else { 
            salary +=1000;
        }

        System.out.println(salary);
    }
}
