char code[] = "put your shell code here";

int main(int argc, char **argv)
{
  int (*func)();
  func = (int (*) ()) code;
  (int) (*func)();
}
