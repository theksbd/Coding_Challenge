// success
// https://leetcode.com/problems/longest-common-prefix/description/

public class LongestCommonPrefix {
    public static String longestCommonPrefix(String[] strs) {
        if (strs.length == 0) return "";
        if (strs.length == 1) return strs[0];

        StringBuilder s = new StringBuilder();

        int size = strs.length;
        int minLength = Integer.MAX_VALUE;
        for (String str : strs) {
            if (minLength > str.length())
                minLength = str.length();
        }

        for (int i = 0; i < minLength; i++) {
            String temp = s.toString();
            for (int j = 0; j < size - 1; j++) {
                if (strs[j].charAt(i) != strs[j + 1].charAt(i)) break;
                if (j != size - 2) continue;
                s.append(strs[j].charAt(i));
            }
            if (temp.equals(s.toString())) break;
        }

        return s.toString();
    }

    public static void main(String[] args) {
        String[] strs1 = {"flower", "flow", "flight"};
        String[] strs2 = {"dog", "racecar", "car"};

        System.out.println(longestCommonPrefix(strs1) + "\n");
        System.out.println(longestCommonPrefix(strs2));
    }
}
