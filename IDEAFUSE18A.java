import java.util.Scanner;

public class Main {
    public static String olah(double sn){
        double jlh = 1+(8 * sn);
        double sqrt = (Math.sqrt(jlh));
        if(sqrt != Math.ceil(sqrt)){
            return "NO";
        }
        return "YES";
    }
    
    public static void main(String[] args) {
        int n;
        Scanner scn = new Scanner(System.in);
        n = scn.nextInt();
        for(int i=0; i<n; i++){
            double data = scn.nextDouble();
            System.out.println(String.format("Case #%d: %s", i+1, olah(data)));
        }
    }
}
