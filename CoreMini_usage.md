# Regfile

```
```

# UncachedFetch

```
Resource Usage Summary
Resource	Usage
I/O Port	24
I/O Buf	15
    IBUF	5
    OBUF	10
Register	126
    DFFCE	126
LUT	1174
    LUT2	110
    LUT3	236
    LUT4	828
ALU	31
    ALU	31
DSP	
    MULT12X12	1
Resource Utilization Summary
Resource	Usage	Utilization
Logic	1205(1174 LUT, 31 ALU) / 59904	3%
Register	126 / 60780	<1%
  --Register as Latch	0 / 60780	0%
  --Register as FF	126 / 60780	<1%
BSRAM	0 / 118	0%
```

# Alu (x4)

```
Resource Usage Summary
Resource	Usage
I/O Port	24
I/O Buf	20
    IBUF	10
    OBUF	10
Register	155
    DFFCE	155
LUT	1337
    LUT2	140
    LUT3	313
    LUT4	884
ALU	61
    ALU	61
INV	5
    INV	5
DSP	
    MULT12X12	1
Resource Utilization Summary
Resource	Usage	Utilization
Logic	1403(1342 LUT, 61 ALU) / 59904	3%
Register	155 / 60780	<1%
  --Register as Latch	0 / 60780	0%
  --Register as FF	155 / 60780	<1%
BSRAM	0 / 118	0%
```

# Bru + Bru_1 x 3

```
Resource Usage Summary
Resource	Usage
I/O Port	24
I/O Buf	22
    IBUF	12
    OBUF	10
Register	332
    DFFCE	332
LUT	2014
    LUT2	156
    LUT3	563
    LUT4	1295
ALU	442
    ALU	442
INV	5
    INV	5
DSP	
    MULT12X12	1
Resource Utilization Summary
Resource	Usage	Utilization
Logic	2461(2019 LUT, 442 ALU) / 59904	5%
Register	332 / 60780	<1%
  --Register as Latch	0 / 60780	0%
  --Register as FF	332 / 60780	<1%
BSRAM	0 / 118	0%
```

# FloatCore

```
Resource Usage Summary
Resource	Usage
I/O Port	24
I/O Buf	22
    IBUF	12
    OBUF	10
Register	610
    DFFSE	4
    DFFRE	200
    DFFCE	406
LUT	3835
    LUT2	328
    LUT3	1073
    LUT4	2434
ALU	618
    ALU	618
INV	8
    INV	8
DSP	
    MULT12X12	1
Resource Utilization Summary
Resource	Usage	Utilization
Logic	4461(3843 LUT, 618 ALU) / 59904	8%
Register	610 / 60780	2%
  --Register as Latch	0 / 60780	0%
  --Register as FF	610 / 60780	2%
BSRAM	0 / 118	0%
```

# FRegfile

```
Resource Usage Summary
Resource	Usage
I/O Port	24
I/O Buf	22
    IBUF	12
    OBUF	10
Register	898
    DFFSE	4
    DFFRE	201
    DFFCE	693
LUT	4643
    LUT2	344
    LUT3	1837
    LUT4	2462
ALU	617
    ALU	617
INV	8
    INV	8
DSP	
    MULT12X12	1
Resource Utilization Summary
Resource	Usage	Utilization
Logic	5268(4651 LUT, 617 ALU) / 59904	9%
Register	898 / 60780	2%
  --Register as Latch	0 / 60780	0%
  --Register as FF	898 / 60780	2%
BSRAM	0 / 118	0%
```



# DispatchV1

```
Resource Usage Summary
Resource	Usage
I/O Port	24
I/O Buf	15
    IBUF	5
    OBUF	10
Register	4337
    DFFSE	4
    DFFRE	286
    DFFPE	2
    DFFCE	4045
LUT	50802
    LUT2	2791
    LUT3	15279
    LUT4	32732
ALU	1364
    ALU	1364
INV	14
    INV	14
DSP	
    MULT12X12	2
    MULT27X36	1
Resource Utilization Summary
Resource	Usage	Utilization
Logic	52180(50816 LUT, 1364 ALU) / 59904	88%
Register	4337 / 60780	8%
  --Register as Latch	0 / 60780	0%
  --Register as FF	4337 / 60780	8%
BSRAM	0 / 118	0%
```

# LsuV1 (no dispatcher)

```
Resource Usage Summary
Resource	Usage
I/O Port	24
I/O Buf	22
    IBUF	12
    OBUF	10
Register	1634
    DFFSE	4
    DFFRE	200
    DFFCE	1430
LUT	5908
    LUT2	347
    LUT3	3071
    LUT4	2490
ALU	618
    ALU	618
INV	8
    INV	8
DSP	
    MULT12X12	1
Resource Utilization Summary
Resource	Usage	Utilization
Logic	6534(5916 LUT, 618 ALU) / 59904	11%
Register	1634 / 60780	3%
  --Register as Latch	0 / 60780	0%
  --Register as FF	1634 / 60780	3%
BSRAM	0 / 118	0%
```

# Mlu (no dispatcher)

```
Resource Usage Summary
Resource	Usage
I/O Port	24
I/O Buf	22
    IBUF	12
    OBUF	10
Register	1634
    DFFSE	4
    DFFRE	200
    DFFCE	1430
LUT	5908
    LUT2	347
    LUT3	3071
    LUT4	2490
ALU	618
    ALU	618
INV	8
    INV	8
DSP	
    MULT12X12	1
Resource Utilization Summary
Resource	Usage	Utilization
Logic	6534(5916 LUT, 618 ALU) / 59904	11%
Register	1634 / 60780	3%
  --Register as Latch	0 / 60780	0%
  --Register as FF	1634 / 60780	3%
BSRAM	0 / 118	0%
```

# FaultManager (no dispatcher)

```

```

# Arbiter3_RegfileWriteDataIO (no dispatcher)

```
```

# Csr (no dispatcher)

```
```