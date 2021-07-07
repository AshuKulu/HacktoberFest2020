public class NonDecreasingArray {
    public static boolean checkPossibility(int[] nums) {
        if (nums.length == 1) {
            return false;
        }

        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i] > nums[i+1]) {
                if (i == 0) {
                    nums[i] = nums[i + 1] - 1;
                    break;
                }
                if (nums[i - 1] > nums[i + 1]) {
                    nums[i + 1] = nums[i];
                    break;
                } else {
                    nums[i] = nums[i + 1];
                    break;
                }
            }
        }

        print(nums);

        return isNonDecreasing(nums);
    }

    public static void print(int[] a) {
        for (int value : a) {
            System.out.print(value + " ");
        }
        System.out.println();
    }

    public static boolean isNonDecreasing(int[] a) {
        for (int i = 0; i < a.length - 1; i++) {
            if (a[i] > a[i+1]) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        int[] a = {1, 1, 1, 1, 10, 1, 1};

        System.out.println(checkPossibility(a));
    }
}
