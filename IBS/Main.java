import java.util.ArrayList;
import java.util.List;

public class Main {
    public static int greatPartitions(int[] nums, int k) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(nums, 0, new ArrayList<>(), result);
        int count = 0;
        for (List<Integer> partition : result) {
            int sum1 = 0;
            int sum2 = 0;
            for (int i = 0; i < nums.length; i++) {
                if (partition.contains(i)) {
                    sum1 += nums[i];
                } else {
                    sum2 += nums[i];
                }
            }
            if (sum1 >= k && sum2 >= k) {
                count++;
            }
        }
        return count;
    }

    private static void backtrack(int[] nums, int start, List<Integer> current, List<List<Integer>> result) {
        result.add(new ArrayList<>(current));
        for (int i = start; i < nums.length; i++) {
            current.add(i);
            backtrack(nums, i + 1, current, result);
            current.remove(current.size() - 1);
        }
    }

    public static void main(String[] args) {
        int k = 4;
        int[] nums = { 1, 2, 3, 4 };
        System.out.println(greatPartitions(nums, k));
    }
}