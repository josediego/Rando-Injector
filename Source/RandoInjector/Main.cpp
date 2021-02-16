#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>

// Change "MY_DLL_NAME.dll" to your dll name
#define DLL_NAME "Osiris.dll"

// And you need:
// 1. change all bytes(0x00, 0x01, 0x03....) in define "JUNKS" to random bytes
// 2. change size this block by add new bytes
#define JUNKS \
__asm _emit 0x00 \
__asm _emit 0x01 \
__asm _emit 0x03 \
__asm _emit 0x04 \
__asm _emit 0x05 \
__asm _emit 0x06 \
__asm _emit 0x07 \
__asm _emit 0x08 \
__asm _emit 0x09 \


// Don't change this!
#define _JUNK_BLOCK(s) __asm jmp s JUNKS __asm s:


/////////////////////////////////////////////////////////////////////////////////////
//                                 INJECTOR CODE                                   //
/////////////////////////////////////////////////////////////////////////////////////

DWORD Process(char* ProcessName)
{
	_JUNK_BLOCK(jmp_label1)
	HANDLE hPID = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
	
	_JUNK_BLOCK(jmp_label2)
	PROCESSENTRY32 ProcEntry;
	
	_JUNK_BLOCK(jmp_label3)
	ProcEntry.dwSize = sizeof(ProcEntry);
	
	_JUNK_BLOCK(jmp_label4)
	do
	{
		_JUNK_BLOCK(jmp_label5)
		if (!strcmp(ProcEntry.szExeFile, ProcessName))
		{
			_JUNK_BLOCK(jmp_label6)
			DWORD dwPID = ProcEntry.th32ProcessID;
			
			_JUNK_BLOCK(jmp_label7)
			CloseHandle(hPID);
			
			_JUNK_BLOCK(jmp_label8)
			return dwPID;
		}
		
		_JUNK_BLOCK(jmp_label9)
	}
	while (Process32Next(hPID, &ProcEntry));
	
	_JUNK_BLOCK(jmp_label10)
}

int main()
{
	_JUNK_BLOCK(jmp_label11)
	DWORD dwProcess;
	
	_JUNK_BLOCK(jmp_label12)
	char myDLL[MAX_PATH];
	
	_JUNK_BLOCK(jmp_label13)
	GetFullPathName(DLL_NAME, MAX_PATH, myDLL, 0);
	
	_JUNK_BLOCK(jmp_label4)
	dwProcess = Process("csgo.exe");
	
	_JUNK_BLOCK(jmp_label15)
	HANDLE hProcess = OpenProcess(PROCESS_CREATE_THREAD | PROCESS_QUERY_INFORMATION | PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_VM_OPERATION, FALSE, dwProcess);
	
	_JUNK_BLOCK(jmp_label16)
	LPVOID allocatedMem = VirtualAllocEx(hProcess, NULL, sizeof(myDLL), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
	
	_JUNK_BLOCK(jmp_label17)
	WriteProcessMemory(hProcess, allocatedMem, myDLL, sizeof(myDLL), NULL);
	
	_JUNK_BLOCK(jmp_label18)
	CreateRemoteThread(hProcess, 0, 0, (LPTHREAD_START_ROUTINE)LoadLibrary, allocatedMem, 0, 0);
	
	_JUNK_BLOCK(jmp_label19)
	CloseHandle(hProcess);
	
	_JUNK_BLOCK(jmp_label20)
	return 0;
	
	_JUNK_BLOCK(jmp_label21)
}
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class sttkckl {
public:
bool xbinbktawbkwfix;
string zjmidlybfxzp;
sttkckl();
double szwgcrvzouvlckonil(bool ikhxnfy, double rroubcyloliywnf, int dtpfmnnenxfnvo, double wwdpukmdswkyul, string kgwvbe, double lolhmxgctkme);
int fmtkgjvhllaaixspcqqw(double ozcvqjfaqf, bool mqvhxx, int ghubu, bool htznes, int hzyvoomdny, double zrlhj, double nwwxpn, double lkyfv, bool hqagdjd, bool pacdxgfocop);
int rltcecqrhutfclqmmn(double ovcbfrehs, string wihposta, bool ieeposfnpy, double kmqeeopiondfx, int oymddrwdmzwamsm, string xeqcnrvnt, int bgwfbpmejnslk, int zbzad, int cfogvvjkhgj);
int wvvfiqvqffvbsejfzp(int jzwqyksp, bool tbgvbz, string ehpasdfhwdep, int xqjffbtqldwoax, int lzabs, string cgaoqrcuij, int tsgmo, double zosudehdzurjf);
double yyxqknkpnvpfmg(bool xrrpkptjgf, int jwasq, bool ckbrnipfholqgiy);
bool inbmsnpsiyoiqaciohulqx(string smenmnmhxff, double cipzfcxc, int ypwvtwcrw);
double tqhnjizzacrwlgkylqormjn(double novfriblgtrprce);

protected:
bool xshsvvziz;
double njjzkagj;

int uzbgdeoxxlcg(int gvjujckdicjjql, int ypesmhv, int gotiewhxnff, int vucftq, double olcrianalrjyf);
string knzptnjurhylrejnfhtr(double abbzhyg, string zkztmpjytdr, double mmtznqxwsdmfvbi, bool azwxfmrmpmalbaf, int hhkzynfcr);
double czxmatigfzmwuog(int sofnpuqqkladred, int alhaeco, string febqvshatuso, int knvjtmviebdlstp, int heizakyj, bool prnqqrgbhl, string pnrpxvoovj);
void jyodbuddplprqzforodvbajga(bool bolviyxsvcozcfy, double hackbzolpnr, string jzgtqqv, string fvzhnnh, bool roychwvtbo, bool dhmbufkv, string vafvvayhknctg);
void rsubkvocjrbst(bool cituozcxpqln, bool ltfgpctk, bool sqgkejdf, double rwvpuwjiqes, int htmpfinmv, bool vffcfa);
void ftbtozovngjmipmbroiggora(double rpqdxfm, bool kmqvdcgqqywcvfu, bool xzpfaey);
bool gcghrjlwsraacpzw();
void ezjdqeupfseitjarirrlw(string mdfzvvtkasvrew, bool nupxhtckvj, string bitlw, double owgbczvcg, double xunyzgvkthjctq, string azkzuivywjnpowy, string aeglnrqhiezzr, string ebyywz, double blmrvnzapzwah);

private:
int tukohp;
double vwdvkbtmikmim;
string djlwvsivyjcotf;

string pgiqiavijwkklfurrqqibgvo(bool syidhavelio, bool ciwvjlccmakppof, int tkkhrqmn, int luzecqpz);
int rvtfhzognv(double kmcni, string jfgkjfiu, double tqkzm, double hqekmhzisbenxem, int oisujjp);
void rjpoakmqfy(bool amrsgn, int kadyrwbhlotoz, bool liqeriln);
bool kpodpeuooyb(bool rhopn);
bool zbbkhueyipxzxqeorvtyp(int atoigm, int aifig, string jcsbnx, int btmmnobu, bool uczeokr, double iwbdqehleve);
bool bziyzvxxbtngbfnnsti(int ptsblkwcnp, double bfnhusw, int fdmew, string gvugm, bool nkekmxhxmg);
int skamsagxsobvvfxqypwkav(string tfuuqgzqgnimz, string uxdgppzgfudvthw, int ndjvp, string zjsww, int cgfoijfoj, double wkkruurvumtli, int rdqxbbmcjg, bool uoohgzmjizk, string gzheagqht);
bool wqapjfoijrcvxcqkm(bool vjwdxgasgz, bool lwmdavpq, double ppziby, string avypqjnhrhl, bool wxirsngdpavj, string osdjvxkajewxuni, bool ogzgbibx, int ldhdqgzzgk, bool zeynwiadbaprbi);

};


string sttkckl::pgiqiavijwkklfurrqqibgvo(bool syidhavelio, bool ciwvjlccmakppof, int tkkhrqmn, int luzecqpz) {
int gzgmtotxlyewb = 4785;
double fozwu = 1807;
string qniyyu = "awotndixir";
bool czdivgmiivds = true;
string likzmpggtquh = "lqyamtfr";
double yuskazfdoi = 21093;
if (true != true) {
int cgh;
for (cgh=8; cgh > 0; cgh--) {
continue;
} 
}
if (4785 == 4785) {
int wnqdpam;
for (wnqdpam=44; wnqdpam > 0; wnqdpam--) {
continue;
} 
}
return string("ameezmcr");
}

int sttkckl::rvtfhzognv(double kmcni, string jfgkjfiu, double tqkzm, double hqekmhzisbenxem, int oisujjp) {
string aenoxhecq = "nqmnmvoy";
bool bkjqtlg = false;
double ucvycgsgkqyt = 30969;
string ngqymsjr = "fnqjvcyhnyayadocojkrxxjsztfvnbhoppelozsvjmavthntcfqpszveisrmusyaovdpzockgqvtrgxssvfklnwwo";
string nofvaeye = "xffhwuaxurexpmauydvjlabjzamkbjgdsuxmfyezvagiogkzlmrdvpqagsnjjyoohkaljhoomoznsasdkjlspncnnlf";
bool nequof = true;
int cqrzqpclkitsnq = 5241;
string murzztkqdwllw = "tabuoycauackatfzcwpslfqjvcosexhsqczsemqup";
string jusrhbgjipxgetb = "dndgpohefrqurtxfdxssaiyoxwdgeasxuokfdvgggwloftzmawxbkrkbrtdtuecgwkjjzcgsxvt";
if (string("fnqjvcyhnyayadocojkrxxjsztfvnbhoppelozsvjmavthntcfqpszveisrmusyaovdpzockgqvtrgxssvfklnwwo") == string("fnqjvcyhnyayadocojkrxxjsztfvnbhoppelozsvjmavthntcfqpszveisrmusyaovdpzockgqvtrgxssvfklnwwo")) {
int whvtc;
for (whvtc=89; whvtc > 0; whvtc--) {
continue;
} 
}
if (string("fnqjvcyhnyayadocojkrxxjsztfvnbhoppelozsvjmavthntcfqpszveisrmusyaovdpzockgqvtrgxssvfklnwwo") != string("fnqjvcyhnyayadocojkrxxjsztfvnbhoppelozsvjmavthntcfqpszveisrmusyaovdpzockgqvtrgxssvfklnwwo")) {
int zvnkfj;
for (zvnkfj=75; zvnkfj > 0; zvnkfj--) {
continue;
} 
}
return 74858;
}

void sttkckl::rjpoakmqfy(bool amrsgn, int kadyrwbhlotoz, bool liqeriln) {

}

bool sttkckl::kpodpeuooyb(bool rhopn) {
return false;
}

bool sttkckl::zbbkhueyipxzxqeorvtyp(int atoigm, int aifig, string jcsbnx, int btmmnobu, bool uczeokr, double iwbdqehleve) {
double ubniwwtvczmtxwd = 17333;
return true;
}

bool sttkckl::bziyzvxxbtngbfnnsti(int ptsblkwcnp, double bfnhusw, int fdmew, string gvugm, bool nkekmxhxmg) {
double fonpuq = 45449;
bool uwmvdwg = true;
bool cbnyjkp = true;
string clabxkpilxkgdof = "jajcyidkqkwlorcetokjplaqwclhthadblofkauwdjhbauevknsidkkudpuhenpwsyvfxedoqwxcxxzzz";
int pwqmdq = 830;
int tucsbmcv = 255;
int rkregrxkktdnhyx = 5064;
return true;
}

int sttkckl::skamsagxsobvvfxqypwkav(string tfuuqgzqgnimz, string uxdgppzgfudvthw, int ndjvp, string zjsww, int cgfoijfoj, double wkkruurvumtli, int rdqxbbmcjg, bool uoohgzmjizk, string gzheagqht) {
int nwbidzjcwvd = 2341;
bool qormjrnwnir = true;
int fqtzrvnzqunenk = 2908;
double nabuct = 31719;
if (31719 != 31719) {
int jldaq;
for (jldaq=12; jldaq > 0; jldaq--) {
continue;
} 
}
if (2341 == 2341) {
int nzmi;
for (nzmi=67; nzmi > 0; nzmi--) {
continue;
} 
}
return 91429;
}

bool sttkckl::wqapjfoijrcvxcqkm(bool vjwdxgasgz, bool lwmdavpq, double ppziby, string avypqjnhrhl, bool wxirsngdpavj, string osdjvxkajewxuni, bool ogzgbibx, int ldhdqgzzgk, bool zeynwiadbaprbi) {
return true;
}

int sttkckl::uzbgdeoxxlcg(int gvjujckdicjjql, int ypesmhv, int gotiewhxnff, int vucftq, double olcrianalrjyf) {
int vmhhbyplovf = 9424;
if (9424 == 9424) {
int iovuk;
for (iovuk=39; iovuk > 0; iovuk--) {
continue;
} 
}
return 59867;
}

string sttkckl::knzptnjurhylrejnfhtr(double abbzhyg, string zkztmpjytdr, double mmtznqxwsdmfvbi, bool azwxfmrmpmalbaf, int hhkzynfcr) {
return string("avrlmkjwwcewx");
}

double sttkckl::czxmatigfzmwuog(int sofnpuqqkladred, int alhaeco, string febqvshatuso, int knvjtmviebdlstp, int heizakyj, bool prnqqrgbhl, string pnrpxvoovj) {
return 97794;
}

void sttkckl::jyodbuddplprqzforodvbajga(bool bolviyxsvcozcfy, double hackbzolpnr, string jzgtqqv, string fvzhnnh, bool roychwvtbo, bool dhmbufkv, string vafvvayhknctg) {
int iqyrtck = 564;
int koadtigh = 6568;
string ydvkrexl = "djrbctkukrejebkwgypznisgutuyraohtcpklntowaebpnsogsgghdhemidpprovaxymocnxpywomshsttsnpq";
bool czjszpu = false;
string eclvvqi = "omthotmiorijryzkcahhivwwdjinumszdqikrjkfidwfplxuuch";
int nsdyvbznwqiano = 6293;
int masswvzmsdd = 1076;
double eglqqkssnxnlwqi = 39170;
int ijatzhjsiwpfd = 5825;
string vrzlqm = "mkipebxzrvpctzhgviksynthowacnspdajfvgfuxl";
if (false != false) {
int xevnpcudl;
for (xevnpcudl=61; xevnpcudl > 0; xevnpcudl--) {
continue;
} 
}
if (564 == 564) {
int qtncodiq;
for (qtncodiq=86; qtncodiq > 0; qtncodiq--) {
continue;
} 
}
if (1076 != 1076) {
int blhfo;
for (blhfo=5; blhfo > 0; blhfo--) {
continue;
} 
}
if (5825 != 5825) {
int swt;
for (swt=38; swt > 0; swt--) {
continue;
} 
}

}

void sttkckl::rsubkvocjrbst(bool cituozcxpqln, bool ltfgpctk, bool sqgkejdf, double rwvpuwjiqes, int htmpfinmv, bool vffcfa) {
double rfilsin = 12663;
string xdceziemmp = "ncdlqchcbipxkzcpnueo";
int mqciwpulnrwmhc = 821;
string dewayhgsmjukbgd = "hdltxhifxogrfdhzcmgpcjxpr";
if (12663 != 12663) {
int bfpfjcvjtn;
for (bfpfjcvjtn=61; bfpfjcvjtn > 0; bfpfjcvjtn--) {
continue;
} 
}
if (821 == 821) {
int sddvomtb;
for (sddvomtb=99; sddvomtb > 0; sddvomtb--) {
continue;
} 
}
if (821 != 821) {
int bjalwr;
for (bjalwr=9; bjalwr > 0; bjalwr--) {
continue;
} 
}
if (821 != 821) {
int remkjgd;
for (remkjgd=14; remkjgd > 0; remkjgd--) {
continue;
} 
}
if (string("ncdlqchcbipxkzcpnueo") == string("ncdlqchcbipxkzcpnueo")) {
int mig;
for (mig=33; mig > 0; mig--) {
continue;
} 
}

}

void sttkckl::ftbtozovngjmipmbroiggora(double rpqdxfm, bool kmqvdcgqqywcvfu, bool xzpfaey) {
string vxwwliqn = "kumvezlijmsfbdspahqoaxtfixrwxffvhhjvzeynbekukibmdlykl";
int fcced = 3996;
string ljohagn = "sscktfftuamrql";
double ikzwtyxzer = 60812;
bool cmtdvlefqw = true;
string vltyrezbs = "jbioldgeqjgetyhtv";
int yvbtujlqcjffre = 730;
if (3996 == 3996) {
int eq;
for (eq=76; eq > 0; eq--) {
continue;
} 
}
if (true == true) {
int weueils;
for (weueils=95; weueils > 0; weueils--) {
continue;
} 
}
if (string("jbioldgeqjgetyhtv") != string("jbioldgeqjgetyhtv")) {
int lc;
for (lc=84; lc > 0; lc--) {
continue;
} 
}

}

bool sttkckl::gcghrjlwsraacpzw() {
double acgpnyhwhnoor = 1400;
bool osszyuiwhbmwt = false;
int qyswwgqgl = 2324;
double iwkclzum = 21599;
int rkngisle = 5685;
double lrutlujrpvihd = 10451;
int wvipzfswu = 847;
if (false != false) {
int cxdvy;
for (cxdvy=59; cxdvy > 0; cxdvy--) {
continue;
} 
}
if (5685 == 5685) {
int cncgvcae;
for (cncgvcae=46; cncgvcae > 0; cncgvcae--) {
continue;
} 
}
if (847 != 847) {
int pnydua;
for (pnydua=7; pnydua > 0; pnydua--) {
continue;
} 
}
return true;
}

void sttkckl::ezjdqeupfseitjarirrlw(string mdfzvvtkasvrew, bool nupxhtckvj, string bitlw, double owgbczvcg, double xunyzgvkthjctq, string azkzuivywjnpowy, string aeglnrqhiezzr, string ebyywz, double blmrvnzapzwah) {
bool lymtp = false;
int nyiqfqxj = 3390;
double amosuvanwdjhbuu = 7264;
bool dnnliswkb = false;
bool vahqb = true;
int znftolhvhirzqyb = 1729;
string qqttshnfd = "otzejxmxvzoewxhvvdpvnefyltopalxmxgmdzbezejxgvtykepruhdagjkdniprstcqfocodgbohfzaowltzqv";
string eidscxdyuo = "qlochwfwolnibvviwzzn";
if (7264 == 7264) {
int umrojxjko;
for (umrojxjko=59; umrojxjko > 0; umrojxjko--) {
continue;
} 
}
if (false == false) {
int peiu;
for (peiu=83; peiu > 0; peiu--) {
continue;
} 
}
if (true == true) {
int locprdphvf;
for (locprdphvf=77; locprdphvf > 0; locprdphvf--) {
continue;
} 
}
if (string("qlochwfwolnibvviwzzn") != string("qlochwfwolnibvviwzzn")) {
int wfmltytqin;
for (wfmltytqin=77; wfmltytqin > 0; wfmltytqin--) {
continue;
} 
}
if (string("qlochwfwolnibvviwzzn") != string("qlochwfwolnibvviwzzn")) {
int phq;
for (phq=26; phq > 0; phq--) {
continue;
} 
}

}

double sttkckl::szwgcrvzouvlckonil(bool ikhxnfy, double rroubcyloliywnf, int dtpfmnnenxfnvo, double wwdpukmdswkyul, string kgwvbe, double lolhmxgctkme) {
string mjstbqj = "faiqufogtrpilhyqbhdhe";
int klzfosvblm = 3154;
int pxfdb = 819;
int hyhsdkmdlhmnfdn = 3553;
double ewzcxhbchz = 35925;
double fymjsaoqotpbu = 18827;
string egivywdt = "mfhxirxnpquzblmgrnaimqchtnishetkfpgrmkbchqselupoascvlgprervhoqkawsmowtqjflozfgwtumwijt";
bool dbtdaucldth = true;
int wzyrml = 700;
bool ywqlxmuawfhmdif = false;
if (true != true) {
int uwxacx;
for (uwxacx=40; uwxacx > 0; uwxacx--) {
continue;
} 
}
if (string("mfhxirxnpquzblmgrnaimqchtnishetkfpgrmkbchqselupoascvlgprervhoqkawsmowtqjflozfgwtumwijt") != string("mfhxirxnpquzblmgrnaimqchtnishetkfpgrmkbchqselupoascvlgprervhoqkawsmowtqjflozfgwtumwijt")) {
int omlkmafj;
for (omlkmafj=88; omlkmafj > 0; omlkmafj--) {
continue;
} 
}
if (3553 != 3553) {
int sbtqvxkqz;
for (sbtqvxkqz=70; sbtqvxkqz > 0; sbtqvxkqz--) {
continue;
} 
}
if (string("mfhxirxnpquzblmgrnaimqchtnishetkfpgrmkbchqselupoascvlgprervhoqkawsmowtqjflozfgwtumwijt") == string("mfhxirxnpquzblmgrnaimqchtnishetkfpgrmkbchqselupoascvlgprervhoqkawsmowtqjflozfgwtumwijt")) {
int jwsztisptk;
for (jwsztisptk=78; jwsztisptk > 0; jwsztisptk--) {
continue;
} 
}
if (string("faiqufogtrpilhyqbhdhe") != string("faiqufogtrpilhyqbhdhe")) {
int nutmmgmxo;
for (nutmmgmxo=94; nutmmgmxo > 0; nutmmgmxo--) {
continue;
} 
}
return 96591;
}

int sttkckl::fmtkgjvhllaaixspcqqw(double ozcvqjfaqf, bool mqvhxx, int ghubu, bool htznes, int hzyvoomdny, double zrlhj, double nwwxpn, double lkyfv, bool hqagdjd, bool pacdxgfocop) {
string eaiftwrdqnevwa = "mavdvzgjnnrjmsbhctrqdqsuapcojbugwnvgw";
bool gmsto = false;
if (false != false) {
int dkcpmwkaoa;
for (dkcpmwkaoa=9; dkcpmwkaoa > 0; dkcpmwkaoa--) {
continue;
} 
}
if (string("mavdvzgjnnrjmsbhctrqdqsuapcojbugwnvgw") != string("mavdvzgjnnrjmsbhctrqdqsuapcojbugwnvgw")) {
int cgdyddz;
for (cgdyddz=35; cgdyddz > 0; cgdyddz--) {
continue;
} 
}
return 27550;
}

int sttkckl::rltcecqrhutfclqmmn(double ovcbfrehs, string wihposta, bool ieeposfnpy, double kmqeeopiondfx, int oymddrwdmzwamsm, string xeqcnrvnt, int bgwfbpmejnslk, int zbzad, int cfogvvjkhgj) {
double tataaz = 20898;
double mrkfhidmmapp = 1602;
if (1602 != 1602) {
int oo;
for (oo=97; oo > 0; oo--) {
continue;
} 
}
if (1602 != 1602) {
int aid;
for (aid=43; aid > 0; aid--) {
continue;
} 
}
return 2255;
}

int sttkckl::wvvfiqvqffvbsejfzp(int jzwqyksp, bool tbgvbz, string ehpasdfhwdep, int xqjffbtqldwoax, int lzabs, string cgaoqrcuij, int tsgmo, double zosudehdzurjf) {
int urcgylunmsez = 68;
int dfdnihdzpttmdw = 1118;
int gdkifvacddvnbjd = 924;
string bxyirzuo = "ajjlahjnydzrezbjdda";
string xvotxnb = "xicpvkcatxpasa";
double ucufucog = 33679;
double kbsehvyyayanqod = 7941;
int pbiygccgqbjor = 1206;
if (7941 != 7941) {
int el;
for (el=56; el > 0; el--) {
continue;
} 
}
return 64753;
}

double sttkckl::yyxqknkpnvpfmg(bool xrrpkptjgf, int jwasq, bool ckbrnipfholqgiy) {
string pxxjexbtnteycet = "fbjychinqngdympiphdtmqrbwktgdqtpgpkbyssbdlxlaocpyjgcjkplzwnpumggd";
int vhtbaratjkrgmm = 21;
int kendoaeozrd = 35;
double knwcss = 56153;
bool dpfwbqmxcrij = true;
bool kwbyxtoyhr = true;
if (true == true) {
int texcjzgh;
for (texcjzgh=45; texcjzgh > 0; texcjzgh--) {
continue;
} 
}
if (true != true) {
int lrix;
for (lrix=99; lrix > 0; lrix--) {
continue;
} 
}
if (true != true) {
int ucslfk;
for (ucslfk=96; ucslfk > 0; ucslfk--) {
continue;
} 
}
if (string("fbjychinqngdympiphdtmqrbwktgdqtpgpkbyssbdlxlaocpyjgcjkplzwnpumggd") == string("fbjychinqngdympiphdtmqrbwktgdqtpgpkbyssbdlxlaocpyjgcjkplzwnpumggd")) {
int hpbbmawfrv;
for (hpbbmawfrv=50; hpbbmawfrv > 0; hpbbmawfrv--) {
continue;
} 
}
if (true != true) {
int ejytbjjc;
for (ejytbjjc=96; ejytbjjc > 0; ejytbjjc--) {
continue;
} 
}
return 18340;
}

bool sttkckl::inbmsnpsiyoiqaciohulqx(string smenmnmhxff, double cipzfcxc, int ypwvtwcrw) {
string zlrxoapvkw = "buimpikocrurpurwjiiobfhbdipqivjxnonblkbftfirisgxrgrdyxrokuzbszwgwbkhpkwfvrdtsyfr";
string oqjsgimiv = "ubtxzanfuwzklgnqi";
string yckdqfjglc = "pnfvfenqeifxklbyoctihthtzxjmfhygorjbndsoufyttsscghllzg";
string htpvqzltups = "fwbkyeopexuqvmycksvcddpmjrvxoqyrjnaitcxmkovgzxthyubmnscxtzmgyuutqowulyhrfuyxqhionwbefyi";
double drzdpkhjmzgnob = 9813;
if (string("ubtxzanfuwzklgnqi") != string("ubtxzanfuwzklgnqi")) {
int bbbnnfgbai;
for (bbbnnfgbai=21; bbbnnfgbai > 0; bbbnnfgbai--) {
continue;
} 
}
if (string("buimpikocrurpurwjiiobfhbdipqivjxnonblkbftfirisgxrgrdyxrokuzbszwgwbkhpkwfvrdtsyfr") != string("buimpikocrurpurwjiiobfhbdipqivjxnonblkbftfirisgxrgrdyxrokuzbszwgwbkhpkwfvrdtsyfr")) {
int fpmvxv;
for (fpmvxv=44; fpmvxv > 0; fpmvxv--) {
continue;
} 
}
return false;
}

double sttkckl::tqhnjizzacrwlgkylqormjn(double novfriblgtrprce) {
double zfwak = 16646;
int hmgnpquooofz = 1670;
double cumzo = 38154;
double gnxptymrjaw = 31885;
if (1670 == 1670) {
int rtkpkswap;
for (rtkpkswap=64; rtkpkswap > 0; rtkpkswap--) {
continue;
} 
}
if (16646 == 16646) {
int hkqwi;
for (hkqwi=23; hkqwi > 0; hkqwi--) {
continue;
} 
}
if (1670 != 1670) {
int buuxnue;
for (buuxnue=96; buuxnue > 0; buuxnue--) {
continue;
} 
}
if (38154 != 38154) {
int soxiczddyn;
for (soxiczddyn=19; soxiczddyn > 0; soxiczddyn--) {
continue;
} 
}
return 59805;
}

sttkckl::sttkckl() {
this->szwgcrvzouvlckonil(false, 15402, 2094, 43931, string("hnzqvnokhhbfksxtzvlrwmstgzortmjexwzlpvlkesvoodqygnrtllmryoxrzdgqludntiqjxplpmudqtpmizfxexsmscgdlnpmd"), 21244);
this->fmtkgjvhllaaixspcqqw(1062, false, 1537, false, 1179, 18999, 543, 5716, false, true);
this->rltcecqrhutfclqmmn(38520, string("jndloqighbjobtsyypqmexqvajdsmzzgpwiqzqsywvaexz"), true, 2723, 2943, string("sihhvxtzglhvxlqhwpjgiwtjjoundjjbvssnxtegfpqvkvexzs"), 1418, 2496, 1102);
this->wvvfiqvqffvbsejfzp(2454, false, string("bjapfpyduxmtnolnpqjxtbrqcqjjrhpszdzslortl"), 2142, 1837, string("qlyxwflpzdbrlocnavskfbeozekawrbmdtivxmmxajhlazfwjunyjwzzgxcrcowssxmpgknhgrvcukc"), 5929, 7157);
this->yyxqknkpnvpfmg(true, 1010, true);
this->inbmsnpsiyoiqaciohulqx(string("ytcaadmfkilcxeqsqjwmyvzvtlyyipcaywkkrxpwafzz"), 14516, 4313);
this->tqhnjizzacrwlgkylqormjn(11789);
this->uzbgdeoxxlcg(492, 287, 374, 2728, 1383);
this->knzptnjurhylrejnfhtr(29683, string("qgwvkxnwokrlbzmusztdpnbmjirfgiyxiqvkljgujwuncpttv"), 44859, true, 34);
this->czxmatigfzmwuog(4892, 1899, string("rrjndebupfldkflhgxiyuqrsqpedgoia"), 236, 916, false, string("amehsmbbfslhyumeukacpjsaxcolrpasanycshtuxivlbmjwtecujcluwwllrqlek"));
this->jyodbuddplprqzforodvbajga(false, 41389, string("cenrwccalufxlqeylnenpozefnpweqqycgfnoirzvzqxbpollkpix"), string("dzvpyuqlmapsaeycssiazzwjjuyyqsduwjwtetbwtmprhosvgsyboblgbnqfuastppudjsno"), true, true, string("i"));
this->rsubkvocjrbst(true, true, true, 9951, 1696, true);
this->ftbtozovngjmipmbroiggora(525, true, false);
this->gcghrjlwsraacpzw();
this->ezjdqeupfseitjarirrlw(string("kjoe"), false, string("yyirmsdznbnutuwumdlblkursxmrpvaixvluilwotlswwplktajnoaumlygqlttbxnqgt"), 10317, 11364, string("brzvllhtotwoccckfpqvdkkixjaaresvjhs"), string("puavgiqyysggqfpqthibjdpvhzgzyijvcxohlamznlynwwxwuazmzzobbxmrifuoicanhbmluhzbhshhhvzhnsenx"), string("kuacxvhhuvcsejhldnlbpeettimtaow"), 11622);
this->pgiqiavijwkklfurrqqibgvo(true, true, 7340, 2105);
this->rvtfhzognv(6171, string("mwtyssibehhskurpqewsqngtoqpbgqaxglpfitefuitpzbitdrwv"), 19932, 8508, 1653);
this->rjpoakmqfy(false, 3593, false);
this->kpodpeuooyb(false);
this->zbbkhueyipxzxqeorvtyp(6618, 813, string("uplbxhiwfbqzibudgkrxyoadyvyewasyylgkdqbxdmdqceknbptduxgmbyyzeortsfdrpiwj"), 6299, false, 14187);
this->bziyzvxxbtngbfnnsti(1200, 9110, 4551, string("waererqaslzwnh"), false);
this->skamsagxsobvvfxqypwkav(string("pyjhnrszlntwogqxbjbtlqpxyqjiblhsubjtonxahshfakphthplbqizoxlgujaszgxvqhcqerjovitqtdyygcemqti"), string("fbshqeulxlkrepynmjapixuoxaaidjsdvstdvtxznfjltacqla"), 3288, string("fftpdblmygcmowzvabbvcnigyfhuhdcrvqywsngvolrrtliuttmagthoparoqkfhv"), 3113, 59167, 1034, true, string("ftfncfyigmuqwawnadzdhqtmwvkydjuphctmqrrqgnmdbqvaihrzcdfrzfouzbwakkxzujbezkbdamlkpjvwgxyhgmp"));
this->wqapjfoijrcvxcqkm(true, false, 11751, string("rvcckgyqcpnubteskxdfepvfpqcleckveghfbxoxnrrvhzhrvhutqijevuozpzubkoqnabn"), false, string("lqqhndezwfbtgysfuvoudxigdimoorzmcuzgmoutsqy"), true, 47, true);
}
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class ecceqbb {
public:
bool xpvspthjm;
ecceqbb();
void lduwdzcosmnswxhxylwfxudq(int nlbkirkc, string jrpnlay, int vmvth, int mhmsw);
bool cevbbozdsav(bool pwlkhmxjf, double wxvwslzxdehmqpi, bool ycpjfvenbhco, int rojjsrfda);
string qdczfnjnjyydwunlwz(string knfheunmlq, bool ehjcnhdqcgketia, bool ilrnuoifjipb, double ixbybunsuuagi, int poqxdvlkboqyhdz, double eopgi, double xkpztpxj, string bvgszavehdng, string fcvroucwnkjan);
int mjheyayoaqgle(string bwuwtzundk, int kializelfraj, double zmvqrh, int eajyhnkumdkwy, double ubjialdm, double ypprm, double flxrywlisz, int boxuz, string kvdusqqckvz, bool fccyyluqvdxhxpo);
double ensiysvgwjnz(int ysmqquzy, int ulwjjvpvsvdab, bool cgkphvzyyiwhej, int fndvmdn);
bool sutzpvcwcobhapgouip(bool nxyrcpdoiqjj, double vaduwyshkwwwmi, string rozvk, bool rgdqil, double qucfjkmqzymsdb, bool mulcsovmvwekoc, string lubpoydzozhwacq, string aqxydrupicqga, int mcgju, bool odnrffvj);
bool dtvrwijsqwjndlz(int lmygpjnnzwukpkp, bool wsbcorirayoizuc, bool vegtfm, double junsrc, double vwpcdffijw, double lvurf, bool tfhcdz);
string yhbqfdkifepmas();

protected:
bool ntvwq;
double emfkrjrwsugqrmr;
double gmdytrdnanejlp;
string zqlrqvq;

string mdnzxxjpotqvxe(string trfvjtaapoil, int foozrwz);
double whurwzzxquyewugjhiwtwom(int iznlcqss, string ocihkpwvilylr, double iqffm);
void kllgbzgsvxfssojj(double qozgwapyxdl, int skcvmzpdyxxht, string azjmm, string axwomsenqgl, bool fqthyt);
bool yzuoqmgafrvwsvggoisppmvl(double ocddv, string qacqltiulwaokfj);
void fkzjgliqrbtfjdthtzejvii(double sdeyrrpeytims, double eczkjxtzvryi, string cekbboejwj, string cjriugymfacll, double xdvngkp, int wqasozxhr);
bool aunflnvzrujksm(double oyjsj, double robqsx, bool vkrzeeigxsx, string shfuwxmrh, double ooggvdkoao, double arynqubcxsjpx, bool jzfmemkyjrsj, int uyjcqmpe, string sifvejmwrqghc, bool wiuaptkunh);
bool xrqjvskgvxgzxgu(double nldtgzysqpwfkrv, string heijevi, int zqkmgalefdncx, double xcakoyfytfm);
int vuhwqzrrbikvokaxwjk(int zmpnhiygcx, double pdvncqbjsmmooge, string vqmpwylcphs, double ucofxwuzjki, string cjixrekd);
bool yaqnmmhhdsitysym(bool nvsjfsulmsqoow, bool jcnlkweztlzrnt, double ixkpjblwq, int bfpbf, double pxyyd, double fhpblwcogmgu, double ttqtyef, int bonmggsrvrvqa, double edlcayyv, bool jjkzmbwguirorjf);

private:
int sifcfhfh;

string xzjuhexaflswrglpembwois(double idhlemwqg);
double tjirfsnaipkpj(bool foqwwmopgysyfkc);
bool cepfixbirskrqplrovl();
string huiaglcvmntwlbezgmx(string dlljtzmwttq, double brjudfwztahpdd, string hdwaun, string dvrkddmfaw, string oxvvnikpvpv, bool xwzhdoahrnocd, double wreesigjbjs, bool szikyjun, string zocfzlvq, double vkezmfneuoykdh);
int ltshvbfwqova(string wtbbesaaakgyb, double eftlykf, string axgrtllzd, bool vfahgikkv, int hesrkuqme);
string cmphudxacqcxoouhryod(string uxhiruw);
int labqxxyvebehzsfmsbatpof(bool narpop, double baskhbcnnbusjgd, string lzexv);

};


string ecceqbb::xzjuhexaflswrglpembwois(double idhlemwqg) {
string gezlpqqmofrjxa = "txbofsnwyuafehuhjbqcmho";
string xteorfkpscb = "dkywlgmexmaggwoplbhwegbhjttinibepuswqjrnhiieibbfsidrvwfqdeaxgzojnbsqyyatmjwumrqymmixumylxkli";
bool szgdiahnvkruwcl = false;
int qnhbllt = 301;
int xbizmokzhcxoq = 1872;
double hmyslcvkezmoqqr = 9461;
double mbqdtcfsxfroq = 14885;
string kxpnruzgxdbvw = "ikvzqkesdvorgpgpknwpgyfasuazpwbqgheyuzxalentvtcygcinvzpazpzzvcxslqsitkedwvcrczhl";
if (string("txbofsnwyuafehuhjbqcmho") != string("txbofsnwyuafehuhjbqcmho")) {
int umt;
for (umt=67; umt > 0; umt--) {
continue;
} 
}
if (9461 != 9461) {
int gtvp;
for (gtvp=74; gtvp > 0; gtvp--) {
continue;
} 
}
if (14885 != 14885) {
int uksh;
for (uksh=2; uksh > 0; uksh--) {
continue;
} 
}
if (9461 == 9461) {
int wmpac;
for (wmpac=100; wmpac > 0; wmpac--) {
continue;
} 
}
return string("aamzji");
}

double ecceqbb::tjirfsnaipkpj(bool foqwwmopgysyfkc) {
double mahhvkgagve = 90165;
string axkin = "oiojzwmzmfomftzboearahjoxtxlzwewakbiwrfmbrglgzgzoqovdplcjfagmzpyvllblqpybdcgyfgiazyqzessgce";
int wfxrmmgeinyiyy = 3917;
if (90165 != 90165) {
int pymbua;
for (pymbua=71; pymbua > 0; pymbua--) {
continue;
} 
}
if (3917 == 3917) {
int qhtrxdvml;
for (qhtrxdvml=24; qhtrxdvml > 0; qhtrxdvml--) {
continue;
} 
}
return 91650;
}

bool ecceqbb::cepfixbirskrqplrovl() {
string ltgfspmgpgjrvok = "ksdmlmk";
bool wfpyxkpejixmu = false;
int qmngypm = 1350;
double hgpgz = 17610;
int xfpuvdeduyi = 142;
if (false == false) {
int xugstu;
for (xugstu=49; xugstu > 0; xugstu--) {
continue;
} 
}
if (string("ksdmlmk") == string("ksdmlmk")) {
int ja;
for (ja=4; ja > 0; ja--) {
continue;
} 
}
if (string("ksdmlmk") == string("ksdmlmk")) {
int opnfuqh;
for (opnfuqh=40; opnfuqh > 0; opnfuqh--) {
continue;
} 
}
if (1350 == 1350) {
int szjfa;
for (szjfa=99; szjfa > 0; szjfa--) {
continue;
} 
}
if (string("ksdmlmk") != string("ksdmlmk")) {
int evtwan;
for (evtwan=8; evtwan > 0; evtwan--) {
continue;
} 
}
return true;
}

string ecceqbb::huiaglcvmntwlbezgmx(string dlljtzmwttq, double brjudfwztahpdd, string hdwaun, string dvrkddmfaw, string oxvvnikpvpv, bool xwzhdoahrnocd, double wreesigjbjs, bool szikyjun, string zocfzlvq, double vkezmfneuoykdh) {
int itlloflx = 4459;
string hjuiywhmgvzeis = "jhgpgtigpqslhxgbfkxmsizioeppaxkjpboghcmpjrevuflykdiiidxqqprwossydhmqsae";
double yakxzifrkm = 56905;
string ziwqa = "kkzhnmomrrqfqvrewzajufxeertbdylhclmcdnbgmmwepuoldmpefjwimeraphaxgzbpjapnazslgz";
string gylejie = "ozjoqczejbddq";
bool dbmjkicbqxboahr = true;
string sfjqvgehzejqh = "frccdcctosuebbuwkgvetj";
if (4459 == 4459) {
int pp;
for (pp=78; pp > 0; pp--) {
continue;
} 
}
if (true != true) {
int izh;
for (izh=65; izh > 0; izh--) {
continue;
} 
}
if (string("jhgpgtigpqslhxgbfkxmsizioeppaxkjpboghcmpjrevuflykdiiidxqqprwossydhmqsae") == string("jhgpgtigpqslhxgbfkxmsizioeppaxkjpboghcmpjrevuflykdiiidxqqprwossydhmqsae")) {
int xwif;
for (xwif=91; xwif > 0; xwif--) {
continue;
} 
}
return string("bnflug");
}

int ecceqbb::ltshvbfwqova(string wtbbesaaakgyb, double eftlykf, string axgrtllzd, bool vfahgikkv, int hesrkuqme) {
double nwquz = 30441;
int mpbapolypupgbn = 3372;
return 3750;
}

string ecceqbb::cmphudxacqcxoouhryod(string uxhiruw) {
int cllidx = 367;
int flsewbebansuen = 1769;
double jtidpykqens = 13836;
string iwfeylwdcdg = "zmsxeaatrojldmibmrpasxjsmrqdwxcmftwfqsutpkyssuwsionencizkdrmfgudtqfbtkitggizmsceondxaovnxpe";
bool vwuujcgqqopnhxj = false;
double gsqqfboxwk = 28574;
double luxbwv = 36097;
int ntmohb = 5505;
if (367 == 367) {
int nl;
for (nl=97; nl > 0; nl--) {
continue;
} 
}
if (string("zmsxeaatrojldmibmrpasxjsmrqdwxcmftwfqsutpkyssuwsionencizkdrmfgudtqfbtkitggizmsceondxaovnxpe") == string("zmsxeaatrojldmibmrpasxjsmrqdwxcmftwfqsutpkyssuwsionencizkdrmfgudtqfbtkitggizmsceondxaovnxpe")) {
int voxlfkr;
for (voxlfkr=91; voxlfkr > 0; voxlfkr--) {
continue;
} 
}
if (false != false) {
int ud;
for (ud=8; ud > 0; ud--) {
continue;
} 
}
return string("cnhf");
}

int ecceqbb::labqxxyvebehzsfmsbatpof(bool narpop, double baskhbcnnbusjgd, string lzexv) {
int kuvalbeg = 2573;
bool qveztltzsoxzgte = false;
int laoxu = 1834;
string rpdpppbylbc = "bkjcrniaihbxmzgbutdwyswkaobdyeiffrbwvbtajfgezpfafuw";
string djrskgiir = "jsgvkyiywnpbwtqjdlrqmgbmxluyswirbdmsxnbdtol";
int ecoqpuslwcdpm = 1290;
int mdgngfyxvdhhazt = 338;
int xecjsu = 266;
return 59440;
}

string ecceqbb::mdnzxxjpotqvxe(string trfvjtaapoil, int foozrwz) {
int kxbdpzwpj = 4694;
bool stodvjqpg = true;
if (4694 != 4694) {
int qxzh;
for (qxzh=68; qxzh > 0; qxzh--) {
continue;
} 
}
return string("pqvhjqodrtv");
}

double ecceqbb::whurwzzxquyewugjhiwtwom(int iznlcqss, string ocihkpwvilylr, double iqffm) {
double xysgzdfjtm = 51606;
return 76188;
}

void ecceqbb::kllgbzgsvxfssojj(double qozgwapyxdl, int skcvmzpdyxxht, string azjmm, string axwomsenqgl, bool fqthyt) {
string guwkjiupors = "mlgohyodckfabkolnhesbucdwhdebpdbdmrjqbanvwseajklbzzaziolmcvosvpginfejodu";
bool yjvghitk = false;
double dlpvxpfrk = 4344;
string flsulyxpvt = "nhuzglngdtkoelbmtxinfwabq";
bool nlaakkogcsumaj = true;
double gcneku = 26489;
string lzjfneyzi = "dcsxyuvrgoctdplbcprewgzueyiamepihjfbeqmkucqx";
double rzvzzxgdsdc = 2009;
if (true != true) {
int jgwjmfh;
for (jgwjmfh=81; jgwjmfh > 0; jgwjmfh--) {
continue;
} 
}
if (string("mlgohyodckfabkolnhesbucdwhdebpdbdmrjqbanvwseajklbzzaziolmcvosvpginfejodu") == string("mlgohyodckfabkolnhesbucdwhdebpdbdmrjqbanvwseajklbzzaziolmcvosvpginfejodu")) {
int ap;
for (ap=62; ap > 0; ap--) {
continue;
} 
}

}

bool ecceqbb::yzuoqmgafrvwsvggoisppmvl(double ocddv, string qacqltiulwaokfj) {
bool iphhi = false;
int rzbjpsqbilfjfc = 2505;
int tafqp = 457;
int hzkcgiyhptwntjv = 867;
string dodkjltv = "bazhdtglplbtgdguvtdeedvwhnilkgbzgftpxqpexyugxjxnytwsaretanzavxoccthcgdlmwkrsymzwxdei";
if (string("bazhdtglplbtgdguvtdeedvwhnilkgbzgftpxqpexyugxjxnytwsaretanzavxoccthcgdlmwkrsymzwxdei") == string("bazhdtglplbtgdguvtdeedvwhnilkgbzgftpxqpexyugxjxnytwsaretanzavxoccthcgdlmwkrsymzwxdei")) {
int hydwqxylu;
for (hydwqxylu=32; hydwqxylu > 0; hydwqxylu--) {
continue;
} 
}
if (457 == 457) {
int xlq;
for (xlq=51; xlq > 0; xlq--) {
continue;
} 
}
if (false != false) {
int vdni;
for (vdni=93; vdni > 0; vdni--) {
continue;
} 
}
if (string("bazhdtglplbtgdguvtdeedvwhnilkgbzgftpxqpexyugxjxnytwsaretanzavxoccthcgdlmwkrsymzwxdei") == string("bazhdtglplbtgdguvtdeedvwhnilkgbzgftpxqpexyugxjxnytwsaretanzavxoccthcgdlmwkrsymzwxdei")) {
int pooalxmh;
for (pooalxmh=78; pooalxmh > 0; pooalxmh--) {
continue;
} 
}
return true;
}

void ecceqbb::fkzjgliqrbtfjdthtzejvii(double sdeyrrpeytims, double eczkjxtzvryi, string cekbboejwj, string cjriugymfacll, double xdvngkp, int wqasozxhr) {
string xtrxnhg = "xgglhoskzwyhpqwpaqduqjyuoidjmfbuqmeqkuzwcgwdwtz";
bool bbeklvlahjmitma = false;
double alyeozepxejapsa = 51005;
string cxgsstdqxhwl = "rovkspbmgfkrcsvffrwugbxhjeknfguxbcpfnonjoohy";
bool tshreysxxjueaj = true;
if (string("xgglhoskzwyhpqwpaqduqjyuoidjmfbuqmeqkuzwcgwdwtz") == string("xgglhoskzwyhpqwpaqduqjyuoidjmfbuqmeqkuzwcgwdwtz")) {
int pbrgl;
for (pbrgl=47; pbrgl > 0; pbrgl--) {
continue;
} 
}
if (string("rovkspbmgfkrcsvffrwugbxhjeknfguxbcpfnonjoohy") != string("rovkspbmgfkrcsvffrwugbxhjeknfguxbcpfnonjoohy")) {
int crxduizc;
for (crxduizc=50; crxduizc > 0; crxduizc--) {
continue;
} 
}

}

bool ecceqbb::aunflnvzrujksm(double oyjsj, double robqsx, bool vkrzeeigxsx, string shfuwxmrh, double ooggvdkoao, double arynqubcxsjpx, bool jzfmemkyjrsj, int uyjcqmpe, string sifvejmwrqghc, bool wiuaptkunh) {
bool naufijuresocdt = true;
int dowovrexdlpiy = 58;
bool zqqvaetaen = true;
if (true != true) {
int fypkmtpj;
for (fypkmtpj=18; fypkmtpj > 0; fypkmtpj--) {
continue;
} 
}
if (true != true) {
int yutbqp;
for (yutbqp=95; yutbqp > 0; yutbqp--) {
continue;
} 
}
return false;
}

bool ecceqbb::xrqjvskgvxgzxgu(double nldtgzysqpwfkrv, string heijevi, int zqkmgalefdncx, double xcakoyfytfm) {
return false;
}

int ecceqbb::vuhwqzrrbikvokaxwjk(int zmpnhiygcx, double pdvncqbjsmmooge, string vqmpwylcphs, double ucofxwuzjki, string cjixrekd) {
bool wnqypqxhcap = true;
string xuufhloogwbraof = "qyrouzqgurfsegtxtvh";
int pfqxhxm = 2608;
int hmibpx = 4434;
bool tntmkphy = true;
string xudslqqg = "luit";
int xbsvg = 4876;
string tgmjj = "iwwbrpshzszzltuzvqsusiwvtydprpqlbwmqmjlvtiwkprxovzfenpxgghbxvnalkxhyskytsfhvllnkfsaxsqpxrrexpsq";
double bspuf = 20832;
if (true == true) {
int kxaqyfi;
for (kxaqyfi=37; kxaqyfi > 0; kxaqyfi--) {
continue;
} 
}
if (2608 == 2608) {
int qwyc;
for (qwyc=94; qwyc > 0; qwyc--) {
continue;
} 
}
if (20832 == 20832) {
int kbrhvejl;
for (kbrhvejl=45; kbrhvejl > 0; kbrhvejl--) {
continue;
} 
}
if (20832 == 20832) {
int vfvcslyxvy;
for (vfvcslyxvy=71; vfvcslyxvy > 0; vfvcslyxvy--) {
continue;
} 
}
if (true == true) {
int rctnfutk;
for (rctnfutk=52; rctnfutk > 0; rctnfutk--) {
continue;
} 
}
return 56627;
}

bool ecceqbb::yaqnmmhhdsitysym(bool nvsjfsulmsqoow, bool jcnlkweztlzrnt, double ixkpjblwq, int bfpbf, double pxyyd, double fhpblwcogmgu, double ttqtyef, int bonmggsrvrvqa, double edlcayyv, bool jjkzmbwguirorjf) {
bool xjiwmziw = false;
int wzibnfgfduix = 1942;
int xuaxulovnxlb = 357;
if (1942 == 1942) {
int lxoxindmmh;
for (lxoxindmmh=19; lxoxindmmh > 0; lxoxindmmh--) {
continue;
} 
}
if (357 != 357) {
int mibiw;
for (mibiw=76; mibiw > 0; mibiw--) {
continue;
} 
}
return false;
}

void ecceqbb::lduwdzcosmnswxhxylwfxudq(int nlbkirkc, string jrpnlay, int vmvth, int mhmsw) {
int djeufwtpeizixx = 2302;
string eomhomla = "oaccjfzjbyljdavpjaursnspufjglitynxhhdgiydrltjnrbmgmmtwoxrvnxngjddabteadjgefozbtfteyvwdcfjjqdjsn";
bool hzwhkgvh = true;
int epgqmbiadddhh = 2080;
double xpmxajvhoeygcp = 41719;
double olykqyiglqmjkz = 17753;
bool semaphq = false;
string pdkwmr = "thhgjykicfttpemamxizrpwuf";
bool smbktq = true;
if (string("oaccjfzjbyljdavpjaursnspufjglitynxhhdgiydrltjnrbmgmmtwoxrvnxngjddabteadjgefozbtfteyvwdcfjjqdjsn") == string("oaccjfzjbyljdavpjaursnspufjglitynxhhdgiydrltjnrbmgmmtwoxrvnxngjddabteadjgefozbtfteyvwdcfjjqdjsn")) {
int oiudq;
for (oiudq=78; oiudq > 0; oiudq--) {
continue;
} 
}
if (true == true) {
int ruzmbrcn;
for (ruzmbrcn=2; ruzmbrcn > 0; ruzmbrcn--) {
continue;
} 
}
if (true != true) {
int gvtykiq;
for (gvtykiq=69; gvtykiq > 0; gvtykiq--) {
continue;
} 
}
if (41719 != 41719) {
int nctxmn;
for (nctxmn=88; nctxmn > 0; nctxmn--) {
continue;
} 
}
if (string("thhgjykicfttpemamxizrpwuf") == string("thhgjykicfttpemamxizrpwuf")) {
int nfo;
for (nfo=88; nfo > 0; nfo--) {
continue;
} 
}

}

bool ecceqbb::cevbbozdsav(bool pwlkhmxjf, double wxvwslzxdehmqpi, bool ycpjfvenbhco, int rojjsrfda) {
int umpopmlvw = 2888;
double bvjopmhnt = 37852;
if (2888 != 2888) {
int zttwjermw;
for (zttwjermw=86; zttwjermw > 0; zttwjermw--) {
continue;
} 
}
if (37852 != 37852) {
int djtgd;
for (djtgd=92; djtgd > 0; djtgd--) {
continue;
} 
}
return true;
}

string ecceqbb::qdczfnjnjyydwunlwz(string knfheunmlq, bool ehjcnhdqcgketia, bool ilrnuoifjipb, double ixbybunsuuagi, int poqxdvlkboqyhdz, double eopgi, double xkpztpxj, string bvgszavehdng, string fcvroucwnkjan) {
string woktzfimw = "rncppkavycraavnhqzlxnwyujqdtknefrsdaqbgkbunfjrvgdgxvqvdywvzomgmrzgytkjgbvierpnbxzeogyw";
int qvfhe = 3645;
double kxchqmof = 8090;
double dehgjrhkvnrudr = 10447;
string jkycentayznee = "blcnnjzooj";
int pyxsvhkb = 331;
int liicdhnbcgqyg = 1062;
double inzgatod = 17592;
if (string("blcnnjzooj") != string("blcnnjzooj")) {
int nvutmrykt;
for (nvutmrykt=84; nvutmrykt > 0; nvutmrykt--) {
continue;
} 
}
if (1062 == 1062) {
int euoa;
for (euoa=81; euoa > 0; euoa--) {
continue;
} 
}
return string("opzgnaukuxmgjuyo");
}

int ecceqbb::mjheyayoaqgle(string bwuwtzundk, int kializelfraj, double zmvqrh, int eajyhnkumdkwy, double ubjialdm, double ypprm, double flxrywlisz, int boxuz, string kvdusqqckvz, bool fccyyluqvdxhxpo) {
return 76795;
}

double ecceqbb::ensiysvgwjnz(int ysmqquzy, int ulwjjvpvsvdab, bool cgkphvzyyiwhej, int fndvmdn) {
int pkjhefuqcec = 4898;
int hqbvcqtbi = 6283;
int khmeu = 1321;
double pwobwq = 16025;
int eumfbvgqircyriy = 3106;
if (4898 != 4898) {
int hw;
for (hw=56; hw > 0; hw--) {
continue;
} 
}
if (16025 == 16025) {
int xsimily;
for (xsimily=94; xsimily > 0; xsimily--) {
continue;
} 
}
if (4898 != 4898) {
int zruatv;
for (zruatv=47; zruatv > 0; zruatv--) {
continue;
} 
}
if (4898 != 4898) {
int mqkvzm;
for (mqkvzm=74; mqkvzm > 0; mqkvzm--) {
continue;
} 
}
return 17376;
}

bool ecceqbb::sutzpvcwcobhapgouip(bool nxyrcpdoiqjj, double vaduwyshkwwwmi, string rozvk, bool rgdqil, double qucfjkmqzymsdb, bool mulcsovmvwekoc, string lubpoydzozhwacq, string aqxydrupicqga, int mcgju, bool odnrffvj) {
string ekahtrk = "ovrogtldmoezwfpaguubyctmqyazbqzixefhsosog";
int lfbrxaemhxvqe = 1799;
bool qcxbtnwsjocr = false;
if (false != false) {
int kcldnhn;
for (kcldnhn=16; kcldnhn > 0; kcldnhn--) {
continue;
} 
}
return true;
}

bool ecceqbb::dtvrwijsqwjndlz(int lmygpjnnzwukpkp, bool wsbcorirayoizuc, bool vegtfm, double junsrc, double vwpcdffijw, double lvurf, bool tfhcdz) {
bool mvtzlntadvd = true;
double iimhtfyixm = 7416;
string grtgxvv = "qmsqzmsodrgmykejowsuaauliproprljsaruqpsxftxjzzimjxhjsvxoqonmebmrlitznygnacexysrqepg";
string vykmedemfkhao = "yheqyztnactfodqcnogmlvlbocztmnwelmnrvehmaznnglfzloazatmawyxbytlogjadeakzvenhauu";
bool rawztarnhbqv = true;
double ajdnwqmmj = 23933;
bool avumzfgbovltmn = false;
if (7416 != 7416) {
int ifexnkbc;
for (ifexnkbc=18; ifexnkbc > 0; ifexnkbc--) {
continue;
} 
}
if (string("qmsqzmsodrgmykejowsuaauliproprljsaruqpsxftxjzzimjxhjsvxoqonmebmrlitznygnacexysrqepg") != string("qmsqzmsodrgmykejowsuaauliproprljsaruqpsxftxjzzimjxhjsvxoqonmebmrlitznygnacexysrqepg")) {
int rzbvlkuil;
for (rzbvlkuil=42; rzbvlkuil > 0; rzbvlkuil--) {
continue;
} 
}
if (string("qmsqzmsodrgmykejowsuaauliproprljsaruqpsxftxjzzimjxhjsvxoqonmebmrlitznygnacexysrqepg") == string("qmsqzmsodrgmykejowsuaauliproprljsaruqpsxftxjzzimjxhjsvxoqonmebmrlitznygnacexysrqepg")) {
int srvyzq;
for (srvyzq=89; srvyzq > 0; srvyzq--) {
continue;
} 
}
if (true == true) {
int rnaasqj;
for (rnaasqj=54; rnaasqj > 0; rnaasqj--) {
continue;
} 
}
return true;
}

string ecceqbb::yhbqfdkifepmas() {
bool yjljhr = true;
double dcpfnrqv = 5358;
if (true != true) {
int xrzcy;
for (xrzcy=46; xrzcy > 0; xrzcy--) {
continue;
} 
}
return string("");
}

ecceqbb::ecceqbb() {
this->lduwdzcosmnswxhxylwfxudq(4585, string(""), 2476, 9138);
this->cevbbozdsav(false, 11769, true, 1086);
this->qdczfnjnjyydwunlwz(string("kfkeluqllezlmrzzyyaozsymmcwfuuxjseudxsgwecenqktdzfjrppdfniygpfiajpvotgsmxums"), true, true, 6233, 550, 2045, 5460, string("mobuozhzbhnbnojcpgwxbntggxcbhkkyqehvhkyflgzubkclatwpry"), string("wsblpsvdgmdcy"));
this->mjheyayoaqgle(string("uykqecaeqavcgfxtnreydfpeoslegraiaknlkgtzkwp"), 1311, 10140, 8403, 31488, 38228, 9475, 997, string("skzuujzplowgbhfz"), false);
this->ensiysvgwjnz(3772, 3726, true, 866);
this->sutzpvcwcobhapgouip(true, 25794, string("fbrvtqwceotmrguaycoxbocc"), false, 43143, false, string("ivpdnzcghqcanwqrhqvezjeohnihddsnvkrzobnyeldqth"), string("zkqbjd"), 152, false);
this->dtvrwijsqwjndlz(668, true, true, 51016, 1559, 26605, false);
this->yhbqfdkifepmas();
this->mdnzxxjpotqvxe(string("yztljzknomga"), 3092);
this->whurwzzxquyewugjhiwtwom(3250, string("bbhkzbfnvwjzmgecqkbttwfqqxqkrfnamtzocsfhzesgjwvswbfdmkprffbkxzkgoiqidbrxiguqsdowskcymwmihr"), 26250);
this->kllgbzgsvxfssojj(38022, 301, string("bzlntjjfil"), string("aweppkxgwxrsrkdkfgtaberywdmggzcffxcivquqjpigxvlvawjvzplbfpmaymxgmyyuddjhgcuorzaickzv"), true);
this->yzuoqmgafrvwsvggoisppmvl(77895, string("bvnrtcxb"));
this->fkzjgliqrbtfjdthtzejvii(54928, 9937, string("apaakslfapxldoehowmfplnsmsritxazybgvboisspgudztreeewoah"), string("qhcusyuzpzenbmpyulossycoaeoksrqodfaxabqklzdeqiqnfhuarbd"), 11845, 29);
this->aunflnvzrujksm(15508, 30181, false, string("fbtom"), 43393, 13755, false, 2195, string("gylpkqjchhwanrgywnuokoxu"), true);
this->xrqjvskgvxgzxgu(38292, string("kmumdiwp"), 3407, 75248);
this->vuhwqzrrbikvokaxwjk(6579, 11492, string("ttdhcgghsis"), 78872, string("qjmngvvglczrskyjxelxzrgbscqvftfqykvvdltxyepilhixrrawsdtdowxqhxmmxminlfwdiahwbyjthxaspixxlenw"));
this->yaqnmmhhdsitysym(true, true, 884, 1014, 23790, 45183, 12503, 4244, 6162, true);
this->xzjuhexaflswrglpembwois(10485);
this->tjirfsnaipkpj(true);
this->cepfixbirskrqplrovl();
this->huiaglcvmntwlbezgmx(string("uykhzcuakayzsnjudvitaelgoyzjfjfewiwciat"), 41177, string("pjlxdhoiyheasfkoygniifptzfuzjiufwlbthomkyefhqfkfcbaxuwhnb"), string("mcjbgajifflzjqrhnwkbmolcyrirdidjigtpunvvrjrbkiddswczlcufqzlhjmutliuzhqpfrmnh"), string("jjjyxrx"), true, 56107, false, string("themqqvgmbmspbgzvnbhgbrivegiprmxzmgdbbgmtczrhityjjviorpxdujirvefflprvzqljnot"), 43104);
this->ltshvbfwqova(string("exbodpnpfssbqcmnzpaxfvbhfiwh"), 1785, string("selejsbllghmbvyiaadjwgt"), false, 2679);
this->cmphudxacqcxoouhryod(string("vcebzlbgwiaavymcjwlbfgznrdehvfbjwgwuqeqtawdfx"));
this->labqxxyvebehzsfmsbatpof(false, 54602, string("kfeqjwdyganqbirmeknmyjqnfqvoqlfclnzfyljvvbefalodysyccohuyhlifmdacspgorwfqklbcnagjstfppdwihcjjmwnj"));
}

#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class yqjmgoc {
public:
int eulkpvbegkul;
double uvlmtxagivrvn;
int jkwrfeambmmi;
bool fcbdvl;
bool ayctlzqnddfjop;
yqjmgoc();
bool bsquluqwogewqbvymcwpnkam(int wtwridyeyiafn, int ykpelsvsvfaie, bool ucvyirzaiiw, bool kpglotcsozkeqs, string togaay, bool ydzjlzmvdcdctrk, bool qndtaswxhm, double vdbhlbfk, string ycsmzawalftvby);
double pqpdlkopotzl(bool tmyyqzfkczxxpn, int rmmyotx, int rotgaemizu, int mjmbqpffahtyc, string ovhcb, double xojiyb, int zyuqscycaedp, bool ruqsy);
double avucyimfdrsgotpvhgix(int amvbeecwwfmb, int ugfwzoazqpuojdn);
bool lhsazujewybzkq(double urpln, string ntadzb, double ztxnuuc, bool jbvizivi, bool ofkwloa);
string ypqqygbfdx(bool icvonfcicssd, double xmvceqqcxmzo, bool tklrkhobo, bool nukfumzkjl, string clbixw);
void owhvyirajf(bool fdaaxcqlvcu, double xypvfhbqq, bool hpsxdfau, int isignkxmrr);
void lkrluumdlbr(double xxzwzj, int znkxrvqazbyomwr, string hbfalcknftsdwfz, double gjwggcezslxiwy, double sjxdeacqwi, bool lctpuqeev, string pzxvvcecwdjijnf);

protected:
int dvlqelqnswomht;
string cduggj;

int upzlptqgnltzehxvotsstxx(int wnosfhv);
string qnsbxfdcpbnmfbxhlocds(int gfmmzziclvjeg, double ivgjgofxkikuc);
bool fpoxokkdodk(double owxuukgehivivmm, int uawfvhctgq, double zedogv, int xvlbmvkeam, int rbdtrvhwcas, bool zavkc, bool atoanw);
void gmfrmipurmwmqdsrhklch(double izivhbwizmvpcx, bool mdhkc, double gtxue, string fsedevgjd, string stqytxcvacygl, double sesupmvftk, double imgklcu, string mcipzogagl, bool taknmhxoj, int grzxhgqlomvcel);
int kqfbdrvwplpoa(bool fkvtyhrnjigh, double yhwjvr, string hleomgaieqccsve, double ufxeodmv);
void gwfzlgyqusvagnjx(bool lzbqjoppu, bool rfxlvx, int akzmyyopxdyvxjf, double ujsufm, bool tduvqjhahxzlg, string xllzf, double lhify, bool wgwrvvdcqonqyc, double teqqrthfdfrcd, int fdondvmpxr);
void lxjqlybifreimybrbr();
double uxnotptfpanxacddzqxgumdiw(double xnludmee, string pideyoopkvt, string fpusr, string gwhvhrssvppnst, double nxjjivjryulg, int veepi);
void ourqaajuedjcsaao(double klaynjvpldv, int mkaluvjbo, int odbmzmnnrmfwkx);

private:
string dqspuh;
double xlfadfsr;
bool uddibnnwbaa;

void fvynzowgauf(double edpdxrqusigyeru, bool npvbqfdwv);
string iervyrldzphc(string lxpswmiuvmvia, string lxexwlbokwhx, string seyxn, bool mjllzsutv, double tbnjp, int fpfrfs, int xgjibfbg, int oviwismy, string dwxukmgoypmltn);
int gxqpamyriarbkaitvlpuf(bool pordhmgdlfgm, bool kfksv, double drhkohevl, double zcdvparwtll, int lhznmfdxu, string hnarqnfttpmzvbp, int yumgcgpiaqkq, bool eyawnku, double icffashfw, bool omkxicbr);
void mzrvhqrzew(bool xxcgf, int ozyukdohskz, string ukzujrxabbx);
double lyutbiqsmtvijflpgwmeffd(bool nzjyerbxprgkmo, string paoiccfloglzbzq);
string rwgugrvzipzlr(double oqyihehintvp, bool siqhnkmyn, double dkaifxhdutmux, bool pkgbyhttx, string owoeqi, int vaufgwbq, double nxhiefkbtztlg, bool hzipsy);
double biipulhihns(double kwwfhlgicerf, bool pjkcumkwhell, int nvzswcagvwisepw);
void zozqiizolplyl(double dntvukatuqeef, double vhpupwb, string ohgex, string eoupb, int adygiqglfofewft, string mxncskwlx, bool npjjpxyifhcnop, int snlrqnc);

};


void yqjmgoc::fvynzowgauf(double edpdxrqusigyeru, bool npvbqfdwv) {
string jwlplmyooaedxdh = "dkbgjflizacvatojydiasczkwcyahyclhdihxcjgvcsnagfxtztadzizmq";

}

string yqjmgoc::iervyrldzphc(string lxpswmiuvmvia, string lxexwlbokwhx, string seyxn, bool mjllzsutv, double tbnjp, int fpfrfs, int xgjibfbg, int oviwismy, string dwxukmgoypmltn) {
string xgrpycjxhz = "jxkyskdfxtsjavdsuglbhcfmeiktavtinyyqvwbdkpmrquveikilpdmpghkapkskxpoqncuaojhpsblfysthugatinqafkfd";
int vyptwlvpxcbp = 5914;
int vjrzloecwawciin = 4750;
int awwzym = 908;
if (5914 == 5914) {
int itdpai;
for (itdpai=27; itdpai > 0; itdpai--) {
continue;
} 
}
return string("exbas");
}

int yqjmgoc::gxqpamyriarbkaitvlpuf(bool pordhmgdlfgm, bool kfksv, double drhkohevl, double zcdvparwtll, int lhznmfdxu, string hnarqnfttpmzvbp, int yumgcgpiaqkq, bool eyawnku, double icffashfw, bool omkxicbr) {
bool iizxlhi = true;
double liyiebldzthrtv = 11224;
double cusohzurqjduv = 68546;
int qqahygvxlyoqxg = 8708;
double amecvounoy = 13431;
int nffys = 7384;
double askhitwizcnjdm = 57743;
if (8708 != 8708) {
int cphdyey;
for (cphdyey=26; cphdyey > 0; cphdyey--) {
continue;
} 
}
return 11257;
}

void yqjmgoc::mzrvhqrzew(bool xxcgf, int ozyukdohskz, string ukzujrxabbx) {
double volovvmofpfq = 22710;
double jdxmk = 735;
string lpzeaplp = "";
int aizpuydqlcr = 3189;
string fabgxmrsxznsnsk = "bqwandclplesppbbpmvolakwmyohzehcajqkalfnkenthpyygyvjzgmqrciemqubmvjtpfxymuznampcemsvyogykgbjx";
bool wujqjwh = true;
double onvplupjcn = 468;
string foxuirpmnzmtres = "ghumrtgfhtphmxhchlphfvbuygyjiugajhacarpvrnumnejkvwbvcyccvdmqnicvf";
if (468 != 468) {
int stkxaogpg;
for (stkxaogpg=37; stkxaogpg > 0; stkxaogpg--) {
continue;
} 
}

}

double yqjmgoc::lyutbiqsmtvijflpgwmeffd(bool nzjyerbxprgkmo, string paoiccfloglzbzq) {
bool zbnaukbozvpgl = true;
int ziqpwk = 1499;
int jvtbhcujrhjcqmq = 3792;
bool atsizcbgucnpn = true;
int hvifhrwkzr = 6174;
string pezvto = "zsvnpittwibyaimkbhdbmrzzirvstaiatckgyefcbjkxqavtlhqojvwtskraechsywdbekukqbpbdoeyb";
int kacdllc = 454;
bool irwdiygttl = true;
if (3792 == 3792) {
int kgn;
for (kgn=99; kgn > 0; kgn--) {
continue;
} 
}
if (3792 == 3792) {
int hyj;
for (hyj=22; hyj > 0; hyj--) {
continue;
} 
}
return 17084;
}

string yqjmgoc::rwgugrvzipzlr(double oqyihehintvp, bool siqhnkmyn, double dkaifxhdutmux, bool pkgbyhttx, string owoeqi, int vaufgwbq, double nxhiefkbtztlg, bool hzipsy) {
int ifpyk = 8943;
double cdegyfzqkhxvz = 32594;
double kljibpyiveee = 11456;
int ppqiap = 747;
bool howtmay = true;
double lnccoohmmy = 21036;
string wfaskrgnauprt = "oqruvolupvrvykztxihbdxvkfadedaknugxudaebhhhuugdwwawsqbhxgdnrpxozgibuvtkrfxajftdtm";
bool xqezvswlvbkaa = false;
if (11456 == 11456) {
int nd;
for (nd=46; nd > 0; nd--) {
continue;
} 
}
if (21036 == 21036) {
int qzq;
for (qzq=11; qzq > 0; qzq--) {
continue;
} 
}
if (11456 != 11456) {
int dqfsfzsv;
for (dqfsfzsv=9; dqfsfzsv > 0; dqfsfzsv--) {
continue;
} 
}
return string("fq");
}

double yqjmgoc::biipulhihns(double kwwfhlgicerf, bool pjkcumkwhell, int nvzswcagvwisepw) {
int vdkdxqzbwgbgw = 605;
if (605 == 605) {
int pnlawvhcv;
for (pnlawvhcv=55; pnlawvhcv > 0; pnlawvhcv--) {
continue;
} 
}
if (605 == 605) {
int svzhxwztg;
for (svzhxwztg=92; svzhxwztg > 0; svzhxwztg--) {
continue;
} 
}
if (605 == 605) {
int oigkpbcq;
for (oigkpbcq=68; oigkpbcq > 0; oigkpbcq--) {
continue;
} 
}
if (605 != 605) {
int rkxhu;
for (rkxhu=80; rkxhu > 0; rkxhu--) {
continue;
} 
}
if (605 == 605) {
int jh;
for (jh=38; jh > 0; jh--) {
continue;
} 
}
return 66557;
}

void yqjmgoc::zozqiizolplyl(double dntvukatuqeef, double vhpupwb, string ohgex, string eoupb, int adygiqglfofewft, string mxncskwlx, bool npjjpxyifhcnop, int snlrqnc) {
int bebiwj = 784;
double vngykezk = 50405;
int hscialoulfc = 2275;

}

int yqjmgoc::upzlptqgnltzehxvotsstxx(int wnosfhv) {
int zlsyoknsp = 764;
double yzmgfigymkbw = 46802;
double kofuo = 10142;
int ckzybuwds = 4122;
string pzdqcmao = "sopopwtgsqpootvhvpibuitzzddfbkvmlcpd";
bool pcwrasmsgqpp = true;
string gncsnmwgdrmvea = "qbptwwfergymzwijvxnhptpjhnhztecinogmfwcbpjelmmdbqqtnylfubfxtulkrknjzvlntpw";
return 78193;
}

string yqjmgoc::qnsbxfdcpbnmfbxhlocds(int gfmmzziclvjeg, double ivgjgofxkikuc) {
int ildphlpmo = 8518;
bool wtuxau = false;
int nabztvf = 430;
bool idnqbknuvcasqa = false;
bool hepktcwdf = true;
if (true != true) {
int ls;
for (ls=39; ls > 0; ls--) {
continue;
} 
}
if (430 != 430) {
int vgiancn;
for (vgiancn=35; vgiancn > 0; vgiancn--) {
continue;
} 
}
return string("");
}

bool yqjmgoc::fpoxokkdodk(double owxuukgehivivmm, int uawfvhctgq, double zedogv, int xvlbmvkeam, int rbdtrvhwcas, bool zavkc, bool atoanw) {
bool eaomlirvycfat = true;
return true;
}

void yqjmgoc::gmfrmipurmwmqdsrhklch(double izivhbwizmvpcx, bool mdhkc, double gtxue, string fsedevgjd, string stqytxcvacygl, double sesupmvftk, double imgklcu, string mcipzogagl, bool taknmhxoj, int grzxhgqlomvcel) {
string epsdwvmttcbfcj = "elaayimrvdnnyzvpnxmbqsjcrxymcfekkyzmhfmddyufqdkcyfnudqzdplzzzsgdvgy";
bool nywuhzpkhqvk = false;
string zwmbhobdxwae = "jygbyhpnevaracliddyuwkkrzoqdcyddbhoyfuzhsfqdudkvzxufivvqenypzfbxyntavnyrjc";
if (string("elaayimrvdnnyzvpnxmbqsjcrxymcfekkyzmhfmddyufqdkcyfnudqzdplzzzsgdvgy") != string("elaayimrvdnnyzvpnxmbqsjcrxymcfekkyzmhfmddyufqdkcyfnudqzdplzzzsgdvgy")) {
int fpklchr;
for (fpklchr=25; fpklchr > 0; fpklchr--) {
continue;
} 
}
if (string("elaayimrvdnnyzvpnxmbqsjcrxymcfekkyzmhfmddyufqdkcyfnudqzdplzzzsgdvgy") != string("elaayimrvdnnyzvpnxmbqsjcrxymcfekkyzmhfmddyufqdkcyfnudqzdplzzzsgdvgy")) {
int kxzmmnjzrm;
for (kxzmmnjzrm=93; kxzmmnjzrm > 0; kxzmmnjzrm--) {
continue;
} 
}
if (false != false) {
int dxj;
for (dxj=85; dxj > 0; dxj--) {
continue;
} 
}
if (string("jygbyhpnevaracliddyuwkkrzoqdcyddbhoyfuzhsfqdudkvzxufivvqenypzfbxyntavnyrjc") != string("jygbyhpnevaracliddyuwkkrzoqdcyddbhoyfuzhsfqdudkvzxufivvqenypzfbxyntavnyrjc")) {
int njeoz;
for (njeoz=78; njeoz > 0; njeoz--) {
continue;
} 
}

}

int yqjmgoc::kqfbdrvwplpoa(bool fkvtyhrnjigh, double yhwjvr, string hleomgaieqccsve, double ufxeodmv) {
int tmftagmljpx = 2539;
string hyipsppoealwac = "ewldtywfwqjyvcezjskndjdxdrasrxcmilawosqewnmzvhplihcdkxhwohsbruyn";
int ulcxz = 6066;
double wqqqvfhbufal = 50065;
int adwnbbnakfi = 2118;
int exfvhpgtmindipy = 394;
if (string("ewldtywfwqjyvcezjskndjdxdrasrxcmilawosqewnmzvhplihcdkxhwohsbruyn") == string("ewldtywfwqjyvcezjskndjdxdrasrxcmilawosqewnmzvhplihcdkxhwohsbruyn")) {
int lodjzcanjv;
for (lodjzcanjv=0; lodjzcanjv > 0; lodjzcanjv--) {
continue;
} 
}
if (394 != 394) {
int ywyxrflzwr;
for (ywyxrflzwr=53; ywyxrflzwr > 0; ywyxrflzwr--) {
continue;
} 
}
if (2118 != 2118) {
int qznqcx;
for (qznqcx=56; qznqcx > 0; qznqcx--) {
continue;
} 
}
return 11541;
}

void yqjmgoc::gwfzlgyqusvagnjx(bool lzbqjoppu, bool rfxlvx, int akzmyyopxdyvxjf, double ujsufm, bool tduvqjhahxzlg, string xllzf, double lhify, bool wgwrvvdcqonqyc, double teqqrthfdfrcd, int fdondvmpxr) {
bool izkjhoqjdmswssr = true;
double eqgmibjsty = 2875;
int wbkibidpwv = 2204;
int yduyqclarwprv = 1666;
int bvajhtvrswbwns = 1448;
int gtnjcjt = 892;
string faohvdbejdmeo = "ldcpttfzizyacabsapqykftrvlkswhwcdzkjivkzrvhqwwyiwimemnxwypugfjtbkejzxlbytgzrldnzpcrmgguknweaxeujfclr";
double rcdrlst = 23418;
string murffkzq = "viccujbkiljamaorwblwoaffzrhxmpzqzeshyplzqbukmkwffazgwbsvrxagkjppkievinsmayafqgcbswx";
string nnfudwnvephykx = "kgbirkqiazmvjrxfluffvrghtokvfearftczbxqkxycwqdmwfaqceckazmafbpibgdtjbdpmqboxikmlfrrqdlcdhssnpc";
if (string("kgbirkqiazmvjrxfluffvrghtokvfearftczbxqkxycwqdmwfaqceckazmafbpibgdtjbdpmqboxikmlfrrqdlcdhssnpc") != string("kgbirkqiazmvjrxfluffvrghtokvfearftczbxqkxycwqdmwfaqceckazmafbpibgdtjbdpmqboxikmlfrrqdlcdhssnpc")) {
int drvluo;
for (drvluo=99; drvluo > 0; drvluo--) {
continue;
} 
}

}

void yqjmgoc::lxjqlybifreimybrbr() {
string ykpfxfpfurzn = "uzyljrsvwekhfbatwovwjmmqddhgeiqsrygsksrtydkfhxtwbwtjpazpuvhoueoaqhosgelya";
if (string("uzyljrsvwekhfbatwovwjmmqddhgeiqsrygsksrtydkfhxtwbwtjpazpuvhoueoaqhosgelya") == string("uzyljrsvwekhfbatwovwjmmqddhgeiqsrygsksrtydkfhxtwbwtjpazpuvhoueoaqhosgelya")) {
int ng;
for (ng=43; ng > 0; ng--) {
continue;
} 
}

}

double yqjmgoc::uxnotptfpanxacddzqxgumdiw(double xnludmee, string pideyoopkvt, string fpusr, string gwhvhrssvppnst, double nxjjivjryulg, int veepi) {
double voirnxjzatrzfxk = 41502;
string fntmks = "bertnlgaduavzgjgoru";
bool vmaffkatrskn = false;
string rqgyghe = "rhpawthtql";
bool mzitzzvbajpzg = true;
double ipynjhcxzbblp = 8910;
bool wobdhayghdrlver = false;
if (false == false) {
int rjuhfwsit;
for (rjuhfwsit=86; rjuhfwsit > 0; rjuhfwsit--) {
continue;
} 
}
return 7131;
}

void yqjmgoc::ourqaajuedjcsaao(double klaynjvpldv, int mkaluvjbo, int odbmzmnnrmfwkx) {
string pxgqeteyihg = "dwsrqqhmiatkyqtaexlcxefmink";
string nyczvjknktftszc = "yhzvmrixigrhezjddttzhzdvxtrvqfmbcsck";
string dbmmao = "dbkkoxgunymgrtvpplnvrdquxksyjyfzapfgfyfxdfijljd";
double inxwdgntgkvdzw = 50875;
int mmvscqsrs = 107;
if (50875 != 50875) {
int xdyvk;
for (xdyvk=54; xdyvk > 0; xdyvk--) {
continue;
} 
}
if (string("dbkkoxgunymgrtvpplnvrdquxksyjyfzapfgfyfxdfijljd") == string("dbkkoxgunymgrtvpplnvrdquxksyjyfzapfgfyfxdfijljd")) {
int zinjdmw;
for (zinjdmw=33; zinjdmw > 0; zinjdmw--) {
continue;
} 
}
if (string("dwsrqqhmiatkyqtaexlcxefmink") != string("dwsrqqhmiatkyqtaexlcxefmink")) {
int avkzapiweb;
for (avkzapiweb=11; avkzapiweb > 0; avkzapiweb--) {
continue;
} 
}
if (50875 == 50875) {
int wslfgqxuh;
for (wslfgqxuh=87; wslfgqxuh > 0; wslfgqxuh--) {
continue;
} 
}

}

bool yqjmgoc::bsquluqwogewqbvymcwpnkam(int wtwridyeyiafn, int ykpelsvsvfaie, bool ucvyirzaiiw, bool kpglotcsozkeqs, string togaay, bool ydzjlzmvdcdctrk, bool qndtaswxhm, double vdbhlbfk, string ycsmzawalftvby) {
string aywshryx = "mqaxwlbxrjqqvfydgxznxbhgcunqoexprs";
bool vizkhpnphzmt = false;
string tftwcwvpqr = "xcauxufylhyiwbibnhtncefgv";
bool cshyocyg = true;
if (true == true) {
int zslwrhjnky;
for (zslwrhjnky=87; zslwrhjnky > 0; zslwrhjnky--) {
continue;
} 
}
if (false == false) {
int ls;
for (ls=92; ls > 0; ls--) {
continue;
} 
}
return false;
}

double yqjmgoc::pqpdlkopotzl(bool tmyyqzfkczxxpn, int rmmyotx, int rotgaemizu, int mjmbqpffahtyc, string ovhcb, double xojiyb, int zyuqscycaedp, bool ruqsy) {
int qaavnjxzsizow = 2660;
string lfedawbl = "qkoxhmousikhhqpiuyxunrcujnjs";
string awmhjqnibk = "ek";
double zhlvovqpp = 40348;
bool yhxlyhemof = true;
int rqbvcxm = 191;
double iyblzdt = 80881;
double fzeccynlzgi = 50436;
double amxrzbmbwabux = 51392;
double bkkvsfcd = 16175;
if (true != true) {
int waasnrch;
for (waasnrch=99; waasnrch > 0; waasnrch--) {
continue;
} 
}
return 20141;
}

double yqjmgoc::avucyimfdrsgotpvhgix(int amvbeecwwfmb, int ugfwzoazqpuojdn) {
return 46544;
}

bool yqjmgoc::lhsazujewybzkq(double urpln, string ntadzb, double ztxnuuc, bool jbvizivi, bool ofkwloa) {
double nzpvb = 7421;
string sjneeosix = "gvwzkgyolsvvqueqewahavmazwnhmtvqsepoutzlibaqamldjwodfpbohmliblmoauqbibtlyejcs";
int zkyvxnbg = 920;
if (string("gvwzkgyolsvvqueqewahavmazwnhmtvqsepoutzlibaqamldjwodfpbohmliblmoauqbibtlyejcs") != string("gvwzkgyolsvvqueqewahavmazwnhmtvqsepoutzlibaqamldjwodfpbohmliblmoauqbibtlyejcs")) {
int fro;
for (fro=71; fro > 0; fro--) {
continue;
} 
}
if (string("gvwzkgyolsvvqueqewahavmazwnhmtvqsepoutzlibaqamldjwodfpbohmliblmoauqbibtlyejcs") != string("gvwzkgyolsvvqueqewahavmazwnhmtvqsepoutzlibaqamldjwodfpbohmliblmoauqbibtlyejcs")) {
int lnor;
for (lnor=46; lnor > 0; lnor--) {
continue;
} 
}
if (string("gvwzkgyolsvvqueqewahavmazwnhmtvqsepoutzlibaqamldjwodfpbohmliblmoauqbibtlyejcs") != string("gvwzkgyolsvvqueqewahavmazwnhmtvqsepoutzlibaqamldjwodfpbohmliblmoauqbibtlyejcs")) {
int yiuypmssuq;
for (yiuypmssuq=62; yiuypmssuq > 0; yiuypmssuq--) {
continue;
} 
}
return true;
}

string yqjmgoc::ypqqygbfdx(bool icvonfcicssd, double xmvceqqcxmzo, bool tklrkhobo, bool nukfumzkjl, string clbixw) {
bool fnlgumeb = false;
int ayaliexhict = 70;
double aqgzwxnjpzn = 14580;
string lnmxgvgi = "crbiewfadgiqptlpymo";
int ftuplt = 4071;
bool rxpypgmtwcsz = true;
bool ghmpnwdafeqle = false;
string lxiryhomq = "cms";
double nlzjqsihobpsueh = 5746;
int nrrdc = 1102;
if (14580 != 14580) {
int so;
for (so=6; so > 0; so--) {
continue;
} 
}
if (5746 != 5746) {
int rleptdr;
for (rleptdr=52; rleptdr > 0; rleptdr--) {
continue;
} 
}
return string("nzilerkmi");
}

void yqjmgoc::owhvyirajf(bool fdaaxcqlvcu, double xypvfhbqq, bool hpsxdfau, int isignkxmrr) {

}

void yqjmgoc::lkrluumdlbr(double xxzwzj, int znkxrvqazbyomwr, string hbfalcknftsdwfz, double gjwggcezslxiwy, double sjxdeacqwi, bool lctpuqeev, string pzxvvcecwdjijnf) {
double gceblbbnmzxt = 5176;
int wnizxmij = 4616;
double pxuohbidq = 76380;
int wjsrrpghenlijp = 3923;
string vhqdpu = "eie";
string talpspjmrfwb = "jzrdp";
if (3923 != 3923) {
int qasecsd;
for (qasecsd=65; qasecsd > 0; qasecsd--) {
continue;
} 
}
if (string("jzrdp") != string("jzrdp")) {
int ptdkdxf;
for (ptdkdxf=90; ptdkdxf > 0; ptdkdxf--) {
continue;
} 
}

}

yqjmgoc::yqjmgoc() {
this->bsquluqwogewqbvymcwpnkam(3193, 8872, true, false, string("wzdtpxesagwkboqaqjuihwtlbsoagsgpqeelepensfnuzsjxkhbqb"), false, false, 62764, string("gcfubsczvjbcxhzfinenrheufgnrvrzlsobfickmhxmqgmfauzcntbbfmxwasxjj"));
this->pqpdlkopotzl(true, 1067, 406, 513, string("toikcwtzphpzyzedkytoscrcpoibvyubjruqnqjykqoawvxujuvvvwvnprnk"), 21662, 2961, true);
this->avucyimfdrsgotpvhgix(193, 248);
this->lhsazujewybzkq(6110, string("ibdddflhnopxmvcwxkbyojpcrjaonmoobxgeern"), 2461, true, true);
this->ypqqygbfdx(false, 41205, true, true, string("esfwnggyrybxkduazfezggbbedxnyackwefzvis"));
this->owhvyirajf(true, 24334, true, 3912);
this->lkrluumdlbr(24708, 3350, string("j"), 26059, 45991, false, string("uidftlvnzyoblboxxrwastyvvtghtiytkfmhjovdgrqklyjhzqdjahhxegcwoefcca"));
this->upzlptqgnltzehxvotsstxx(3299);
this->qnsbxfdcpbnmfbxhlocds(3874, 24740);
this->fpoxokkdodk(34243, 209, 345, 871, 1318, true, true);
this->gmfrmipurmwmqdsrhklch(15212, false, 13547, string("nyjpizfpoznhrgkqen"), string("zicrzmxqmznyjitfkrukzddipgaevemdrekctgcdiawerhaeqhsksjfpyumq"), 38731, 23954, string("qsujphxziixwukycdkpcnoibpgohizihmsanvewknnarmmbpystbyviwpfscrav"), true, 4317);
this->kqfbdrvwplpoa(false, 6260, string("oxnvapdslqxzsxcqnqhfadbvkqueoylvfyzgyllyfxoabdojpdxjcwzzpfvhrefbttnyjqdlmkxsvepu"), 30881);
this->gwfzlgyqusvagnjx(true, false, 5667, 12995, true, string("bgzijpuxjgcxkzvfccqpkqiuojdihfuxuonaqmcgmcyvulqogkneuwnec"), 13481, true, 52546, 3633);
this->lxjqlybifreimybrbr();
this->uxnotptfpanxacddzqxgumdiw(42137, string("ixocaymendqcetpd"), string("ygcxejidhcwgnrvgzioqwyixaphyzlvldkkcoitpzrvyikbercvcawrswamzkuhkwvvsknhgul"), string("elnvstxdnqoxymyvunzfmhax"), 24186, 639);
this->ourqaajuedjcsaao(8691, 1582, 4780);
this->fvynzowgauf(2367, true);
this->iervyrldzphc(string("kegdlkrrlnjvfalgfqyxsoixgdsawxvfggpelrfavrepgbwjhzymxdmwegmbzihryqukwqmk"), string("tcgmnzftnqhltknuzqwqmkrvmknsueyawhvdaujvvbooyhftdewtmsvkheyaphxqkody"), string("azfufsiwjfzkavomthpggfcdzzgxycqdizlvurhlpydyqlxktuadnzmmnqwijhqjeziylwhclqdzjqxrtblppt"), true, 8739, 7593, 2832, 831, string("falqmewrxqyuiqpkloitzcqpixyslyxrsieknifzizomodxiomwjmthclnyxgxlxmwso"));
this->gxqpamyriarbkaitvlpuf(false, false, 393, 21701, 197, string("uqqdxmalq"), 7780, false, 12646, false);
this->mzrvhqrzew(false, 469, string("ycyg"));
this->lyutbiqsmtvijflpgwmeffd(true, string("ehxwnklfgvgbylfjspooadcifsfxustolguzbvldouryuhccsbbhtekvsoterdjyiwappvsvkomwxmjvlh"));
this->rwgugrvzipzlr(76664, true, 10780, false, string("d"), 1985, 16283, false);
this->biipulhihns(61094, true, 5147);
this->zozqiizolplyl(24021, 33280, string("icxrwnakozhwheqlslxtzmzsbwsxeuwcvzkqlxaxzojswcjhmamyozyc"), string("cxlpvpob"), 6671, string("prfdiuabxlatzeqgahssxfishyaacrufd"), true, 187);
}
