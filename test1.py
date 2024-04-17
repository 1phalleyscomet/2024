#1번
# 주어진 리스트 내에 홀수를 찾아 합을 반환하는 solution함수

def solution(data):
    return sum(filter(lambda x : x%2!=0, data))
    
    #lambda x의 값이 true 인 것을 data 에서 반환 후 값을 모두 합함
    #lambda x : x를 2로 나눈 값의 나머지가 0이 아닌 값