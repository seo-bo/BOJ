# [Silver I] 컴소인의 크리스마스 - 32865 

[문제 링크](https://www.acmicpc.net/problem/32865) 

### 성능 요약

메모리: 3648 KB, 시간: 60 ms

### 분류

그리디 알고리즘, 정렬

### 제출 일자

2024년 12월 8일 01:04:54

### 문제 설명

<p style="text-align: center;"><img alt="" src=""></p>

<p>컴퓨터소프트웨어학부에는 크리스마스마다 백준 제출 현황을 크리스마스트리처럼 꾸미는 전통이 있다. 구체적으로, 어떤 날의 제출을 모두 모았을 때 다음 조건을 전부 만족한다면 그날의 제출이 <strong>크리스마스트리처럼 꾸며졌다</strong>고 정의한다.</p>

<ul>
	<li>모든 제출의 채점 결과는 <span class="result-text result-ac" data-color="ac">맞았습니다!!</span> 또는 <span class="result-text result-wa " data-color="wa">틀렸습니다</span> 중 하나이다.</li>
	<li>제출을 시간순으로 나열했을 때, 첫 번째 제출의 채점 결과는 <span class="result-text result-ac" data-color="ac">맞았습니다!!</span>이다.</li>
	<li>첫 번째가 아닌 제출의 채점 결과는 바로 이전 제출의 결과와 다르다. 예를 들어, 두 번째 제출의 채점 결과는 <span class="result-text result-wa " data-color="wa">틀렸습니다</span>, 세 번째 제출은 <span class="result-text result-ac" data-color="ac">맞았습니다!!</span>, $\cdots$ 이다.</li>
</ul>

<p>아람이는 크리스마스에 $N$개의 문제를 모두 풀 것이다. $N$개의 문제에는 각각 $1$부터 $N$까지의 자연수 번호가 하나씩 매겨져 있다. 아람이는 문제를 풀 때 다음 조건을 반드시 지킨다.</p>

<ul>
	<li>채점 결과가 <span class="result-text result-ac" data-color="ac">맞았습니다!!</span> 또는 <span class="result-text result-wa " data-color="wa">틀렸습니다</span>인 코드만 제출한다.</li>
	<li>한 번 푼 문제에는 다시 제출하지 않는다.</li>
</ul>

<p>컴소의 전통을 지키기 위해, 아람이는 크리스마스 날 자신의 제출 현황을 크리스마스트리처럼 꾸미고 싶다. 전지전능한 참가자 여러분은 아람이가 각 문제를 몇 번 틀린 뒤 맞히는지 정확히 알 수 있다. 아람이를 위해 $N$개의 문제에서 모두 <span class="result-text result-ac" data-color="ac">맞았습니다!!</span>를 받으면서 제출 현황을 크리스마스트리처럼 꾸밀 수 있는지, 가능하다면 어떤 순서로 제출해야 하는지 알려 주는 프로그램을 작성해 보자.</p>

### 입력 

 <p>첫째 줄에 아람이가 풀 문제 개수 $N$이 주어진다. $(1\leq N\leq 200\, 000)$</p>

<p>둘째 줄부터 $N$개의 정수 $s_1,s_2,\cdots ,s_N$이 한 줄에 하나씩 주어진다. $s_i$는 아람이가 $i$번 문제를 $s_i$번 틀린 뒤 해결하게 된다는 의미이다. 즉, 아람이는 $i$번 문제에 최대 $s_i+1$번 제출할 수 있으며, 그중 $s_i+1$번째 제출에서 <span class="result-text result-ac" data-color="ac">맞았습니다!!</span>를 받고 나머지 제출에서는 <span class="result-text result-wa " data-color="wa">틀렸습니다</span>를 받을 것이다. $(0\le s_i\le 10^9)$</p>

### 출력 

 <p>첫째 줄부터 $2\times N-1$개의 줄에 걸쳐 아람이가 제출해야 하는 문제 번호를 한 줄에 하나씩 제출 시간순으로 출력한다. 가능한 순서가 여러 가지라면 아무거나 출력한다.</p>

<p>만약 크리스마스트리처럼 꾸밀 수 없다면 첫째 줄에 <span style="color:#e74c3c;"><code>-1</code></span>을 출력한다.</p>

