#https://leetcode.com/problems/valid-parentheses/
# BALANCED BRACKETS

# Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

# An input string is valid if:

# Open brackets must be closed by the same type of brackets.
# Open brackets must be closed in the correct order.


# Example 1:

# Input: s = "()"
# Output: true
# Example 2:

# Input: s = "()[]{}"
# Output: true
# Example 3:

# Input: s = "(]"
# Output: false



# O(N) time and space
class Solution:
	def isValid(self, string: str) -> bool:
		Brackets = {"(": ")", "{": "}", "[": "]"}
		stack = []
		for bracket in string:
			if bracket in ["(", "{", "["]:
				stack.append(bracket)
			else:
				if stack:
					e=stack.pop()
					if bracket!=Brackets[e]:
						return False
				else:
					return False
		return False if stack else True
		


a=Solution()
print(a.isValid("()"))
   