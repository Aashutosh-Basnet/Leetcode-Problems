import java.utils.Arrays;

class RemoveDuplicateElementII{

    public int removeDuplicates(int[] list){
        if (list.length < 2) return list.length;
        
        int k = 2;

        for (int i = 2 ; i < list.length ; i++){
            if (list[i] != list[k]){
                list[k] = list[i];
                k += 1;
            }
        }
        return k;
    }

    public static void main(String[] args){

        RemoveDuplicateElementII obj = new RemoveDuplicateElementII();

        int[] nums = {1, 2, 2, 2, 3};

        int length = obj.removeDuplicates(nums);

        System.out.println("length after removing duplicates: " + length);
        System.out.println("Array after modification: ");
        for (int i = 0 ; i < nums.length ; i++){
            System.out.println(nums[i] + "  ");
        }

    }   
}