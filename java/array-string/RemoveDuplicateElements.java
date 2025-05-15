public class RemoveDuplicateElements {

    public int removeDuplicateElement(int[] list) {
        if (list == null || list.length == 0) {
            return 0;
        }

        int k = 1;

        for (int i = 1; i < list.length; i++) {
            if (list[i] != list[k - 1]) {
                list[k] = list[i];
                k++;
            }
        }

        return k;
    }

    public static void main(String[] args) {
        int[] sortedNums = {1, 2, 3, 4, 5, 6, 6, 7};

        RemoveDuplicateElements obj = new RemoveDuplicateElements();
        int len = obj.removeDuplicateElement(sortedNums);

        System.out.println("Length after removing duplicates: " + len);
        System.out.print("Unique elements: ");
        for (int i = 0; i < len; i++) {
            System.out.print(sortedNums[i] + " ");
        }
    }
}
