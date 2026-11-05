// SparkMapaWindow__ZoomMinimoDaArte__18064b3d0 @ 0x18064b3d0

undefined8 SparkMapaWindow__ZoomMinimoDaArte__18064b3d0(void)

{
  undefined8 uVar1;
  float fVar2;
  float fStackX_1c;
  
  uVar1 = SparkMapaWindow__TamanhoDaVista__180649960();
  fStackX_1c = (float)((ulonglong)uVar1 >> 0x20);
  fVar2 = (float)uVar1 * 0.0009765625;
  if (fVar2 <= fStackX_1c / 1536.0) {
    fVar2 = fStackX_1c / 1536.0;
  }
  return CONCAT44(fStackX_1c,fVar2);
}

