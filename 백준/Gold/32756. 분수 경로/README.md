# [Gold IV] 분수 경로 - 32756 

[문제 링크](https://www.acmicpc.net/problem/32756) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

애드 혹, 비트마스킹, 해 구성하기, 유클리드 호제법, 수학, 정수론

### 제출 일자

2024년 12월 2일 19:57:49

### 문제 설명

<p>무한한 $2$차원 좌표 평면에서 $(0, 0)$에는 무한 정밀도의 실수를 저장할 수 있는 변수 $A$와 $B$가 있다. 처음에 $A$의 값은 $0$이고 $B$의 값은 $1$이다. 두 변수는 이동할 때 같이 이동하며 항상 서로 같은 좌표에 존재한다.</p>

<p>변수 $A$, $B$는 $(x, y)$에서 인접한 좌표 $(x+1, y)$, $(x-1, y)$, $(x, y+1)$, $(x, y-1)$로 이동할 수 있다. 이때 이동한 거리는 $1$이라고 정의한다. 변수 $A$, $B$는 이동한 방향에 따라 값이 달라지는데 아래와 같이 달라진다.</p>

<ul>
	<li>$(x, y)$에서 $(x+1, y)$로 이동 : 변수 $A$에 변수 $B$를 더한다. 즉, $A$ <code>+=</code> $B$이며 문자 <span style="color:#e74c3c;"><code>R</code></span>로 표현한다.</li>
	<li>$(x, y)$에서 $(x-1, y)$로 이동 : 변수 $A$에서 변수 $B$를 뺀다. 즉, $A$ <code>-=</code> $B$이며 문자 <span style="color:#e74c3c;"><code>L</code></span>로 표현한다.</li>
	<li>$(x, y)$에서 $(x, y+1)$로 이동 : 변수 $B$에 $2$를 곱한다. 즉, $B$ <code>*=</code> $2$이며 문자 <span style="color:#e74c3c;"><code>U</code></span>로 표현한다.</li>
	<li>$(x, y)$에서 $(x, y-1)$로 이동 : 변수 $B$를 $2$로 나눈다. 즉, $B$ <code>/=</code> $2$이며 문자 <span style="color:#e74c3c;"><code>D</code></span>로 표현한다.</li>
</ul>

<p>변수 $A$의 값이 정확히 $Z$가 되기 위한 경로를 구하여라.</p>

### 입력 

 <p>첫 번째 줄에 정수 $n$, $d$가 공백으로 구분되어 주어진다. 이는 $\displaystyle Z = \frac{n}{d}$임을 의미한다.</p>

### 출력 

 <p>만약 변수 $A$의 값이 $Z$가 될 수 있다면</p>

<ul>
	<li>첫 번째 줄에 변수 $A$의 값이 $Z$가 되기 위한 이동 경로의 길이 $L$을 출력한다. 단, 경로의 길이는 $0$ 이상 $1000$ 이하여야 한다.</li>
	<li>두 번째 줄에 길이가 $L$인 경로 문자열을 출력한다. 그중 $i$번째 문자는 $i$번째 이동 종류를 의미한다. 출력하는 문자는 <span style="color:#e74c3c;"><code>R</code></span>, <span style="color:#e74c3c;"><code>L</code></span>, <span style="color:#e74c3c;"><code>U</code></span>, <span style="color:#e74c3c;"><code>D</code></span> 중 하나여야 한다. 가능한 경로가 여러 가지라면 그중 아무거나 하나를 출력한다. </li>
</ul>

<p>만약 변수 $A$의 값이 $Z$가 될 수 없다면 <span style="color:#e74c3c;"><code>-1</code></span>을 대신 출력한다.</p>

