import java.util.*;
public class r3 {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        // System.out.print(s);
        int cnt = 0;
        int maxi =0 ;

        System.out.println(s.length());

        for(int i = 0; i<s.length(); i++){
            char ch = s.charAt(i);
            // System.out.print(ch);
            if(ch != ' '){
                cnt++;
                maxi = Math.max(maxi, cnt);
            }
            else{
                cnt = 0;
            }
        }
            System.out.print(maxi);
    }
}
