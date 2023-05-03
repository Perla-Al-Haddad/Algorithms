def findIndex(numsList: list[int], skip: int, num: int) -> int:
    tempNumsList: list[int] = numsList[skip + 1 :]
    for i in range(len(tempNumsList)):
        if num == tempNumsList[i]:
            return i + skip + 1
    return -1


class Solution:
    def twoSumOP(self, nums: list[int], target: int) -> list[int]:
        d = {}
        for i, j in enumerate(nums):
            print(i, j)
            r = target - j
            if r in d:
                return [d[r], i]
            d[j] = i

    def twoSum(self, nums: list[int], target: int) -> list[int]:
        for i in range(len(nums)):
            tempTarget: int = target - nums[i]
            foundIndex = findIndex(nums, i, tempTarget)
            if foundIndex > -1:
                return [i, foundIndex]
        return [0, 0]


nums: list[int] = [2, 7, 11, 8]
target: int = 9

sol = Solution()
res = sol.twoSumOP(nums, target)

print(res)