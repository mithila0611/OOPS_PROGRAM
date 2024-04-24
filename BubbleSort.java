class BubbleSort<T extends Comparable<T>>{
    void BubbleSort(T[] data)
    {
        for(int i=0;i<data.length;i++){
            for(int j=1;j<data.length;j++){
                if(data[j-1].compareTo(data[j])>0){
                    T temp=data[j-1];
                    data[j-1]=data[j];
                    data[j]=temp;
                }
            }
        }
        for(int i=0;i<data.length;i++){
            System.out.println(data[i]);
        }
    }
    public static void main(String[] args){
        BubbleSort <Integer> obj=new BubbleSort<>();
        System.out.println("Integer-BubbleSorting");
        Integer[] a={9,8,6,4,2};
        obj.BubbleSort(a);
        
        BubbleSort <String> obj1=new BubbleSort<>();
        System.out.println("String-BubbleSorting");
        String[] s={"mithila","mithail","dola","oops","oop"};
        obj1.BubbleSort(s);
        
        BubbleSort <Double> obj2=new BubbleSort<>();
        System.out.println("Double-BubbleSorting");
        Double[] d={9.9998,9.9999,9.55555,9.555555};
        obj2.BubbleSort(d);
        
    }
}
