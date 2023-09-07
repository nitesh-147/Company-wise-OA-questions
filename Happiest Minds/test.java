class test{
    public int fun(int n){
        if(n<1) return 1;
        else return 0;
    }
    public static void main(String[] args) {
        test t=new test();

        int i=t.fun(0);
        System.out.println(i);
    }
}