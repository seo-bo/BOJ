# [Silver II] 캬루 - 31288 

[문제 링크](https://www.acmicpc.net/problem/31288) 

### 성능 요약

메모리: 2024 KB, 시간: 0 ms

### 분류

애드 혹, 해 구성하기, 수학, 정수론

### 제출 일자

2024년 5월 18일 14:49:11

### 문제 설명

<div style="text-align: center">
<table border="0" cellpadding="0" cellspacing="0" class="nb table table-bordered" style="margin: 0;">
	<tbody>
		<tr>
			<td>
			<video autoplay="" class="nNbSB5OR" loading="lazy" loop="" muted="" playsinline="" src="https://u.acmicpc.net/8094adca-3f43-42e7-af03-33e1fc7c1280/kyaru.mp4" width="100%"> </video>
			</td>
			<td>
			<table align="left" border="0" cellpadding="0" cellspacing="0" class="nb table table-bordered" style="margin: 0;">
				<tbody>
					<tr>
						<td align="right">페코린느:</td>
						<td style="text-align: left;">캬루! 저예요, 알아보시겠어요?</td>
					</tr>
					<tr>
						<td align="right">캬루:</td>
						<td style="text-align: left;">페코⋯린느.</td>
					</tr>
					<tr>
						<td align="right">페코린느:</td>
						<td style="text-align: left;">다행이다.</td>
					</tr>
					<tr>
						<td align="right">캬루:</td>
						<td style="text-align: left;">다른 이름은 유스티아나 폰 아스트라이아.</td>
					</tr>
					<tr>
						<td> </td>
						<td style="text-align: left;"><strong>폐하의 이름을 사칭하는 괘씸한 놈, 죽어라.</strong></td>
					</tr>
				</tbody>
			</table>
			</td>
		</tr>
	</tbody>
</table>
</div>

<p style="text-align: center;">프린세스 커넥트! Re:Dive 8장 "엇갈리는 마음", 15화 "절대로 양보할 수 없는 것" 내용 일부 발췌</p>

<p>이번에 캬루는 소수를 배신했다. 소수의 한 자리를 바꾸어서 소수가 아니게 만들어버렸다. 구체적으로는, $0$으로 시작하지 않는 $N$자리 소수 $P$에 대해 어떤 수 $Q$가 $P$-<strong>캬루</strong>라는 것은 다음을 모두 만족하는 것을 의미한다.</p>

<ul>
	<li>$Q$는 $2$ 이상의 $N$자리 정수이며, $0$으로 시작하지 않는다.</li>
	<li>$P$와 $Q$의 서로 다른 자릿수는 하나뿐이다.</li>
	<li>$Q$는 소수가 아니다.</li>
</ul>

<p>다음은 $N=2, P=19$일 때 $P$-캬루와 $P$-캬루가 아닌 수의 예시이다.</p>

<ul>
	<li>$Q = 9$는 $1$자리 정수이므로 $19$-캬루가 아니다. $09$처럼 수가 $0$으로 시작할 수는 없다.</li>
	<li>$Q = 92$는 $P=19$와 서로 다른 자릿수가 두 개이므로 $19$-캬루가 아니다.</li>
	<li>$Q = 29$는 소수이기 때문에 $19$-캬루가 아니다.</li>
	<li>$Q = 16, 49$ 등은 $19$-캬루이다.</li>
</ul>

<p>$N$자리 소수 $P$가 주어졌을 때, $P$-캬루인 수가 적어도 $N$개 있다는 것을 증명할 수 있다. 이 $N$개의 수를 직접 찾아보자.</p>

### 입력 

 <p>첫째 줄에 테스트 케이스의 수 $T$가 주어진다. $(1 \le T \le 3\,545)$</p>

<p>각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에는 문제의 $N$과 $P$가 공백으로 구분되어 주어진다. $(1 \le N \le 100;$ $10^{N-1} \le P \lt 10^N;$ $P$는 소수$)$</p>

<p>주어지는 모든 $N$의 합은 $3\,545$ 이하이다.</p>

### 출력 

 <p>각 테스트 케이스마다 $N$개의 줄을 출력한다.</p>

<p>$i$번째 줄에는 $Q_i$와 $R_i$를 공백으로 구분하여 출력한다. $Q_i$는 서로 다른 $P$-캬루들이며, $R_i$는 $2 \le R_i < Q_i$인 $Q_i$의 약수이다.</p>

