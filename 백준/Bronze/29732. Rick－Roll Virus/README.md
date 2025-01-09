# [Bronze I] Rick-Roll Virus - 29732 

[문제 링크](https://www.acmicpc.net/problem/29732) 

### 성능 요약

메모리: 1116 KB, 시간: 52 ms

### 분류

구현

### 제출 일자

2024년 1월 7일 05:08:19

### 문제 설명

<p>2033년, 하루나라에서 밈 1위를 결정하고자 하는 투표에서 Rick Astley가 우승함과 동시에 하루나라에서 Rick-Roll Virus가 전염되고 있다. 이 바이러스에 감염되면 항상 <a href="https://www.youtube.com/watch?v=dQw4w9WgXcQ">Never gonna give you up</a>을 흥얼거리기 때문에 haru_202는 이 바이러스를 막으려고 한다.</p>

<p>하루나라에 사는 $N$명의 사람들은 일직선상에서 연속적으로 인접하여 살아가고 있으며, $x=i$에 위치한 감염자는 $1$일 뒤 바이러스를 $x = \max(1, i-K)$, $\cdots$, $i$, $\cdots$, $\min(N, i+K)$에 있는 사람들에게 전염시킨다.</p>

<p>$1$일 뒤, haru_202가 치료제 $M$개를 사용하여 Rick-Roll Virus에 감염된 사람을 모두 치료할 수 있는가? 단, 치료제는 $1$명에게 $1$개씩만 사용할 수 있다.</p>

### 입력 

 <p>첫 번째 줄에 정수 $N$, $M$, $K$가 공백으로 구분되어 주어진다. $(1 \leq N \leq 10\,000;$ $0 < M \leq N;$ $0 \leq K \leq \lfloor\frac{N}{2}\rfloor)$</p>

<p>두 번째 줄에 사람들의 감염 상태를 나타내는 길이 $N$의 문자열 $S$가 주어진다. $S_i$는 $x=i$에 위치한 사람의 감염상태를 나타내며, 다음과 같다. $(1 \leq i \leq N)$</p>

<ul>
	<li><code><span style="color:#e74c3c;">.</span></code>: 감염되지 않음</li>
	<li><span style="color:#e74c3c;"><code>R</code></span>: 감염됨</li>
</ul>

### 출력 

 <p>$1$일 뒤 Rick-Roll Virus에 감염된 사람들을 $M$개의 치료제로 모두 치료할 수 있으면 <span style="color:#e74c3c;"><code>Yes</code></span>, 아니면 <span style="color:#e74c3c;"><code>No</code></span>를 출력한다.</p>

