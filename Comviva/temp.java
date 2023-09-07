import java.util.Arrays;
import java.util.Comparator;

class temp{

    public int coverage(int input1,int[][] input2){
        Arrays.sort(input2, new Comparator<int[]>() {
            @Override
            public int compare(int[] a, int[] b) {
                return Integer.compare(a[0], b[0]);
            }
        });
        int start=0;
        int ans=0;
        for(int i=0;i<input1;i++){
            if(input2[i][0]>start){
                start=input2[i][0];
            }
            if(start<input2[i][1]){
                ans+=(input2[i][1]-start);
                start=input2[i][1];
            }
        }
        return ans;
    }
    
    public static void main(String[] args) {
        temp t=new temp();
        
       System.out.println(t.coverage(1,new int[][]{{5,10},{8,12}}));
    }
}

