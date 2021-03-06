#include "test_catch_child.h"
#include "catch_child.h"
#include <stdlib.h> /* malloc */

extern int tc;
extern int func_num;
extern int LOGLEVEL;
extern int the_sock;

START_TEST(test_preobit_reply_first)
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 1;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }
END_TEST

START_TEST(test_preobit_reply_irtn0)
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 2;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }
END_TEST

START_TEST(test_preobit_reply_pjobnull)
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 3;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }
END_TEST

START_TEST(test_preobit_reply_cleanedout)
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 4;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }
END_TEST

START_TEST(test_preobit_reply_pbsenone)
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 5;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }
END_TEST

START_TEST(test_preobit_reply_pbsedefault)
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 6;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }
END_TEST

START_TEST(test_preobit_reply_brcstatus)
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 7;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }
END_TEST

START_TEST(test_preobit_reply_pstatusnull)
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 8;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }
END_TEST

START_TEST(test_preobit_reply_objname)
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 9;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }
END_TEST

START_TEST(test_preobit_reply_sattrl)
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 10;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }
END_TEST

START_TEST(test_preobit_reply_sattrlnohost)
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 11;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }
END_TEST

START_TEST(test_preobit_reply_negcpid)
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 12;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }
END_TEST

START_TEST(test_preobit_reply_atflags)
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 13;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }
END_TEST

START_TEST(test_preobit_reply_atflagsneg)
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 14;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }
END_TEST

Suite *preobit_reply_suite(void)
  {
  Suite *s = suite_create("preobit_reply methods");
  TCase *tc_core = tcase_create("Core");
  tcase_add_test(tc_core, test_preobit_reply_first);
  tcase_add_test(tc_core, test_preobit_reply_irtn0);
  tcase_add_test(tc_core, test_preobit_reply_pjobnull);
  tcase_add_test(tc_core, test_preobit_reply_cleanedout);
  tcase_add_test(tc_core, test_preobit_reply_pbsenone);
  tcase_add_test(tc_core, test_preobit_reply_pbsedefault);
  tcase_add_test(tc_core, test_preobit_reply_brcstatus);
  tcase_add_test(tc_core, test_preobit_reply_pstatusnull);
  tcase_add_test(tc_core, test_preobit_reply_objname);
  tcase_add_test(tc_core, test_preobit_reply_sattrl);
  tcase_add_test(tc_core, test_preobit_reply_sattrlnohost);
  tcase_add_test(tc_core, test_preobit_reply_negcpid);
  tcase_add_test(tc_core, test_preobit_reply_atflags);
  tcase_add_test(tc_core, test_preobit_reply_atflagsneg);
  suite_add_tcase(s, tc_core);
  return s;
  }

void rundebug()
  {
  int *socket_ref = malloc(sizeof(int));
  *socket_ref = 1;
  func_num = PREOBIT_REPLY;
  tc = 13;
  LOGLEVEL = 2;
  preobit_reply(socket_ref);
  }

int main(void)
  {
  int number_failed = 0;
  SRunner *sr = NULL;
  rundebug();
  sr = srunner_create(preobit_reply_suite());
  srunner_set_log(sr, "preobit_reply_suite.log");
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return number_failed;
  }
