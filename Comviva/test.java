import java.util.HashSet;
import java.util.Set;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class test {

    public int solve(String input1){
        String datePattern = "\\b\\d{2}-\\d{2}-(\\d{4})\\b";

        Pattern pattern = Pattern.compile(datePattern);

        Matcher matcher = pattern.matcher(input1);

        Set<String> uniqueYears = new HashSet<>();

        while (matcher.find()) {
            String year = matcher.group(1);
            uniqueYears.add(year);
        }

        int ans = uniqueYears.size();
        return ans;
    }
    public static void main(String[] args) {
          test t=new test();
          String s="Soon after 02-09-1945, th 24-10-1946";
          System.out.println(t.solve(s));
    }
}
