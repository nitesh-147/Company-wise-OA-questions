import java.util.*;
class temp{
    static void update(int[] arr){
          arr[0]=4;
    }
    public static void main(String[] args) {
        int n=8;
        int arr[]=new int[n];
        // for(int i=0;i<n;i++) arr[i]=-1;
        Arrays.fill(arr,-1);
        update(arr);
        for(int i=0;i<n;i++){
            System.out.println(arr[i]);
        }
        // int arr[n]={-1};
    }
}