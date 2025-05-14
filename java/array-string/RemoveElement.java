class RemoveElement {
    public int removeElement(int[] nums, int val){
        int k = 0;
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
}

public class Main {
    public static void main(String[] args) {
        RemoveElement sol = new RemoveElement();

        int[] nums = {3, 2, 2, 3};
        int val = 3;

        int k = sol.removeElement(nums, val);

        System.out.println("k: " + k);
        System.out.println("modified nums: ");
        for (int i = 0; i < k; i++) {
            System.out.print(nums[i] + " ");
        }
    }
}
