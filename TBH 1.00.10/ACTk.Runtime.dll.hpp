// ============================================================
// Image: ACTk.Runtime.dll
// ============================================================

namespace Microsoft.CodeAnalysis
{

    // Namespace: Microsoft.CodeAnalysis
    class EmbeddedAttribute : public Attribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x674A40
    };

} // namespace Microsoft.CodeAnalysis

namespace System.Runtime.CompilerServices
{

    // Namespace: System.Runtime.CompilerServices
    class IsUnmanagedAttribute : public Attribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x674A40
    };

} // namespace System.Runtime.CompilerServices

// Namespace: <global>
struct MonoScriptData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Byte[][] FilePathsData; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Byte[][] TypesData; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t TotalTypes; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t TotalFiles; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    bool IsEditorOnly; // 0x0028
};

// Namespace: <global>
class dan
{
public:

    // Methods
    void .ctor();  // RVA: 0x628380
    static MonoScriptData fnf();  // RVA: 0x6756F0
    static MonoScriptData vyz();  // RVA: 0x6757D0
};

// Namespace: <global>
class dao
{
public:

    // Methods
    static void vzb();  // RVA: 0x63D9D0
    static void vza();  // RVA: 0x63D9D0
    static void oea();  // RVA: 0x63D9D0
    static void kdp();  // RVA: 0x63D9D0
};

// Namespace: <global>
class ApplicationFocusEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x674930
    void Invoke(bool hasFocus);  // RVA: 0x674920
    IAsyncResult* BeginInvoke(bool hasFocus, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6748B0
    void EndInvoke(IAsyncResult* result);  // RVA: 0x674910
};

// Namespace: <global>
class ApplicationPauseEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x674930
    void Invoke(bool pauseStatus);  // RVA: 0x674920
    IAsyncResult* BeginInvoke(bool pauseStatus, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6748B0
    void EndInvoke(IAsyncResult* result);  // RVA: 0x674910
};

// Namespace: <global>
class dap : public MonoBehaviour
{
public:
    // Static fields
    // static dap* bmnz;

    uint8_t pad_0000[0x20]; // 0x0000
    ApplicationFocusEventHandler* bmnx; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ApplicationPauseEventHandler* bmny; // 0x0028

    // Methods
    static dap* vzg();  // RVA: 0x675C10
    void vzd(ApplicationFocusEventHandler* a);  // RVA: 0x675A30
    void Awake();  // RVA: 0x6758B0
    void .ctor();  // RVA: 0x628730
    void vzc(ApplicationFocusEventHandler* a);  // RVA: 0x675990
    void OnApplicationFocus(bool hasFocus);  // RVA: 0x675950
    void vzf(ApplicationPauseEventHandler* a);  // RVA: 0x675B70
    void enk(bool pauseStatus);  // RVA: 0x675970
    void vze(ApplicationPauseEventHandler* a);  // RVA: 0x675AD0
    void OnApplicationPause(bool pauseStatus);  // RVA: 0x675970
};

// Namespace: <global>
class daq
{
public:

    // Methods
    static Char[][] jla(Il2CppString* a);  // RVA: 0x6761C0
    static Char[][] vzi(Il2CppString* a);  // RVA: 0x6768C0
    static Il2CppString* vzj(Il2CppString* a);  // RVA: 0x676960
    static Char[][] lmv(Il2CppString* a);  // RVA: 0x6764B0
    static Il2CppString* vzk(Char[][] a);  // RVA: 0x676A80
    static Il2CppString* juk(Il2CppString* a);  // RVA: 0x676300
    static Il2CppString* jul(Char[][] a);  // RVA: 0x6763A0
    static Il2CppString* jqz(Il2CppString* a);  // RVA: 0x676260
    static Il2CppString* lts(Il2CppString* a);  // RVA: 0x676550
    static Il2CppString* lvi(Il2CppString* a);  // RVA: 0x6765F0
    static Char[][] bnc(Il2CppString* a);  // RVA: 0x675D40
    static Il2CppString* hti(Il2CppString* a);  // RVA: 0x675F90
    static Il2CppString* vzh(Il2CppString* a);  // RVA: 0x676820
    static Il2CppString* gkf(Char[][] a);  // RVA: 0x675E80
    static Il2CppString* miy(Char[][] a);  // RVA: 0x676710
    static Il2CppString* ihk(Char[][] a);  // RVA: 0x6760B0
    static Il2CppString* elh(Il2CppString* a);  // RVA: 0x675DE0
};

// Namespace: <global>
class dar
{
public:
    // Static fields
    // static int32_t bmoa;
    // static uint8_t bmob;
    // static uint8_t bmoc;
    // static uint8_t bmod;
    // static uint8_t bmoe;
    // static uint8_t bmof;


    // Methods
    static void vzl(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x676DC0
    static void vzm(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x676E30
    static void dji(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x676C00
    static void vzo(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x676F10
    static void cxm(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x676B90
    static void z(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x676F80
    static void vzp(Stream* a, Stream* b, Byte[][] c, uint8_t d);  // RVA: 0x564160
    static void vzq(Stream* a, Stream* b, Byte[][] c, uint8_t d, uint8_t e);  // RVA: 0x436AF0
    static void zg(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x676FF0
    static void iyl(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x676D50
    static void vzn(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x676EA0
    static void eoc(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x676C70
    static void igg(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x676CE0
};

// Namespace: <global>
class das
{
public:
    // Static fields
    // static int32_t bmog;


    // Methods
    static int32_t was(uint64_t a);  // RVA: 0x67A150
    static bool vzs(bool a, int32_t b);  // RVA: 0x679010
    static int32_t dmz(Vector3 a);  // RVA: 0x6779E0
    static bool myb(Quaternion a, int32_t b);  // RVA: 0x677400
    static bool dqi(BigInteger a, int32_t b);  // RVA: 0x677AD0
    static bool sn(BigInteger a, int32_t b);  // RVA: 0x677AD0
    static int32_t enh(Decimal a);  // RVA: 0x677CB0
    static bool vzy(Quaternion a, int32_t b);  // RVA: 0x677400
    static int32_t ffz(Vector3Int a);  // RVA: 0x677F80
    static bool waa(Vector2Int a, int32_t b);  // RVA: 0x677060
    static int32_t ffo(Char[][] a);  // RVA: 0x677F30
    static bool wae(double a, int32_t b);  // RVA: 0x678AA0
    static int32_t bqp(Char[][] a);  // RVA: 0x677430
    static int32_t bsz(Char[][] a);  // RVA: 0x677480
    static bool vzu(int32_t a, int32_t b);  // RVA: 0x6786A0
    static bool wag(DateTimeOffset a, int32_t b);  // RVA: 0x6793A0
    static bool ohb(DateTimeOffset a, int32_t b);  // RVA: 0x6793A0
    static int32_t cdf(Guid a);  // RVA: 0x6775E0
    static int32_t waj(BigInteger a);  // RVA: 0x6797B0
    static int32_t men(Vector3 a);  // RVA: 0x6779E0
    static int32_t lut(int64_t a);  // RVA: 0x679030
    static bool nrw(Guid a, int32_t b);  // RVA: 0x6787B0
    static bool lxk(Guid a, int32_t b);  // RVA: 0x6787B0
    static int32_t wao(DateTimeOffset a);  // RVA: 0x679D70
    static int32_t wba(Char[][] a);  // RVA: 0x67A400
    static bool mea(Vector3Int a, int32_t b);  // RVA: 0x677870
    static bool vzx(uint64_t a, int32_t b);  // RVA: 0x678370
    static bool kvz(double a, int32_t b);  // RVA: 0x678AA0
    static bool edb(Quaternion a, int32_t b);  // RVA: 0x677400
    static bool vzt(Decimal a, int32_t b);  // RVA: 0x677C00
    static int32_t lni(uint32_t a);  // RVA: 0x678C20
    static bool wah(Guid a, int32_t b);  // RVA: 0x6787B0
    static bool lif(BigInteger a, int32_t b);  // RVA: 0x677AD0
    static int32_t way(Vector3 a);  // RVA: 0x6779E0
    static bool mpi(Vector2Int a, int32_t b);  // RVA: 0x677060
    static bool jwp(double a, int32_t b);  // RVA: 0x678AA0
    static int32_t wap(Guid a);  // RVA: 0x679E50
    static int32_t ghp(Guid a);  // RVA: 0x678420
    static bool ibv(Decimal a, int32_t b);  // RVA: 0x677C00
    static bool cbq(Vector3 a, int32_t b);  // RVA: 0x6774D0
    static int32_t llc(bool a);  // RVA: 0x678D10
    static int32_t gbp(Quaternion a);  // RVA: 0x6778A0
    static int32_t wau(double a);  // RVA: 0x67A240
    static int32_t lfw(int64_t a);  // RVA: 0x678C70
    static bool gjy(uint32_t a, int32_t b);  // RVA: 0x6786A0
    static bool njm(int32_t a, int32_t b);  // RVA: 0x6786A0
    static int32_t jie(Decimal a);  // RVA: 0x678840
    static bool kcg(uint32_t a, int32_t b);  // RVA: 0x6786A0
    static int32_t ksn(Vector2 a);  // RVA: 0x678AD0
    static bool of(uint64_t a, int32_t b);  // RVA: 0x678370
    static int32_t jmt(Decimal a);  // RVA: 0x678970
    static bool lup(Quaternion a, int32_t b);  // RVA: 0x677400
    static bool bn(Quaternion a, int32_t b);  // RVA: 0x677400
    static int32_t hbo(Vector3 a);  // RVA: 0x6779E0
    static bool kkz(Vector2 a, int32_t b);  // RVA: 0x678B70
    static int32_t wat(float a);  // RVA: 0x67A1F0
    static bool wac(Vector3Int a, int32_t b);  // RVA: 0x677870
    static int32_t mee(int32_t a);  // RVA: 0x6791C0
    static int32_t olv(Guid a);  // RVA: 0x6793D0
    static bool fyt(Vector3 a, int32_t b);  // RVA: 0x6774D0
    static int32_t wbb(Il2CppString* a);  // RVA: 0x67A450
    static int32_t icq(double a);  // RVA: 0x678790
    static bool eff(Vector3Int a, int32_t b);  // RVA: 0x677870
    static int32_t fb(uint64_t a);  // RVA: 0x677E90
    static int32_t irz(bool a);  // RVA: 0x6787E0
    static int32_t ced(bool a);  // RVA: 0x677850
    static int32_t wax(Vector2Int a);  // RVA: 0x67A260
    static bool gp(Vector2Int a, int32_t b);  // RVA: 0x677060
    static int32_t key(Vector2 a);  // RVA: 0x678AD0
    static int32_t gwi(int64_t a);  // RVA: 0x6786F0
    static int32_t waz(Vector3Int a);  // RVA: 0x67A300
    static int32_t war(uint32_t a);  // RVA: 0x678C20
    static bool irc(Guid a, int32_t b);  // RVA: 0x6787B0
    static int32_t fxx(BigInteger a);  // RVA: 0x678080
    static int32_t wan(DateTime a);  // RVA: 0x679C80
    static int32_t wam(int32_t a);  // RVA: 0x678C20
    static bool vzw(uint32_t a, int32_t b);  // RVA: 0x6786A0
    static int32_t cqb(bool a);  // RVA: 0x677860
    static bool rj(DateTimeOffset a, int32_t b);  // RVA: 0x6793A0
    static int32_t rt(Vector3 a);  // RVA: 0x6779E0
    static bool msw(int32_t a, int32_t b);  // RVA: 0x6786A0
    static bool vzv(int64_t a, int32_t b);  // RVA: 0x679640
    static int32_t waw(Vector2 a);  // RVA: 0x678AD0
    static int32_t jjy(Quaternion a);  // RVA: 0x6778A0
    static bool dxj(Decimal a, int32_t b);  // RVA: 0x677C00
    static bool lti(bool a, int32_t b);  // RVA: 0x679010
    static int32_t wal(Decimal a);  // RVA: 0x679AB0
    static int32_t wak(bool a);  // RVA: 0x679AA0
    static int32_t mre(int64_t a);  // RVA: 0x679200
    static int32_t waq(int64_t a);  // RVA: 0x67A0B0
    static bool waf(Char[][] a, int32_t b);  // RVA: 0x679750
    static int32_t jcq(Char[][] a);  // RVA: 0x6787F0
    static bool dje(Vector3Int a, int32_t b);  // RVA: 0x677870
    static int32_t oca(uint64_t a);  // RVA: 0x679320
    static bool bbj(Vector2Int a, int32_t b);  // RVA: 0x677060
    static bool wad(float a, int32_t b);  // RVA: 0x6796F0
    static int32_t lpo(BigInteger a);  // RVA: 0x678D20
    static bool ndr(Vector2 a, int32_t b);  // RVA: 0x678B70
    static int32_t ko(uint32_t a);  // RVA: 0x678C20
    static int32_t mrj(Il2CppString* a);  // RVA: 0x6792A0
    static int32_t wai(a a);  // RVA: 0x564160
    static int32_t sv(Quaternion a);  // RVA: 0x6778A0
    static int32_t wav(Quaternion a);  // RVA: 0x6778A0
    static bool vzr(BigInteger a, int32_t b);  // RVA: 0x677AD0
    static bool gft(uint64_t a, int32_t b);  // RVA: 0x678370
    static int32_t mcx(DateTime a);  // RVA: 0x6790D0
    static bool vzz(Vector2 a, int32_t b);  // RVA: 0x678B70
    static int32_t dst(Vector3Int a);  // RVA: 0x677B00
    static bool wab(Vector3 a, int32_t b);  // RVA: 0x6774D0
    static int32_t dkt(Quaternion a);  // RVA: 0x6778A0
    static bool lxf(double a, int32_t b);  // RVA: 0x678AA0
    static int32_t ehm(Il2CppString* a);  // RVA: 0x677C30
    static int32_t blh(BigInteger a);  // RVA: 0x677110
};

// Namespace: <global>
class dat : public CertificateHandler
{
public:

    // Methods
    bool ValidateCertificate(Byte[][] certificateData);  // RVA: 0x67A4D0
    void .ctor();  // RVA: 0x67A4E0
};

// Namespace: <global>
class dau
{
public:

    // Methods
    static bool fux(float a, float b, float c);  // RVA: 0x67A620
    static bool lwq(float a, float b, float c);  // RVA: 0x67A6D0
    static bool wbd(double a, double b, double c);  // RVA: 0x67A8E0
    static bool mut(float a, float b, float c);  // RVA: 0x67A780
    static bool dkb(double a, double b, double c);  // RVA: 0x67A4F0
    static bool wbc(float a, float b, float c);  // RVA: 0x67A830
};

// Namespace: <global>
class dav
{
public:

    // Methods
    static void wbe(System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> a, int32_t b, int32_t c, int64_t d, Il2CppString* e);  // RVA: 0x67AA10
};

// Namespace: <global>
class daw
{
public:

    // Methods
    static uint8_t gmr();  // RVA: 0x67ADD0
    static int8_t wbh();  // RVA: 0x67B300
    static uint8_t wbg();  // RVA: 0x67B2B0
    static int16_t wbj();  // RVA: 0x67B3A0
    static uint32_t bkv();  // RVA: 0x67AB40
    static uint32_t lkr();  // RVA: 0x67AB40
    static int32_t wbl();  // RVA: 0x67AB40
    static int64_t ona();  // RVA: 0x67B180
    static uint64_t eeg();  // RVA: 0x67AC30
    static uint32_t wbm();  // RVA: 0x67AB40
    static uint16_t gic();  // RVA: 0x67AD30
    static int16_t knf();  // RVA: 0x67AF60
    static uint16_t wbk();  // RVA: 0x67B3F0
    static uint32_t emo();  // RVA: 0x67AB40
    static uint8_t jmp();  // RVA: 0x67AEC0
    static int16_t gkh();  // RVA: 0x67AD80
    static Il2CppString* wbf(int32_t a);  // RVA: 0x67B1D0
    static wchar_t kky();  // RVA: 0x67AF10
    static wchar_t wbi();  // RVA: 0x67B350
    static Il2CppString* mzk(int32_t a);  // RVA: 0x67B050
    static int16_t en();  // RVA: 0x67AC90
    static int64_t hhp();  // RVA: 0x67AE70
    static wchar_t lc();  // RVA: 0x67AFB0
    static uint64_t wbo();  // RVA: 0x67AC30
    static int64_t wbn();  // RVA: 0x67AC30
    static int32_t fry();  // RVA: 0x67ACE0
    static wchar_t bsy();  // RVA: 0x67AB90
    static int64_t cbk();  // RVA: 0x67ABE0
    static uint32_t fjx();  // RVA: 0x67AB40
    static void wbp(Char[][] a);  // RVA: 0x67B440
    static wchar_t mjy();  // RVA: 0x67B000
    static int16_t hck();  // RVA: 0x67AE20
    static int32_t nvs();  // RVA: 0x67B130
    static uint64_t jc();  // RVA: 0x67AC30
};

// Namespace: <global>
class dax
{
public:
    // Static fields
    // static Char[][] bmoh;


    // Methods
    static Char[][] osk(Byte[][] a);  // RVA: 0x67B810
    static Il2CppString* grf(Byte[][] a, int32_t b, int32_t c);  // RVA: 0x67B7B0
    static Byte[][] lyp(Il2CppString* a);  // RVA: 0x67B6E0
    static Char[][] wbs(Byte[][] a);  // RVA: 0x67B810
    static Il2CppString* czc(Byte[][] a);  // RVA: 0x67B770
    static Byte[][] cte(Il2CppString* a);  // RVA: 0x67B6E0
    static Il2CppString* wbu(Byte[][] a, int32_t b, int32_t c);  // RVA: 0x67B7B0
    static Il2CppString* wbt(Byte[][] a);  // RVA: 0x67B770
    static Byte[][] yh(Char[][] a);  // RVA: 0x67B730
    static Il2CppString* dco(Byte[][] a, int32_t b, int32_t c);  // RVA: 0x67B7B0
    static Il2CppString* wbv(Byte[][] a);  // RVA: 0x67BB50
    static Il2CppString* bnt(Byte[][] a);  // RVA: 0x67B560
    static Il2CppString* hfa(Byte[][] a);  // RVA: 0x67B770
    static Byte[][] wbr(Il2CppString* a);  // RVA: 0x67B6E0
    static Char[][] gpc(Byte[][] a);  // RVA: 0x67B810
    static Char[][] ehr(Byte[][] a);  // RVA: 0x67B810
    static Byte[][] wbq(Char[][] a);  // RVA: 0x67B730
    static Byte[][] ctj(Char[][] a);  // RVA: 0x67B730
    static void .cctor();  // RVA: 0x67B4D0
    static Il2CppString* dtv(Byte[][] a);  // RVA: 0x67B770
    static Byte[][] flv(Il2CppString* a);  // RVA: 0x67B6E0
    static Byte[][] dsk(Il2CppString* a);  // RVA: 0x67B6E0
    static Char[][] lml(Byte[][] a);  // RVA: 0x67B810
    static Il2CppString* juv(Byte[][] a);  // RVA: 0x67B9D0
    static Il2CppString* izr(Byte[][] a);  // RVA: 0x67B850
    static Il2CppString* fet(Byte[][] a);  // RVA: 0x67B770
};

// Namespace: <global>
class day`1
{
public:
    System.Collections.Concurrent.ConcurrentBag<a> bmoi; // 0x0000
    System.Func<a> bmoj; // 0x0000

    // Methods
    void gkp();  // RVA: 0x42E240
    a wbw();  // RVA: 0x564160
    void wby();  // RVA: 0x42E240
    void .ctor(System.Func<a> a);  // RVA: 0x418A00
    void wbx(a a);  // RVA: 0x564160
    void lda();  // RVA: 0x42E240
    void bix();  // RVA: 0x42E240
};

// Namespace: <global>
class daz
{
public:
    // Static fields
    // static Random* bmok;
    // static Random* bmol;


    // Methods
    static void mzm(Byte[][] a);  // RVA: 0x67C640
    static void wcb(Byte[][] a);  // RVA: 0x67CFF0
    static void ux(Byte[][] a);  // RVA: 0x67C8D0
    static int32_t lec(int32_t a, int32_t b);  // RVA: 0x67C3A0
    static int64_t wcd(Random* a, int64_t b, int64_t c);  // RVA: 0x67D590
    static void wce(Random* a, Char[][] b);  // RVA: 0x67D610
    static void wcc(Char[][] a);  // RVA: 0x67D280
    static void .cctor();  // RVA: 0x67BCD0
    static int64_t ioq(Random* a, int64_t b, int64_t c);  // RVA: 0x67C320
    static int32_t wbz(int32_t a, int32_t b);  // RVA: 0x67CB60
    static int64_t ljs(Random* a, int64_t b, int64_t c);  // RVA: 0x67C5C0
    static void ilo(Byte[][] a);  // RVA: 0x67C090
    static int64_t wca(int64_t a, int64_t b);  // RVA: 0x67CD80
    static void bxt(Byte[][] a);  // RVA: 0x67BD50
    static void hbq(Random* a, Char[][] b);  // RVA: 0x67BFE0
};

// Namespace: <global>
class dba
{
public:
    // Static fields
    // static int64_t bmom;


    // Methods
    static int64_t goc();  // RVA: 0x67D8D0
    static int64_t wci();  // RVA: 0x67DBD0
    static int64_t wcf();  // RVA: 0x67DAE0
    static double wcg();  // RVA: 0x67DB40
    static int64_t wcj();  // RVA: 0x67DBF0
    static int64_t wch();  // RVA: 0x67DBB0
    static double lse();  // RVA: 0x67D9D0
    static int64_t izy();  // RVA: 0x67D950
    static int64_t gqm();  // RVA: 0x67D8F0
    static int64_t lap();  // RVA: 0x67D9B0
    static int64_t ow();  // RVA: 0x67DA80
    static int64_t cda();  // RVA: 0x67D730
    static int64_t oew();  // RVA: 0x67DA40
    static double doc();  // RVA: 0x67D770
    static int64_t fti();  // RVA: 0x67D800
    static double fuc();  // RVA: 0x67D860
    static int64_t bvl();  // RVA: 0x67D710
    static int64_t cgr();  // RVA: 0x67D750
    static int64_t ege();  // RVA: 0x67D7E0
    static double bcc();  // RVA: 0x67D6A0
    static int64_t orq();  // RVA: 0x67DA60
};

// Namespace: <global>
class dbb
{
public:
    // Static fields
    // static uint32_t bmon;
    // static uint32_t bmoo;
    // static uint32_t bmop;
    // static uint32_t bmoq;
    // static uint32_t bmor;


    // Methods
    static uint32_t wcl(Stream* a, int64_t b, uint32_t c);  // RVA: 0x67E4B0
    static uint32_t cdi(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x67DC10
    static uint32_t kef(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x67DE30
    static uint32_t wck(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x67E080
};

// Namespace: <global>
class dbc : public dcy`1
{
public:
    // Static fields
    // static bool bmos;
    // static bool bmot;
    // static float bmou;
    // static float bmov;
    // static float bmow;
    // static float bmox;
    // static float bmoy;
    // static float bmoz;
    // static bool bmpa;

    uint8_t pad_0000[0x30]; // 0x0000
    int64_t bmpb; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int64_t bmpc; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int64_t bmpd; // 0x0040

    // Methods
    void Update();  // RVA: 0x67E910
    void jog();  // RVA: 0x67F480
    static float wct();  // RVA: 0x6800C0
    static void wcv(float a);  // RVA: 0x680190
    static float wcs();  // RVA: 0x680000
    void kko();  // RVA: 0x67F550
    static void oeq();  // RVA: 0x67F830
    void wcy();  // RVA: 0x680480
    void esq();  // RVA: 0x67F1B0
    static float wcu();  // RVA: 0x680180
    static void wcm();  // RVA: 0x67FA60
    bool wcw();  // RVA: 0x6801A0
    void wcx();  // RVA: 0x6803B0
    void .ctor();  // RVA: 0x67E9D0
    void eqd();  // RVA: 0x67F0A0
    void wda(Scene a, LoadSceneMode b);  // RVA: 0x680630
    static void wcn();  // RVA: 0x67FAD0
    void dqu();  // RVA: 0x67EDB0
    void bau();  // RVA: 0x67EA10
    static void ece();  // RVA: 0x67EE70
    static float wcq();  // RVA: 0x67FE80
    static float wcp();  // RVA: 0x67FDC0
    bool jdv();  // RVA: 0x67F270
    bool bqr();  // RVA: 0x67EAD0
    void wcz();  // RVA: 0x680590
    static float wcr();  // RVA: 0x67FF40
    void cfp();  // RVA: 0x67ECE0
    bool oep();  // RVA: 0x67F620
    static float wco();  // RVA: 0x67FD00
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    struct StorageDataType
    {
    public:
        // Static fields
        // static StorageDataType Unknown;
        // static StorageDataType SByte;
        // static StorageDataType Byte;
        // static StorageDataType Int16;
        // static StorageDataType UInt16;
        // static StorageDataType Int32;
        // static StorageDataType UInt32;
        // static StorageDataType Int64;
        // static StorageDataType UInt64;
        // static StorageDataType Char;
        // static StorageDataType Single;
        // static StorageDataType Double;
        // static StorageDataType Decimal;
        // static StorageDataType BigInteger;
        // static StorageDataType Boolean;
        // static StorageDataType String;
        // static StorageDataType DateTime;
        // static StorageDataType ByteArray;
        // static StorageDataType Vector2;
        // static StorageDataType Vector2Int;
        // static StorageDataType Vector3;
        // static StorageDataType Vector3Int;
        // static StorageDataType Vector4;
        // static StorageDataType Quaternion;
        // static StorageDataType Color;
        // static StorageDataType Color32;
        // static StorageDataType Rect;
        // static StorageDataType RectInt;
        // static StorageDataType RangeInt;
        // static StorageDataType Matrix4x4;
        // static StorageDataType Ray;
        // static StorageDataType Ray2D;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscuredPrefsData
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        StorageDataType type; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Byte[][] data; // 0x0018
    
        // Methods
        void .ctor(StorageDataType type, Byte[][] data);  // RVA: 0x6755D0
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbd
{
public:

    // Methods
    static Color32 hgt(Byte[][] a);  // RVA: 0x6806B0
    static ObscuredPrefsData wdc(a a);  // RVA: 0x564160
    static Color32 kkm(Byte[][] a);  // RVA: 0x680710
    static c wde(Byte[][] a);  // RVA: 0x564160
    static d wdf(StorageDataType a, Byte[][] b);  // RVA: 0x564160
    static Color32 hio(Byte[][] a);  // RVA: 0x6806E0
    static f wdh(StorageDataType a, Byte[][] b);  // RVA: 0x564160
    static Byte[][] wdi(T a);  // RVA: 0x564160
    static T wdj(Byte[][] a);  // RVA: 0x564160
    static b wdd(ObscuredPrefsData a);  // RVA: 0x564160
    static Byte[][] wdg(StorageDataType a, e b);  // RVA: 0x564160
    static Color32 wdb(Byte[][] a);  // RVA: 0x680740
};

// Namespace: <global>
class dbe
{
public:
    // Static fields
    // static Type* bmpe;
    // static Type* bmpf;
    // static Type* bmpg;
    // static Type* bmph;
    // static Type* bmpi;
    // static Type* bmpj;
    // static Type* bmpk;
    // static Type* bmpl;
    // static Type* bmpm;
    // static Type* bmpn;
    // static Type* bmpo;
    // static Type* bmpp;
    // static Type* bmpq;
    // static Type* bmpr;
    // static Type* bmps;
    // static Type* bmpt;
    // static Type* bmpu;
    // static Type* bmpv;
    // static Type* bmpw;
    // static Type* bmpx;
    // static Type* bmpy;
    // static Type* bmpz;
    // static Type* bmqa;
    // static Type* bmqb;
    // static Type* bmqc;
    // static Type* bmqd;
    // static Type* bmqe;
    // static Type* bmqf;
    // static Type* bmqg;
    // static Type* bmqh;
    // static Type* bmqi;


    // Methods
    static StorageDataType wdk();  // RVA: 0x421720
    static void .cctor();  // RVA: 0x680780
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    class UnsupportedDataTypeException : public Exception
    {
    public:
    
        // Methods
        void .ctor(Type* type);  // RVA: 0x675650
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class HashCheckSumModifierDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x674A80
    Byte[][] Invoke(Il2CppString* input);  // RVA: 0x674920
    IAsyncResult* BeginInvoke(Il2CppString* input, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x674A50
    Byte[][] EndInvoke(IAsyncResult* result);  // RVA: 0x674910
};

// Namespace: <global>
class dbf
{
public:
    // Static fields
    // static Il2CppString* bmqj;

    uint8_t pad_0000[0x10]; // 0x0000
    uint32_t bmqk; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    uint32_t bmql; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    HashCheckSumModifierDelegate* bmqm; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool <bmqn>k__BackingField; // 0x0020

    // Methods
    bool wdp();  // RVA: 0x675220
    static void wdm(Il2CppString* a);  // RVA: 0x681530
    static Il2CppString* wdl();  // RVA: 0x681480
    void .ctor(uint32_t a);  // RVA: 0x681030
    uint32_t wdv(Il2CppString* a);  // RVA: 0x681840
    static void erz();  // RVA: 0x681170
    void igz(HashCheckSumModifierDelegate* a);  // RVA: 0x681060
    void wdu();  // RVA: 0x681830
    void ljw(bool a);  // RVA: 0x681370
    void wdt(bool a);  // RVA: 0x681370
    static Il2CppString* wdo();  // RVA: 0x681690
    void wdq(bool a);  // RVA: 0x6816D0
    void flm(HashCheckSumModifierDelegate* a);  // RVA: 0x681060
    void iep(HashCheckSumModifierDelegate* a);  // RVA: 0x681060
    static void wdn();  // RVA: 0x681590
    void cvc(HashCheckSumModifierDelegate* a);  // RVA: 0x681060
    uint32_t wdr();  // RVA: 0x6816E0
    static void itw();  // RVA: 0x681270
    static void doe();  // RVA: 0x681070
    static void nxr();  // RVA: 0x681380
    void wds(HashCheckSumModifierDelegate* a);  // RVA: 0x681060
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    struct DeviceLockLevel
    {
    public:
        // Static fields
        // static DeviceLockLevel None;
        // static DeviceLockLevel Soft;
        // static DeviceLockLevel Strict;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbg
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    DeviceLockLevel <bmqo>k__BackingField; // 0x0010
    DeviceLockTamperingSensitivity <bmqp>k__BackingField; // 0x0011

    // Methods
    DeviceLockLevel wdw();  // RVA: 0x675500
    void wdx(DeviceLockLevel a);  // RVA: 0x6819B0
    DeviceLockTamperingSensitivity wdy();  // RVA: 0x6819C0
    void wdz(DeviceLockTamperingSensitivity a);  // RVA: 0x6819D0
    void .ctor(DeviceLockLevel a, DeviceLockTamperingSensitivity b);  // RVA: 0x681970
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    struct DeviceLockTamperingSensitivity
    {
    public:
        // Static fields
        // static DeviceLockTamperingSensitivity Disabled;
        // static DeviceLockTamperingSensitivity Low;
        // static DeviceLockTamperingSensitivity Normal;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: CodeStage.AntiCheat.Storage
    class DeviceUniqueIdentifierException : public BackgroundThreadAccessException
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x6749E0
    };

    // Namespace: CodeStage.AntiCheat.Storage
    class PersistentDataPathException : public BackgroundThreadAccessException
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x6755F0
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbh
{
public:
    // Static fields
    // static Il2CppString* bmqq;
    // static Il2CppString* bmqr;
    // static dbf* bmqs;

    uint8_t pad_0000[0x10]; // 0x0000
    Action* bmqt; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Action* bmqu; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbr* <bmqv>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* <bmqw>k__BackingField; // 0x0028

    // Methods
    ObscuredFileReadResult jnw();  // RVA: 0x682930
    void wed(Action* a);  // RVA: 0x685CB0
    void hkp(Stream* a);  // RVA: 0x683280
    void .ctor();  // RVA: 0x681BA0
    ObscuredFileReadResult iim();  // RVA: 0x6833F0
    ObscuredFileHeader wem(Stream* a);  // RVA: 0x684060
    ObscuredFileWriteResult gdg(Byte[][] a);  // RVA: 0x682C80
    static void weh(Il2CppString* a);  // RVA: 0x685D70
    void exp(Stream* a, DeviceLockLevel b);  // RVA: 0x682BF0
    void web(Action* a);  // RVA: 0x685B70
    void .ctor(dbs* a);  // RVA: 0x681A60
    void .ctor(Il2CppString* a, dbr* b);  // RVA: 0x681C60
    void wep(Stream* a, DeviceLockLevel b);  // RVA: 0x686FE0
    ObscuredFileReadResult mda();  // RVA: 0x684DD0
    void wec(Action* a);  // RVA: 0x685C10
    void icc(Stream* a, DeviceLockLevel b);  // RVA: 0x6832F0
    ObscuredFileReadResult lbz();  // RVA: 0x684160
    void exb();  // RVA: 0x682BC0
    void gts(Stream* a);  // RVA: 0x683180
    bool wef();  // RVA: 0x685D50
    ObscuredFileWriteResult wej(Byte[][] a);  // RVA: 0x6840C0
    void .ctor(Il2CppString* a);  // RVA: 0x681B00
    Il2CppString* env(Il2CppString* a);  // RVA: 0x682970
    ObscuredFileReadResult wek();  // RVA: 0x682930
    void mit();  // RVA: 0x682BC0
    void wea(Action* a);  // RVA: 0x685AD0
    void igu(Stream* a);  // RVA: 0x683380
    ObscuredFileReadResult brb();  // RVA: 0x681CC0
    ObscuredFileWriteResult iyp(Byte[][] a);  // RVA: 0x6840C0
    void qg(Stream* a, DeviceLockLevel b);  // RVA: 0x685A40
    dbr* wee();  // RVA: 0x639E40
    ObscuredFileWriteResult wen(Byte[][] a);  // RVA: 0x686A70
    void kpf();  // RVA: 0x682BC0
    void weo(Stream* a);  // RVA: 0x686F70
    Il2CppString* weq(Il2CppString* a);  // RVA: 0x687070
    ObscuredFileHeader isb(Stream* a);  // RVA: 0x684060
    void wei();  // RVA: 0x682BC0
    ObscuredFileReadResult wel();  // RVA: 0x685E00
    Il2CppString* weg();  // RVA: 0x685D60
    ObscuredFileReadResult dxw();  // RVA: 0x682930
    ObscuredFileHeader mna(Stream* a);  // RVA: 0x684060
    void kvm();  // RVA: 0x682BC0
    ObscuredFileReadResult cfh();  // RVA: 0x682930
    void jhh(Stream* a);  // RVA: 0x6840F0
    void gty(Stream* a, DeviceLockLevel b);  // RVA: 0x6831F0
    static void .cctor();  // RVA: 0x6819E0
};

// Namespace: <global>
class dbi
{
public:
    // Static fields
    // static int32_t bmqx;
    // static int32_t bmqy;
    // static Byte[][] bmqz;


    // Methods
    static void wer(Stream* a, Stream* b, dbq* c);  // RVA: 0x687580
    static uint32_t bgj(Stream* a);  // RVA: 0x6872F0
    static void wez(Stream* a, Stream* b, dbq* c);  // RVA: 0x687860
    static void wev(Stream* a, uint32_t b);  // RVA: 0x687760
    static uint32_t ell(Stream* a);  // RVA: 0x6873D0
    static uint32_t wey(Byte[][] a);  // RVA: 0x687840
    static void kxu(Stream* a, Stream* b, dbq* c);  // RVA: 0x687580
    static uint32_t giy(Stream* a);  // RVA: 0x6874F0
    static uint32_t weu(Stream* a);  // RVA: 0x6876D0
    static void lcc(Stream* a, Stream* b, dbq* c);  // RVA: 0x687580
    static uint32_t frf(Stream* a);  // RVA: 0x687460
    static void lyd(Stream* a, Stream* b, dbq* c);  // RVA: 0x687330
    static uint32_t wew(Stream* a);  // RVA: 0x687690
    static void csk(Stream* a, Stream* b, dbq* c);  // RVA: 0x687330
    static void fud(Stream* a, Stream* b, dbq* c);  // RVA: 0x687330
    static void wes(Stream* a, Stream* b, dbq* c);  // RVA: 0x687330
    static uint32_t wet(Stream* a);  // RVA: 0x687690
    static uint32_t dwa(Stream* a);  // RVA: 0x687340
    static void wex(Stream* a, Stream* b, dbq* c);  // RVA: 0x687580
    static uint32_t luy(Byte[][] a);  // RVA: 0x687630
    static uint32_t noq(Stream* a);  // RVA: 0x687650
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscuredFileHeader
    {
    public:
        // Static fields
        // static uint8_t HeaderByte1;
        // static uint8_t HeaderByte2;
        // static uint8_t HeaderByte3;
        // static uint8_t HeaderByte4;
        // static uint8_t HeaderVersion;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t <Byte1>k__BackingField; // 0x0010
        uint8_t <Byte2>k__BackingField; // 0x0011
        uint8_t <Byte3>k__BackingField; // 0x0012
        uint8_t <Byte4>k__BackingField; // 0x0013
        uint8_t <Version>k__BackingField; // 0x0014
        ObscurationMode <ObscurationMode>k__BackingField; // 0x0015
    
        // Methods
        uint8_t get_Byte1();  // RVA: 0x674C50
        void set_Byte1(uint8_t value);  // RVA: 0x674CF0
        uint8_t get_Byte2();  // RVA: 0x674CA0
        void set_Byte2(uint8_t value);  // RVA: 0x674D00
        uint8_t get_Byte3();  // RVA: 0x674CB0
        void set_Byte3(uint8_t value);  // RVA: 0x674D10
        uint8_t get_Byte4();  // RVA: 0x674CC0
        void set_Byte4(uint8_t value);  // RVA: 0x674D20
        uint8_t get_Version();  // RVA: 0x674CE0
        void set_Version(uint8_t value);  // RVA: 0x674D40
        ObscurationMode get_ObscurationMode();  // RVA: 0x674CD0
        void set_ObscurationMode(ObscurationMode value);  // RVA: 0x674D30
        bool IsValid();  // RVA: 0x674C70
        void wfa(Stream* a);  // RVA: 0x674D50
        static void wfb(Stream* a, ObscurationMode b);  // RVA: 0x674E10
    };

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscuredFileErrorCode
    {
    public:
        // Static fields
        // static ObscuredFileErrorCode NoError;
        // static ObscuredFileErrorCode FileNotFound;
        // static ObscuredFileErrorCode FileDamaged;
        // static ObscuredFileErrorCode DataIsNotLocked;
        // static ObscuredFileErrorCode NotInitialized;
        // static ObscuredFileErrorCode OtherException;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscuredFileError
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        ObscuredFileErrorCode <ErrorCode>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Exception* <Exception>k__BackingField; // 0x0018
    
        // Methods
        ObscuredFileErrorCode get_ErrorCode();  // RVA: 0x674C50
        Exception* get_Exception();  // RVA: 0x674C60
        void .ctor(ObscuredFileErrorCode code);  // RVA: 0x674C30
        void .ctor(Exception* exception);  // RVA: 0x674C20
        Il2CppString* ToString();  // RVA: 0x674B40
    };

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscuredFileReadResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Byte[][] <Data>k__BackingField; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        bool <DataIsNotGenuine>k__BackingField; // 0x0018
        bool <DataFromAnotherDevice>k__BackingField; // 0x0019
        uint8_t pad_001A[0x6]; // 0x001A
        ObscuredFileError <Error>k__BackingField; // 0x0020
        uint8_t pad_0021[0xF]; // 0x0021
        bool <IsValid>k__BackingField; // 0x0030
    
        // Methods
        bool wfc();  // RVA: 0x675230
        Byte[][] get_Data();  // RVA: 0x675200
        bool wfd();  // RVA: 0x675260
        bool get_DataIsNotGenuine();  // RVA: 0x6751F0
        bool get_DataFromAnotherDevice();  // RVA: 0x6751E0
        ObscuredFileError get_Error();  // RVA: 0x675210
        bool get_IsValid();  // RVA: 0x675220
        void .ctor(Byte[][] data, bool dataIsNotGenuine, bool dataFromAnotherDevice);  // RVA: 0x675190
        void .ctor(ObscuredFileError error);  // RVA: 0x675140
        static ObscuredFileReadResult wfe(Exception* a);  // RVA: 0x675270
        static ObscuredFileReadResult wff(ObscuredFileErrorCode a);  // RVA: 0x6752F0
        Il2CppString* ToString();  // RVA: 0x674ED0
    };

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscuredFileWriteResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        ObscuredFileError <Error>k__BackingField; // 0x0010
        uint8_t pad_0011[0xF]; // 0x0011
        bool <IsValid>k__BackingField; // 0x0020
    
        // Methods
        bool wfg();  // RVA: 0x675510
        ObscuredFileError get_Error();  // RVA: 0x6754F0
        bool get_IsValid();  // RVA: 0x675500
        void .ctor(ObscuredFileErrorCode result);  // RVA: 0x6754A0
        void .ctor(ObscuredFileError error);  // RVA: 0x675470
        static ObscuredFileWriteResult wfh(Exception* a);  // RVA: 0x675520
        static ObscuredFileWriteResult wfi(ObscuredFileErrorCode a);  // RVA: 0x675570
        Il2CppString* ToString();  // RVA: 0x675370
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbj
{
public:
    // Static fields
    // static Il2CppString* bmra;
    // static Il2CppString* bmrb;
    // static Action* bmrc;
    // static Action* bmrd;
    // static dbh* bmre;
    // static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> bmrf;
    // static Il2CppObject* bmrg;
    // static bool <bmrh>k__BackingField;
    // static bool <bmri>k__BackingField;
    // static bool <bmrj>k__BackingField;
    // static ObscuredFileReadResult <bmrk>k__BackingField;
    // static ObscuredFileWriteResult <bmrl>k__BackingField;
    // static dbm* <bmrm>k__BackingField;


    // Methods
    static ObscuredDouble llg(Il2CppString* a, ObscuredDouble b);  // RVA: 0x68D670
    static dbh* ixk(Il2CppString* a, dbr* b);  // RVA: 0x68BC40
    static ObscuredFileWriteResult wip();  // RVA: 0x6932A0
    static ObscuredDateTimeOffset dyq(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x689720
    static void wfp(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x68F710
    static void jey(Il2CppString* a, dbr* b, bool c);  // RVA: 0x68BEA0
    static ObscuredFloat wgo(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6907C0
    static ObscuredDateTimeOffset nfr(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x68E230
    static ObscuredByte wgh(Il2CppString* a, ObscuredByte b);  // RVA: 0x6901F0
    static ObscuredVector3Int new(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x68E130
    static void cla();  // RVA: 0x6884B0
    static void wib(Il2CppString* a, dbr* b, bool c);  // RVA: 0x692070
    static ObscuredVector2Int myj(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x68DF10
    static void etv();  // RVA: 0x68A040
    static void dgg(Il2CppString* a, ObscuredDouble b);  // RVA: 0x688C70
    static void kss(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68CC60
    static ObscuredVector2 wgz(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x690FE0
    static void wfk(Il2CppString* a, ObscuredByte b);  // RVA: 0x68F410
    static void mlm(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x68DC40
    static dbh* dhr(Il2CppString* a, dbr* b);  // RVA: 0x689150
    static void wgd(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x68FF40
    static ObscuredInt wgq(Il2CppString* a, ObscuredInt b);  // RVA: 0x690980
    static void cqh(dbr* a, bool b);  // RVA: 0x6888B0
    static ObscuredUInt eks(Il2CppString* a, ObscuredUInt b);  // RVA: 0x689910
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> kgq();  // RVA: 0x68C5B0
    static void fot(Il2CppString* a, ObscuredDouble b);  // RVA: 0x68A390
    static dbh* lja(Il2CppString* a, dbr* b);  // RVA: 0x68D550
    static ObscuredQuaternion eoj(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x689A50
    static void jhu(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68C0E0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wio();  // RVA: 0x692E60
    static void ibh(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x68B570
    static void wfq(Il2CppString* a, ObscuredDouble b);  // RVA: 0x68F7C0
    static ObscuredDateTimeOffset wgk(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6903F0
    static void wfw(Il2CppString* a, ObscuredSByte b);  // RVA: 0x68FB70
    static void wgb(Il2CppString* a, ObscuredUShort b);  // RVA: 0x68FE10
    static ObscuredGuid dee(Il2CppString* a, ObscuredGuid b);  // RVA: 0x688AC0
    static void wid();  // RVA: 0x692470
    static ObscuredShort wgu(Il2CppString* a, ObscuredShort b);  // RVA: 0x690C70
    static void wii();  // RVA: 0x692A70
    static void kto(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x68CD00
    static void deo(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x688BC0
    static bool Save();  // RVA: 0x687960
    static void gin(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x68ADE0
    static ObscuredQuaternion wgs(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x690AF0
    static ObscuredVector3 whb(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x691170
    static void whu(ObscuredFileWriteResult a);  // RVA: 0x691C30
    static void whd(Action* a);  // RVA: 0x691370
    static ObscuredShort lzl(Il2CppString* a, ObscuredShort b);  // RVA: 0x68D900
    static ObscuredDateTime wgj(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x690330
    static void whg(Action* a);  // RVA: 0x691650
    static dbr* whh();  // RVA: 0x691750
    static ObscuredULong wgx(Il2CppString* a, ObscuredULong b);  // RVA: 0x690E60
    static ObscuredString* wgv(Il2CppString* a, ObscuredString* b);  // RVA: 0x690D30
    static void nrv(Il2CppString* a, ObscuredUShort b);  // RVA: 0x68E670
    static ObscuredShort fpm(Il2CppString* a, ObscuredShort b);  // RVA: 0x68A430
    static ObscuredGuid gfp(Il2CppString* a, ObscuredGuid b);  // RVA: 0x68ACE0
    static void whn(bool a);  // RVA: 0x691960
    static dbh* whx();  // RVA: 0x691D70
    static void whp(bool a);  // RVA: 0x691A10
    static ObscuredDateTimeOffset mlo(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x68DCF0
    static void hey(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x68B090
    static ObscuredBigInteger wgm(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6905E0
    static ObscuredGuid wgp(Il2CppString* a, ObscuredGuid b);  // RVA: 0x690880
    static dbm* whv();  // RVA: 0x691CB0
    static ObscuredVector3Int whc(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x691270
    static void wfs(Il2CppString* a, ObscuredGuid b);  // RVA: 0x68F900
    static void mlx(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x68DDE0
    static bool whl();  // RVA: 0x6918B0
    static bool hmi(Il2CppString* a);  // RVA: 0x68B3B0
    static void ocx(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68E890
    static void wfu(Il2CppString* a, ObscuredLong b);  // RVA: 0x68FA30
    static ObscuredVector3 ivs(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x68BB40
    static void cev(Il2CppString* a, ObscuredUInt b);  // RVA: 0x688430
    static void wic();  // RVA: 0x6922B0
    static ObscuredVector2Int cpj(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6887F0
    static void kyh(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x68CF30
    static void wij(Il2CppString* a, a b);  // RVA: 0x564160
    static void jbn(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x68BDF0
    static void xe(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x693890
    static void izd(Il2CppString* a, ObscuredULong b);  // RVA: 0x68BD60
    static void dyj(Il2CppString* a, dbr* b, bool c);  // RVA: 0x6894E0
    static bool whi();  // RVA: 0x6917A0
    static ObscuredULong kku(Il2CppString* a, ObscuredULong b);  // RVA: 0x68C9F0
    static void mgz(Il2CppString* a, ObscuredUShort b);  // RVA: 0x68DBB0
    static void nqw(Il2CppString* a, ObscuredChar b);  // RVA: 0x68E5E0
    static ObscuredFloat kvq(Il2CppString* a, ObscuredFloat b);  // RVA: 0x68CDB0
    static bool fqx();  // RVA: 0x68A4F0
    static void wir(Il2CppString* a, d b);  // RVA: 0x564160
    static ObscuredByte msr(Il2CppString* a, ObscuredByte b);  // RVA: 0x68DE90
    static ObscuredFileWriteResult wit(Byte[][] a);  // RVA: 0x693670
    static ObscuredChar wgi(Il2CppString* a, ObscuredChar b);  // RVA: 0x690270
    static ObscuredUShort wgy(Il2CppString* a, ObscuredUShort b);  // RVA: 0x690F20
    static ObscuredLong hiz(Il2CppString* a, ObscuredLong b);  // RVA: 0x68B230
    static void oeh(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x68E930
    static void ijh(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x68B770
    static void wfl(Il2CppString* a, ObscuredChar b);  // RVA: 0x68F490
    static ObscuredUShort vl(Il2CppString* a, ObscuredUShort b);  // RVA: 0x68F2C0
    static void nkz(Il2CppString* a, ObscuredULong b);  // RVA: 0x68E3A0
    static ObscuredFileWriteResult wht();  // RVA: 0x691BC0
    static ObscuredLong obh(Il2CppString* a, ObscuredLong b);  // RVA: 0x68E7D0
    static dbh* wil(Il2CppString* a, dbr* b);  // RVA: 0x692C60
    static ObscuredFileReadResult whr();  // RVA: 0x691AC0
    static void qm(Il2CppString* a, ObscuredDouble b);  // RVA: 0x68F110
    static void iia(dbr* a, bool b);  // RVA: 0x68B620
    static void wim();  // RVA: 0x692D80
    static void whz(Il2CppString* a, bool b);  // RVA: 0x691F40
    static void fgk(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x68A2E0
    static ObscuredSByte wgt(Il2CppString* a, ObscuredSByte b);  // RVA: 0x690BF0
    static ObscuredLong hsk(Il2CppString* a, ObscuredLong b);  // RVA: 0x68B430
    static ObscuredInt fey(Il2CppString* a, ObscuredInt b);  // RVA: 0x68A230
    static ObscuredVector2Int wha(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6910B0
    static void wfz(Il2CppString* a, ObscuredUInt b);  // RVA: 0x68FD00
    static void lxn(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x68D850
    static void imy(Il2CppString* a, ObscuredShort b);  // RVA: 0x68B950
    static void wge(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x68FFD0
    static c wiq(Il2CppString* a, c b);  // RVA: 0x564160
    static void cvw(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x688A10
    static ObscuredLong wgr(Il2CppString* a, ObscuredLong b);  // RVA: 0x690A30
    static void kdf(Il2CppString* a, ObscuredULong b);  // RVA: 0x68C520
    static ObscuredByte lva(Il2CppString* a, ObscuredByte b);  // RVA: 0x68D7D0
    static bool whk();  // RVA: 0x691850
    static bool dlm(Il2CppString* a);  // RVA: 0x6893B0
    static bool who();  // RVA: 0x6919C0
    static System.Collections.Generic.ICollection<System.String> wig();  // RVA: 0x692900
    static void win();  // RVA: 0x692DF0
    static Il2CppString* whq();  // RVA: 0x691A70
    static ObscuredDecimal wgl(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6904E0
    static ObscuredFloat hjf(Il2CppString* a, ObscuredFloat b);  // RVA: 0x68B2F0
    static void fxj(dbr* a, bool b);  // RVA: 0x68AB40
    static void sx(Il2CppString* a, ObscuredUInt b);  // RVA: 0x68F240
    static void wfm(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x68F520
    static void wie(bool a);  // RVA: 0x6927A0
    static ObscuredVector3 ohi(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x68EBE0
    static void nlf(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x68E430
    static void kll(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x68CAB0
    static void wfn(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x68F5B0
    static void dug(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x689430
    static ObscuredVector2 oac(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68E700
    static ObscuredFileReadResult wis();  // RVA: 0x693490
    static void whe(Action* a);  // RVA: 0x691460
    static void liz();  // RVA: 0x68D360
    static void wih(Il2CppString* a);  // RVA: 0x692980
    static ObscuredDateTimeOffset fwk(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x68A950
    static void why(bool a);  // RVA: 0x691E80
    static ObscuredVector2 ncm(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68E060
    static void wga(Il2CppString* a, ObscuredULong b);  // RVA: 0x68FD80
    static void whj(bool a);  // RVA: 0x6917F0
    static System.Collections.Generic.ICollection<System.String> ik();  // RVA: 0x68B820
    static void mbh(Il2CppString* a);  // RVA: 0x68DAC0
    static void .cctor();  // RVA: 0x687D00
    static ObscuredUShort jua(Il2CppString* a, ObscuredUShort b);  // RVA: 0x68C300
    static void jxe(Il2CppString* a, ObscuredULong b);  // RVA: 0x68C3C0
    static void btf(Il2CppString* a, dbr* b, bool c);  // RVA: 0x6880B0
    static ObscuredGuid kqw(Il2CppString* a, ObscuredGuid b);  // RVA: 0x68CB60
    static void sc(Il2CppString* a, ObscuredLong b);  // RVA: 0x68F1B0
    static bool whm();  // RVA: 0x691910
    static void wgc(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68FEA0
    static void nac(Il2CppString* a, ObscuredLong b);  // RVA: 0x68DFD0
    static ObscuredDateTime diq(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6892F0
    static bool dim(Il2CppString* a);  // RVA: 0x689270
    static ObscuredBool fsq(Il2CppString* a, ObscuredBool b);  // RVA: 0x68A890
    static void wfr(Il2CppString* a, ObscuredFloat b);  // RVA: 0x68F860
    static ObscuredQuaternion npz(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x68E4E0
    static void qk(Il2CppString* a, dbr* b, bool c);  // RVA: 0x68EED0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> dgk();  // RVA: 0x688D10
    static ObscuredUInt etm(Il2CppString* a, ObscuredUInt b);  // RVA: 0x689B50
    static ObscuredBool wgg(Il2CppString* a, ObscuredBool b);  // RVA: 0x690130
    static ObscuredBool cof(Il2CppString* a, ObscuredBool b);  // RVA: 0x688730
    static ObscuredULong iqq(Il2CppString* a, ObscuredULong b);  // RVA: 0x68BA80
    static void wfo(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x68F660
    static ObscuredUShort bri(Il2CppString* a, ObscuredUShort b);  // RVA: 0x687F10
    static ObscuredQuaternion gom(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x68AE90
    static void inw(Il2CppString* a, ObscuredDouble b);  // RVA: 0x68B9E0
    static void whf(Action* a);  // RVA: 0x691550
    static ObscuredBool kyc(Il2CppString* a, ObscuredBool b);  // RVA: 0x68CE70
    static ObscuredFileWriteResult oem(Byte[][] a);  // RVA: 0x68E9C0
    static bool wif(Il2CppString* a);  // RVA: 0x692880
    static void ima(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x68B8A0
    static void iig(Il2CppString* a, ObscuredGuid b);  // RVA: 0x68B6C0
    static ObscuredVector2 kce(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68C450
    static System.Collections.Generic.ICollection<System.String> lnv();  // RVA: 0x68D750
    static ObscuredVector3 fws(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x68AA40
    static void hhf(Il2CppString* a);  // RVA: 0x68B140
    static void emo(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6899C0
    static ObscuredVector3Int mbb(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x68D9C0
    static ObscuredUShort cne(Il2CppString* a, ObscuredUShort b);  // RVA: 0x688670
    static void wfj(Il2CppString* a, ObscuredBool b);  // RVA: 0x68F380
    static void wgf(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x690080
    static ObscuredDouble bsv(Il2CppString* a, ObscuredDouble b);  // RVA: 0x687FD0
    static bool lit();  // RVA: 0x68CFC0
    static void wia(dbr* a, bool b);  // RVA: 0x691FD0
    static ObscuredGuid ejp(Il2CppString* a, ObscuredGuid b);  // RVA: 0x689810
    static ObscuredDouble wgn(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6906E0
    static bool htw(Il2CppString* a);  // RVA: 0x68B4F0
    static void bwl(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6882F0
    static void bfa(Il2CppString* a, ObscuredGuid b);  // RVA: 0x687D80
    static void jjl(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x68C180
    static ObscuredFloat bzt(Il2CppString* a, ObscuredFloat b);  // RVA: 0x688370
    static ObscuredUInt wgw(Il2CppString* a, ObscuredUInt b);  // RVA: 0x690DB0
    static ObscuredBool cqv(Il2CppString* a, ObscuredBool b);  // RVA: 0x688950
    static void jmx(Il2CppString* a);  // RVA: 0x68C210
    static ObscuredDouble bhc(Il2CppString* a, ObscuredDouble b);  // RVA: 0x687E30
    static void whw(dbm* a);  // RVA: 0x691D00
    static ObscuredByte ngf(Il2CppString* a, ObscuredByte b);  // RVA: 0x68E320
    static void wft(Il2CppString* a, ObscuredInt b);  // RVA: 0x68F9B0
    static ObscuredVector3 hbe(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x68AF90
    static b wik(Il2CppString* a, b b);  // RVA: 0x564160
    static void ots();  // RVA: 0x68ECE0
    static void wfy(Il2CppString* a, ObscuredString* b);  // RVA: 0x68FC80
    static void wfx(Il2CppString* a, ObscuredShort b);  // RVA: 0x68FBF0
    static void whs(ObscuredFileReadResult a);  // RVA: 0x691B30
    static ObscuredVector3Int fxo(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x68ABE0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> ett();  // RVA: 0x689C00
    static void wfv(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x68FAC0
};

// Namespace: <global>
class dbk
{
public:
    // Static fields
    // static bool bmrn;


    // Methods
    static void mrx(bool a);  // RVA: 0x693E80
    static void wiz();  // RVA: 0x694310
    static void wiy(bool a);  // RVA: 0x694220
    static void fmn(bool a);  // RVA: 0x693BB0
    static void ie(bool a);  // RVA: 0x693CA0
    static void wiu();  // RVA: 0x693F70
    static void dqy();  // RVA: 0x693940
    static void wix(bool a);  // RVA: 0x694210
    static void mqm(bool a);  // RVA: 0x693D90
    static void wiw(bool a);  // RVA: 0x694200
    static bool wiv();  // RVA: 0x6941E0
};

// Namespace: <global>
class dbl
{
public:

    // Methods
    static dbo* jwn(dbm* a);  // RVA: 0x694470
    static b wjb(ObscuredPrefsData a, dbm* b);  // RVA: 0x564160
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> fhq(Byte[][] a, dbm* b);  // RVA: 0x694510
    static ObscuredPrefsData wja(a a, dbm* b);  // RVA: 0x564160
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wjd(Byte[][] a, dbm* b);  // RVA: 0x6946D0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> hub(Byte[][] a, dbm* b);  // RVA: 0x6945F0
    static dbo* cpc(dbm* a);  // RVA: 0x694470
    static dbo* wje(dbm* a);  // RVA: 0x694470
    static dbo* ecm(dbm* a);  // RVA: 0x694470
    static Byte[][] hge(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbm* b);  // RVA: 0x694580
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> dhx(Byte[][] a, dbm* b);  // RVA: 0x6944A0
    static Byte[][] wjc(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbm* b);  // RVA: 0x694660
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    struct ACTkSerializationKind
    {
    public:
        // Static fields
        // static ACTkSerializationKind Binary;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbm
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ACTkSerializationKind <bmro>k__BackingField; // 0x0010

    // Methods
    ACTkSerializationKind wjf();  // RVA: 0x674720
    void .ctor(ACTkSerializationKind a);  // RVA: 0x681030
};

// Namespace: <global>
class dbn
{
public:
    // Static fields
    // static uint8_t bmrp;
    // static dbn* bmrq;


    // Methods
    void wjl(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x694740
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> jov(BinaryReader* a);  // RVA: 0x694A90
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wjk(Byte[][] a);  // RVA: 0x6950B0
    static dbo* orq();  // RVA: 0x694BA0
    void .ctor();  // RVA: 0x628380
    static dbo* wjg();  // RVA: 0x694C30
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> hgs(BinaryReader* a);  // RVA: 0x6948F0
    void jiq(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x694740
    static dbo* imd();  // RVA: 0x694A00
    b wji(ObscuredPrefsData a);  // RVA: 0x564160
    void cdv(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x694740
    Byte[][] wjj(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x694CC0
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> fmm(BinaryReader* a);  // RVA: 0x6947E0
    ObscuredPrefsData wjh(a a);  // RVA: 0x564160
    void icl(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x694740
    void hzn(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x694740
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wjm(BinaryReader* a);  // RVA: 0x6954C0
};

// Namespace: <global>
class dbo
{
public:

    // Methods
    ObscuredPrefsData wjh(a a);  // RVA: 0x564160
    b wji(ObscuredPrefsData a);  // RVA: 0x564160
    Byte[][] wjj(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x419890
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wjk(Byte[][] a);  // RVA: 0x419890
};

// Namespace: <global>
class dbp
{
public:
    // Static fields
    // static dbp* bmrr;


    // Methods
    static dbo* kjj();  // RVA: 0x695660
    static dbo* wjn();  // RVA: 0x695770
    void .ctor();  // RVA: 0x628380
    Byte[][] wjj(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x6956F0
    b wji(ObscuredPrefsData a);  // RVA: 0x564160
    static dbo* ire();  // RVA: 0x6955D0
    ObscuredPrefsData wjh(a a);  // RVA: 0x564160
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wjk(Byte[][] a);  // RVA: 0x695730
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscurationMode
    {
    public:
        // Static fields
        // static ObscurationMode Plain;
        // static ObscurationMode Encrypted;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbq
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ObscurationMode <bmrs>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Byte[][] <bmrt>k__BackingField; // 0x0018

    // Methods
    ObscurationMode wjo();  // RVA: 0x675500
    Byte[][] wjp();  // RVA: 0x695920
    void .ctor(Il2CppString* a);  // RVA: 0x695800
    void .ctor(Byte[][] a);  // RVA: 0x6958D0
};

// Namespace: <global>
class dbr
{
public:

    // Methods
    ObscuredFileLocation wjq();  // RVA: 0x4216A0
    dbq* wjr();  // RVA: 0x41C6A0
    dbg* wjs();  // RVA: 0x41C6A0
    bool wjt();  // RVA: 0x4216A0
    bool wju();  // RVA: 0x4216A0
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    struct ObscuredFileLocation
    {
    public:
        // Static fields
        // static ObscuredFileLocation PersistentData;
        // static ObscuredFileLocation Custom;
    
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t value__; // 0x0010
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbs
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ObscuredFileLocation <bmru>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    dbq* <bmrv>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbg* <bmrw>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool <bmrx>k__BackingField; // 0x0028
    bool <bmry>k__BackingField; // 0x0029

    // Methods
    ObscuredFileLocation wjq();  // RVA: 0x675500
    void wjv(ObscuredFileLocation a);  // RVA: 0x6819B0
    dbq* wjr();  // RVA: 0x695920
    void wjw(dbq* a);  // RVA: 0x681060
    dbg* wjs();  // RVA: 0x639E40
    void wjx(dbg* a);  // RVA: 0x639E50
    bool wjt();  // RVA: 0x639E60
    void wjy(bool a);  // RVA: 0x639E70
    bool wju();  // RVA: 0x695C10
    void wjz(bool a);  // RVA: 0x695C20
    void .ctor();  // RVA: 0x695930
    void .ctor(ObscuredFileLocation a);  // RVA: 0x695B30
    void .ctor(dbg* a);  // RVA: 0x695A80
    void .ctor(dbq* a, dbg* b, ObscuredFileLocation c, bool d, bool e);  // RVA: 0x695A00
};

// Namespace: <global>
class dbt
{
public:
    // Static fields
    // static Char[][] bmrz;
    // static Il2CppString* bmsa;
    // static Il2CppString* bmsb;
    // static Il2CppString* bmsc;
    // static uint8_t bmsd;
    // static bool bmse;
    // static bool bmsf;
    // static Il2CppString* bmsg;
    // static Il2CppString* bmsh;
    // static dbf* bmsi;
    // static Action* bmsj;
    // static Action* bmsk;
    // static Action* bmsl;
    // static Action* bmsm;
    // static bool bmsn;
    // static dbg* <bmso>k__BackingField;


    // Methods
    static void wnu(Il2CppString* a);  // RVA: 0x6A31E0
    static void wko(Il2CppString* a, uint64_t b);  // RVA: 0x69E470
    static ObscuredUInt kdx(Il2CppString* a, ObscuredUInt b);  // RVA: 0x69A910
    static ObscuredVector3 kyd(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x69B500
    static Byte[][] oef(Il2CppString* a, Il2CppString* b);  // RVA: 0x69CCF0
    static ObscuredVector2 nbb(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x69C110
    static void jyv();  // RVA: 0x69A6D0
    static void wlw(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x69FA20
    static void wki(Il2CppString* a, double b);  // RVA: 0x69E190
    static int32_t wkb(Il2CppString* a, int32_t b);  // RVA: 0x69DE80
    static void iwl(Il2CppString* a, float b);  // RVA: 0x699F80
    static float byj(Il2CppString* a, float b);  // RVA: 0x696860
    static ObscuredFloat cnm(Il2CppString* a, ObscuredFloat b);  // RVA: 0x696A50
    static ObscuredBigInteger jgb(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x69A1D0
    static Vector2 wkw(Il2CppString* a);  // RVA: 0x69E9E0
    static void wnz(Action* a);  // RVA: 0x6A3730
    static ObscuredFloat cpl(Il2CppString* a, ObscuredFloat b);  // RVA: 0x696B30
    static void itr(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x699ED0
    static bool woh();  // RVA: 0x6A3DB0
    static Il2CppString* hnk(Il2CppString* a, Il2CppString* b);  // RVA: 0x699090
    static void wnr(Il2CppString* a);  // RVA: 0x6A3110
    static Il2CppString* dpw(Il2CppString* a, Il2CppString* b);  // RVA: 0x697480
    static ObscuredLong mex(Il2CppString* a, ObscuredLong b);  // RVA: 0x69BC60
    static ObscuredVector2 nkm(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x69C480
    static void wom(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A4010
    static void wks(Il2CppString* a, Byte[][] b);  // RVA: 0x69E630
    static void ltg(Il2CppString* a, ObscuredULong b);  // RVA: 0x69BA40
    static void wlb(Il2CppString* a, Quaternion b);  // RVA: 0x69ED70
    static void mhw(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69BDD0
    static Quaternion wld(Il2CppString* a, Quaternion b);  // RVA: 0x69EEE0
    static Vector2 wkx(Il2CppString* a, Vector2 b);  // RVA: 0x69EAC0
    static void wkk(Il2CppString* a, Decimal b);  // RVA: 0x69E270
    static void mh(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69BD20
    static void lmn();  // RVA: 0x69B6E0
    static ObscuredGuid wmq(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6A07E0
    static void wmb(Il2CppString* a, ObscuredULong b);  // RVA: 0x69FCE0
    static void wlk(Il2CppString* a, ObscuredBool b);  // RVA: 0x69F2E0
    static Byte[][] wnq(Il2CppString* a);  // RVA: 0x6A2F80
    static void wlm(Il2CppString* a, ObscuredChar b);  // RVA: 0x69F3F0
    static e wou(Il2CppString* a, e b);  // RVA: 0x564160
    static Char[][] hur(Il2CppString* a, Il2CppString* b);  // RVA: 0x699310
    static void clt(Il2CppString* a, Il2CppString* b);  // RVA: 0x6969F0
    static uint64_t wkp(Il2CppString* a, uint64_t b);  // RVA: 0x69E4E0
    static void wlr(Il2CppString* a, ObscuredDouble b);  // RVA: 0x69F720
    static void wls(Il2CppString* a, ObscuredFloat b);  // RVA: 0x69F7C0
    static Il2CppString* wnh(Il2CppString* a, a b);  // RVA: 0x564160
    static void fpc(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6986C0
    static void fkc(Il2CppString* a, Il2CppString* b);  // RVA: 0x6985A0
    static dbg* woe();  // RVA: 0x6A3C30
    static void bnx(Il2CppString* a, Il2CppString* b);  // RVA: 0x696500
    static Byte[][] fzt(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x698830
    static ObscuredDecimal oic(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69D3B0
    static void hll(Il2CppString* a, ObscuredULong b);  // RVA: 0x699000
    static void ihy(Il2CppString* a, ObscuredGuid b);  // RVA: 0x699850
    static ObscuredDateTimeOffset wml(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6A0350
    static void dwl(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6976B0
    static void wme(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x69FEA0
    static bool kn(Il2CppString* a, Il2CppString* b);  // RVA: 0x69AC90
    static void wmg(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x69FFE0
    static void hab(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x698F50
    static ObscuredByte wmi(Il2CppString* a, ObscuredByte b);  // RVA: 0x6A0150
    static void wlo(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x69F510
    static void Save();  // RVA: 0x695C30
    static bool woo(Il2CppString* a);  // RVA: 0x6A4130
    static ObscuredByte irg(Il2CppString* a, ObscuredByte b);  // RVA: 0x699C60
    static float bdj(Il2CppString* a, float b);  // RVA: 0x695DC0
    static void wly(Il2CppString* a, ObscuredShort b);  // RVA: 0x69FB50
    static ObscuredVector2Int bya(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6967A0
    static Byte[][] enf(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x697BC0
    static ObscuredQuaternion wmt(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6A0A50
    static void wlp(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69F5C0
    static dbf* wnv();  // RVA: 0x6A3240
    static void wlz(Il2CppString* a, ObscuredString* b);  // RVA: 0x69FBE0
    static void ogg(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x69D290
    static ObscuredString* wmw(Il2CppString* a, ObscuredString* b);  // RVA: 0x6A0C90
    static Il2CppString* nms(Il2CppString* a, Il2CppString* b);  // RVA: 0x69C5D0
    static void ohh(Il2CppString* a, ObscuredShort b);  // RVA: 0x69D320
    static ObscuredUShort wmz(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6A0E80
    static void woz();  // RVA: 0x6A4540
    static ObscuredSByte mwr(Il2CppString* a, ObscuredSByte b);  // RVA: 0x69C090
    static Byte[][] ixa(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x699FF0
    static void jyc(Il2CppString* a, ObscuredSByte b);  // RVA: 0x69A650
    static Char[][] wne(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A12D0
    static Il2CppString* wnf(Il2CppString* a);  // RVA: 0x6A1550
    static void wlu(Il2CppString* a, ObscuredInt b);  // RVA: 0x69F910
    static Il2CppString* nvx(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x69C8B0
    static void eeu();  // RVA: 0x697850
    static bool won(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x6A4070
    static void ege(Il2CppString* a, Il2CppString* b);  // RVA: 0x697960
    static DeviceLockLevel wof();  // RVA: 0x6A3C80
    static void wkm(Il2CppString* a, int64_t b);  // RVA: 0x69E390
    static int32_t kcx(Il2CppString* a, int32_t b);  // RVA: 0x69A8A0
    static int64_t wkn(Il2CppString* a, int64_t b);  // RVA: 0x69E400
    static float wkf(Il2CppString* a, float b);  // RVA: 0x69E040
    static void bwd();  // RVA: 0x696680
    static Il2CppString* wox(Il2CppString* a, Il2CppString* b);  // RVA: 0x696B10
    static void wkv(Il2CppString* a, Vector2 b);  // RVA: 0x69E970
    static ObscuredBigInteger ioh(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x699AA0
    static Il2CppString* wkd(Il2CppString* a, Il2CppString* b);  // RVA: 0x69DF60
    static void wln(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x69F480
    static ObscuredDecimal ktw(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x69B340
    static void woi(bool a);  // RVA: 0x6A3E40
    static ObscuredInt wmr(Il2CppString* a, ObscuredInt b);  // RVA: 0x6A08E0
    static Color32 wlg(Il2CppString* a, Color32 b);  // RVA: 0x69F090
    static ObscuredDouble jxx(Il2CppString* a, ObscuredDouble b);  // RVA: 0x69A570
    static void wob(Action* a);  // RVA: 0x6A3930
    static Byte[][] wku(uint8_t a, int32_t b);  // RVA: 0x69E8F0
    static void wod(Action* a);  // RVA: 0x6A3B30
    static ObscuredLong czg(Il2CppString* a, ObscuredLong b);  // RVA: 0x696BF0
    static Rect wli(Il2CppString* a);  // RVA: 0x69F180
    static void wma(Il2CppString* a, ObscuredUInt b);  // RVA: 0x69FC60
    static b wni(Il2CppString* a, Il2CppString* b, b c, Il2CppString* d);  // RVA: 0x564160
    static Byte[][] wnp(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x6A2E90
    static void wmc(Il2CppString* a, ObscuredUShort b);  // RVA: 0x69FD70
    static void izq(Il2CppString* a, ObscuredString* b);  // RVA: 0x69A0E0
    static Byte[][] ouc(Il2CppString* a, Il2CppString* b);  // RVA: 0x69D640
    static void woc(Action* a);  // RVA: 0x6A3A30
    static void jzv(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x69A760
    static ObscuredVector3Int wnd(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6A11D0
    static ObscuredUInt tv(Il2CppString* a, ObscuredUInt b);  // RVA: 0x69DD60
    static void klo(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x69AAA0
    static void wll(Il2CppString* a, ObscuredByte b);  // RVA: 0x69F370
    static Color32 wlf(Il2CppString* a);  // RVA: 0x69EFF0
    static ObscuredSByte gyf(Il2CppString* a, ObscuredSByte b);  // RVA: 0x698ED0
    static void kio(Il2CppString* a, Il2CppString* b);  // RVA: 0x69AA30
    static ObscuredDecimal wmm(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6A0440
    static int32_t cdi(Il2CppString* a, int32_t b);  // RVA: 0x696980
    static void woy();  // RVA: 0x6A4420
    static void wlq(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x69F670
    static ObscuredFloat kml(Il2CppString* a, ObscuredFloat b);  // RVA: 0x69ABD0
    static ObscuredULong nnz(Il2CppString* a, ObscuredULong b);  // RVA: 0x69C640
    static Il2CppString* wnn(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A2210
    static void wov(Il2CppString* a, Il2CppString* b);  // RVA: 0x696500
    static void jrd(Il2CppString* a, ObscuredByte b);  // RVA: 0x69A480
    static void nsu(Il2CppString* a, ObscuredULong b);  // RVA: 0x69C700
    static float nfd(Il2CppString* a, float b);  // RVA: 0x69C1E0
    static void wlt(Il2CppString* a, ObscuredGuid b);  // RVA: 0x69F860
    static void kys(Il2CppString* a, Il2CppString* b);  // RVA: 0x69B600
    static void ief(Il2CppString* a, Il2CppString* b);  // RVA: 0x6997E0
    static bool dfd(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x697180
    static ObscuredGuid hqe(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6991A0
    static void ctk(Il2CppString* a, Il2CppString* b);  // RVA: 0x696500
    static ObscuredBigInteger wmn(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x6A0540
    static ObscuredUInt wmx(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6A0D10
    static void krb(Il2CppString* a, float b);  // RVA: 0x69B140
    static bool wow(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A43C0
    static ObscuredVector2Int wnb(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6A1010
    static ObscuredDouble wmo(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6A0640
    static ObscuredShort wmv(Il2CppString* a, ObscuredShort b);  // RVA: 0x6A0BD0
    static void wnx(Action* a);  // RVA: 0x6A3530
    static ObscuredDateTimeOffset lof(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x69B830
    static void khu(Il2CppString* a, float b);  // RVA: 0x69A9C0
    static void wmd(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x69FE00
    static Quaternion wlc(Il2CppString* a);  // RVA: 0x69EDF0
    static Il2CppString* wnk(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x6A1750
    static ObscuredVector2 lzm(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x69BAD0
    static bool mew(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x69BBA0
    static Byte[][] iss(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x699DB0
    static int32_t lbz(Il2CppString* a, int32_t b);  // RVA: 0x69B670
    static void efe(Il2CppString* a, ObscuredString* b);  // RVA: 0x6978E0
    static ObscuredDateTime kpz(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x69B080
    static Il2CppString* wnt();  // RVA: 0x6A31D0
    static void mrl(Il2CppString* a, ObscuredLong b);  // RVA: 0x69C000
    static void yu(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6A4710
    static void wkq(Il2CppString* a, bool b);  // RVA: 0x69E550
    static Byte[][] ece(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x697760
    static float hqt(Il2CppString* a, float b);  // RVA: 0x6992A0
    static Il2CppString* ja(Il2CppString* a, Il2CppString* b);  // RVA: 0x69A160
    static Rect wlj(Il2CppString* a, Rect b);  // RVA: 0x69F240
    static void emx(Il2CppString* a, ObscuredGuid b);  // RVA: 0x697B10
    static ObscuredVector2 wna(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6A0F40
    static int32_t jxc(Il2CppString* a, int32_t b);  // RVA: 0x69A500
    static void klz(Il2CppString* a, ObscuredSByte b);  // RVA: 0x69AB50
    static void gjh();  // RVA: 0x698A80
    static Byte[][] oro(Il2CppString* a);  // RVA: 0x69D4B0
    static void wky(Il2CppString* a, Vector3 b);  // RVA: 0x69EB30
    static void gnv(Il2CppString* a, float b);  // RVA: 0x698BB0
    static ObscuredQuaternion dnj(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x697380
    static ObscuredULong wmy(Il2CppString* a, ObscuredULong b);  // RVA: 0x6A0DC0
    static void wka(Il2CppString* a, int32_t b);  // RVA: 0x69DE10
    static void wlh(Il2CppString* a, Rect b);  // RVA: 0x69F100
    static void hoz(Il2CppString* a, ObscuredDouble b);  // RVA: 0x699100
    static ObscuredBool dut(Il2CppString* a, ObscuredBool b);  // RVA: 0x6974F0
    static void nup(Il2CppString* a, ObscuredString* b);  // RVA: 0x69C830
    static void wlv(Il2CppString* a, ObscuredLong b);  // RVA: 0x69F990
    static void nhr(Il2CppString* a, ObscuredShort b);  // RVA: 0x69C250
    static void nks(Il2CppString* a, ObscuredUInt b);  // RVA: 0x69C550
    static ObscuredShort jke(Il2CppString* a, ObscuredShort b);  // RVA: 0x69A330
    static void eru(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x698310
    static Byte[][] ktg(Il2CppString* a);  // RVA: 0x69B1B0
    static ObscuredBool wmh(Il2CppString* a, ObscuredBool b);  // RVA: 0x6A0090
    static StorageDataType eic(Il2CppString* a);  // RVA: 0x697A70
    static Byte[][] wkt(Il2CppString* a, uint8_t b, int32_t c);  // RVA: 0x69E6A0
    static StorageDataType wng(Il2CppString* a);  // RVA: 0x6A1610
    static void jiy(Il2CppString* a, Il2CppString* b);  // RVA: 0x69A2D0
    static ObscuredByte bvx(Il2CppString* a, ObscuredByte b);  // RVA: 0x696600
    static ObscuredByte isy(Il2CppString* a, ObscuredByte b);  // RVA: 0x699E50
    static ObscuredDateTime fmz(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x698600
    static void .cctor();  // RVA: 0x695CD0
    static ObscuredDateTimeOffset niy(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x69C390
    static ObscuredDateTime fst(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x698770
    static Il2CppString* daz(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x696D50
    static void wnw(Action* a);  // RVA: 0x6A3430
    static ObscuredSByte wmu(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6A0B50
    static void ccg(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x6968D0
    static Byte[][] dho(uint8_t a, int32_t b);  // RVA: 0x697240
    static ObscuredBigInteger hvk(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x699590
    static ObscuredGuid qo(Il2CppString* a, ObscuredGuid b);  // RVA: 0x69DBE0
    static void woa(Action* a);  // RVA: 0x6A3830
    static void wmf(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x69FF30
    static double wkj(Il2CppString* a, double b);  // RVA: 0x69E200
    static bool wno(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A2390
    static ObscuredGuid epx(Il2CppString* a, ObscuredGuid b);  // RVA: 0x697C60
    static void woq();  // RVA: 0x6A4270
    static ObscuredGuid duu(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6975B0
    static ObscuredULong fil(Il2CppString* a, ObscuredULong b);  // RVA: 0x6984E0
    static ObscuredLong dkc(Il2CppString* a, ObscuredLong b);  // RVA: 0x6972C0
    static ObscuredBool iot(Il2CppString* a, ObscuredBool b);  // RVA: 0x699BA0
    static void ez(Il2CppString* a, ObscuredLong b);  // RVA: 0x6983A0
    static ObscuredQuaternion bio(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x695E30
    static Byte[][] ry(uint8_t a, int32_t b);  // RVA: 0x69DCE0
    static ObscuredFloat wmp(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6A0720
    static ObscuredUInt ehw(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6979C0
    static void wle(Il2CppString* a, Color32 b);  // RVA: 0x69EF80
    static void brq(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x696550
    static ObscuredChar wmj(Il2CppString* a, ObscuredChar b);  // RVA: 0x6A01D0
    static void wos(Il2CppString* a, c b);  // RVA: 0x564160
    static void ezs(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x698430
    static d wot(Il2CppString* a, d b);  // RVA: 0x564160
    static bool wkr(Il2CppString* a, bool b);  // RVA: 0x69E5C0
    static void wkc(Il2CppString* a, Il2CppString* b);  // RVA: 0x69DEF0
    static ObscuredUShort mqy(Il2CppString* a, ObscuredUShort b);  // RVA: 0x69BF40
    static ObscuredUShort mov(Il2CppString* a, ObscuredUShort b);  // RVA: 0x69BE80
    static void bnq(Il2CppString* a, ObscuredString* b);  // RVA: 0x696480
    static void nuj(Il2CppString* a, ObscuredFloat b);  // RVA: 0x69C790
    static void wke(Il2CppString* a, float b);  // RVA: 0x69DFD0
    static void wkg(Il2CppString* a, uint32_t b);  // RVA: 0x69E0B0
    static Byte[][] wnj(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x6A16B0
    static void wok(bool a);  // RVA: 0x6A3F70
    static StorageDataType hxo(Il2CppString* a);  // RVA: 0x699690
    static void xd(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6A4660
    static ObscuredFloat kxa(Il2CppString* a, ObscuredFloat b);  // RVA: 0x69B440
    static void kne(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x69AFE0
    static ObscuredVector3 wnc(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6A10D0
    static Decimal wkl(Il2CppString* a, Decimal defaultValue);  // RVA: 0x69E2F0
    static void wlx(Il2CppString* a, ObscuredSByte b);  // RVA: 0x69FAD0
    static Vector3 wkz(Il2CppString* a);  // RVA: 0x69EBB0
    static Byte[][] eri(Il2CppString* a, Il2CppString* b);  // RVA: 0x697D60
    static Vector3 wla(Il2CppString* a, Vector3 b);  // RVA: 0x69ECC0
    static ObscuredDateTime wmk(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x6A0290
    static ObscuredQuaternion ggd(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x698980
    static uint32_t wkh(Il2CppString* a, uint32_t b);  // RVA: 0x69E120
    static Byte[][] gwc(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x698CC0
    static Byte[][] icg(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x699710
    static void kbl(Il2CppString* a, ObscuredULong b);  // RVA: 0x69A810
    static void gbp(Il2CppString* a, ObscuredUInt b);  // RVA: 0x698900
    static void wny(Action* a);  // RVA: 0x6A3630
    static Byte[][] wnm(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x6A2140
    static Byte[][] ikw(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x699900
    static StorageDataType czt(Il2CppString* a);  // RVA: 0x696CB0
    static void wog(DeviceLockLevel a);  // RVA: 0x6A3D10
    static void fku(Il2CppString* a, Il2CppString* b);  // RVA: 0x696500
    static void wop(Il2CppString* a);  // RVA: 0x6A41F0
    static Byte[][] wnl(Il2CppString* a, Il2CppString* b);  // RVA: 0x6A1B70
    static ObscuredLong wms(Il2CppString* a, ObscuredLong b);  // RVA: 0x6A0990
    static void wol();  // RVA: 0x681590
    static Byte[][] bmf(Il2CppString* a, Il2CppString* b);  // RVA: 0x695F30
    static void wor();  // RVA: 0x6A4330
    static void jms();  // RVA: 0x69A3F0
    static Byte[][] is(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x699CE0
    static void ogm(Il2CppString* a, Il2CppString* b);  // RVA: 0x696500
    static Il2CppString* wns();  // RVA: 0x6A3180
    static void gtp();  // RVA: 0x698C20
    static void nij(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x69C2E0
    static ObscuredUInt lmq(Il2CppString* a, ObscuredUInt b);  // RVA: 0x69B780
    static StorageDataType glf(Il2CppString* a);  // RVA: 0x698B10
    static Il2CppString* cno(Il2CppString* a, Il2CppString* b);  // RVA: 0x696B10
    static void imm(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6999F0
    static bool woj();  // RVA: 0x6A3EE0
    static void gws();  // RVA: 0x698DB0
    static void lqu();  // RVA: 0x69B920
};

// Namespace: <global>
class dbu
{
public:

    // Methods
    int32_t wpa();  // RVA: 0x4206D0
    void wpb();  // RVA: 0x42E240
};

// Namespace: <global>
class dbv
{
public:
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredBigInteger
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        SerializableBigInteger hiddenValue; // 0x0018
        uint8_t pad_0019[0xF]; // 0x0019
        uint32_t currentCryptoKey; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        BigInteger fakeValue; // 0x0030
    
        // Methods
        static ObscuredBigInteger op_Implicit(BigInteger value);  // RVA: 0x6A64F0
        static ObscuredBigInteger op_Implicit(uint8_t value);  // RVA: 0x6A68C0
        static ObscuredBigInteger op_Implicit(int8_t value);  // RVA: 0x6A66E0
        static ObscuredBigInteger op_Implicit(int16_t value);  // RVA: 0x6A6460
        static ObscuredBigInteger op_Implicit(uint16_t value);  // RVA: 0x6A6950
        static ObscuredBigInteger op_Implicit(int32_t value);  // RVA: 0x6A6340
        static ObscuredBigInteger op_Implicit(uint32_t value);  // RVA: 0x6A63D0
        static ObscuredBigInteger op_Implicit(int64_t value);  // RVA: 0x6A67A0
        static ObscuredBigInteger op_Implicit(uint64_t value);  // RVA: 0x6A6650
        static ObscuredBigInteger op_Implicit(float value);  // RVA: 0x6A6530
        static ObscuredBigInteger op_Implicit(double value);  // RVA: 0x6A65C0
        static ObscuredBigInteger op_Implicit(Decimal value);  // RVA: 0x6A6830
        static BigInteger op_Implicit(ObscuredBigInteger value);  // RVA: 0x6A6770
        static uint8_t wpc(ObscuredBigInteger a);  // RVA: 0x6A6A40
        static int8_t wpd(ObscuredBigInteger a);  // RVA: 0x6A6AB0
        static int16_t wpe(ObscuredBigInteger a);  // RVA: 0x6A6B20
        static uint16_t wpf(ObscuredBigInteger a);  // RVA: 0x6A6B90
        static int32_t wpg(ObscuredBigInteger a);  // RVA: 0x6A6C00
        static uint32_t wph(ObscuredBigInteger a);  // RVA: 0x6A6C70
        static int64_t wpi(ObscuredBigInteger a);  // RVA: 0x6A6CE0
        static uint64_t wpj(ObscuredBigInteger a);  // RVA: 0x6A6D50
        static float wpk(ObscuredBigInteger a);  // RVA: 0x6A6DC0
        static double wpl(ObscuredBigInteger a);  // RVA: 0x6A6E30
        static Decimal wpm(ObscuredBigInteger a);  // RVA: 0x6A6EA0
        static ObscuredBigInteger wpn(ObscuredBigInteger a, int32_t b);  // RVA: 0x6A6F30
        static ObscuredBigInteger wpo(ObscuredBigInteger a, int32_t b);  // RVA: 0x6A7030
        static ObscuredBigInteger wpp(ObscuredBigInteger a);  // RVA: 0x6A7130
        static ObscuredBigInteger wpq(ObscuredBigInteger a);  // RVA: 0x6A7220
        static ObscuredBigInteger wpr(ObscuredBigInteger a);  // RVA: 0x6A7310
        static ObscuredBigInteger wps(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A7400
        static ObscuredBigInteger wpt(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A7530
        static ObscuredBigInteger wpu(ObscuredBigInteger a);  // RVA: 0x6A7670
        static ObscuredBigInteger wpv(ObscuredBigInteger a);  // RVA: 0x6A7810
        static bool wpw(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A79B0
        static bool wpx(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A7A70
        static bool wpy(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A7B30
        static bool wpz(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A7BD0
        static bool wqa(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A7C70
        static bool wqb(ObscuredBigInteger a, int64_t b);  // RVA: 0x6A7D10
        static bool wqc(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6A7DB0
        static bool wqd(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6A7E70
        static bool wqe(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6A7F30
        static bool wqf(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6A7FD0
        static bool wqg(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6A8070
        static bool wqh(ObscuredBigInteger a, uint64_t b);  // RVA: 0x6A8110
        static bool wqi(int64_t a, ObscuredBigInteger b);  // RVA: 0x6A81B0
        static bool wqj(int64_t a, ObscuredBigInteger b);  // RVA: 0x6A8250
        static bool wqk(int64_t a, ObscuredBigInteger b);  // RVA: 0x6A82F0
        static bool wql(int64_t a, ObscuredBigInteger b);  // RVA: 0x6A8390
        static bool wqm(int64_t a, ObscuredBigInteger b);  // RVA: 0x6A8430
        static bool wqn(int64_t a, ObscuredBigInteger b);  // RVA: 0x6A84D0
        static bool wqo(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6A8570
        static bool wqp(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6A8610
        static bool wqq(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6A86B0
        static bool wqr(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6A8750
        static bool wqs(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6A87F0
        static bool wqt(uint64_t a, ObscuredBigInteger b);  // RVA: 0x6A8890
        static ObscuredBigInteger wqu(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A8930
        static ObscuredBigInteger wqv(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A8A70
        static ObscuredBigInteger wqw(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A8BB0
        static ObscuredBigInteger wqx(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A8CF0
        static ObscuredBigInteger wqy(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A8E30
        static ObscuredBigInteger wqz(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A8F70
        static ObscuredBigInteger wra(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A90B0
        static ObscuredBigInteger wrb(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x6A91F0
        static ObscuredBigInteger wrc(ObscuredBigInteger a, int32_t b);  // RVA: 0x6A9330
        int32_t GetHashCode();  // RVA: 0x6A5FC0
        Il2CppString* ToString();  // RVA: 0x6A6090
        Il2CppString* wrd(Il2CppString* a);  // RVA: 0x6A9420
        Il2CppString* wre(IFormatProvider* a);  // RVA: 0x6A94A0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6A6100
        bool Equals(Il2CppObject* other);  // RVA: 0x6A5D00
        bool Equals(BigInteger other);  // RVA: 0x6A5C70
        bool Equals(ObscuredBigInteger obj);  // RVA: 0x6A5E90
        int32_t CompareTo(ObscuredBigInteger other);  // RVA: 0x6A5B30
        int32_t CompareTo(BigInteger other);  // RVA: 0x6A5BE0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A5AB0
        int32_t wrf(int64_t a);  // RVA: 0x6A9520
        int32_t wrg(uint64_t a);  // RVA: 0x6A95A0
        Byte[][] wrh();  // RVA: 0x6A9620
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6A6030
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(BigInteger value);  // RVA: 0x6A61B0
        static BigInteger wri(BigInteger a, uint32_t b);  // RVA: 0x6A9690
        static BigInteger wrj(BigInteger a, uint32_t b);  // RVA: 0x6A97F0
        static ObscuredBigInteger wrk(BigInteger a, uint32_t b);  // RVA: 0x6A9850
        static uint32_t wrl();  // RVA: 0x6A9920
        BigInteger wrm(uint32_t a);  // RVA: 0x6A9930
        void wrn(BigInteger a, uint32_t b);  // RVA: 0x6A9A10
        BigInteger wro();  // RVA: 0x6A6770
        void wpb();  // RVA: 0x6A69F0
        static bool wrp(BigInteger a, int32_t b);  // RVA: 0x6A9AD0
        void wrq(BigInteger a);  // RVA: 0x6A9AF0
        BigInteger wrr();  // RVA: 0x6A9BD0
        bool wrs();  // RVA: 0x6A9DF0
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct BigIntegerContents
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t sign; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    UInt32[][] bits; // 0x0018

    // Methods
    bool Equals(BigIntegerContents other);  // RVA: 0x6A56A0
    bool Equals(Il2CppObject* obj);  // RVA: 0x6A5720
    int32_t GetHashCode();  // RVA: 0x6A5800
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct SerializableBigInteger
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        BigInteger value; // 0x0010
        BigIntegerContents raw; // 0x0010
    
        // Methods
        SerializableBigInteger wrt(uint32_t a);  // RVA: 0x6C4640
        BigInteger wru(uint32_t a);  // RVA: 0x6C46E0
        SerializableBigInteger wrv(uint32_t a);  // RVA: 0x6C4640
        static BigInteger op_Implicit(SerializableBigInteger value);  // RVA: 0x6C45F0
        bool Equals(SerializableBigInteger other);  // RVA: 0x6C4450
        bool Equals(Il2CppObject* obj);  // RVA: 0x6C44C0
        int32_t GetHashCode();  // RVA: 0x6C45A0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredBool
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t hiddenValue; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint8_t currentCryptoKey; // 0x0018
        bool _fakeValue; // 0x0019
        bool _fakeValueActive; // 0x001A
    
        // Methods
        static ObscuredBool op_Implicit(bool value);  // RVA: 0x6AA310
        static bool op_Implicit(ObscuredBool value);  // RVA: 0x6AA390
        int32_t GetHashCode();  // RVA: 0x6AA1D0
        Il2CppString* ToString();  // RVA: 0x6AA260
        bool Equals(Il2CppObject* other);  // RVA: 0x6A9F70
        bool Equals(ObscuredBool obj);  // RVA: 0x6AA160
        bool Equals(bool other);  // RVA: 0x6AA110
        int32_t CompareTo(ObscuredBool other);  // RVA: 0x6A9E70
        int32_t CompareTo(bool other);  // RVA: 0x6A9ED0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A9F20
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6AA210
        int32_t wpa();  // RVA: 0x6A69E0
        void wrw(bool a);  // RVA: 0x6AA400
        bool wrx();  // RVA: 0x6751E0
        void .ctor(bool value);  // RVA: 0x6AA2A0
        static int32_t wry(bool a, uint8_t b);  // RVA: 0x6AA410
        static bool wrz(int32_t a, uint8_t b);  // RVA: 0x6AA430
        static ObscuredBool wsa(int32_t a, uint8_t b);  // RVA: 0x6AA450
        static uint8_t wsb();  // RVA: 0x6AA4C0
        int32_t wsc(uint8_t a);  // RVA: 0x6AA4D0
        void wsd(int32_t a, uint8_t b);  // RVA: 0x6AA570
        bool wse();  // RVA: 0x6AA5D0
        void wpb();  // RVA: 0x6AA3A0
        static bool wsf(bool a, int32_t b);  // RVA: 0x6AA5E0
        void wsg(bool a);  // RVA: 0x6AA5F0
        bool wsh();  // RVA: 0x6AA630
        bool wsi();  // RVA: 0x6AA770
        static void wsj(uint8_t a);  // RVA: 0x63D9D0
        void wsk();  // RVA: 0x63D9D0
        static bool wsl(int32_t a, uint8_t b);  // RVA: 0x6AA790
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredByte
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint8_t hiddenValue; // 0x0014
        uint8_t currentCryptoKey; // 0x0015
        uint8_t fakeValue; // 0x0016
    
        // Methods
        static ObscuredByte op_Implicit(uint8_t value);  // RVA: 0x6AAB70
        static uint8_t op_Implicit(ObscuredByte value);  // RVA: 0x6AABD0
        static ObscuredByte wsm(ObscuredByte a);  // RVA: 0x6AAC30
        static ObscuredByte wsn(ObscuredByte a);  // RVA: 0x6AAC90
        static ObscuredByte wso(ObscuredByte a, int32_t b);  // RVA: 0x6AACF0
        int32_t GetHashCode();  // RVA: 0x6AAA20
        Il2CppString* ToString();  // RVA: 0x6AAAA0
        Il2CppString* wsp(Il2CppString* a);  // RVA: 0x6AAD50
        Il2CppString* wsq(IFormatProvider* a);  // RVA: 0x6AAD80
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6AAAD0
        bool Equals(Il2CppObject* other);  // RVA: 0x6AA870
        bool Equals(ObscuredByte obj);  // RVA: 0x6AA9C0
        bool Equals(uint8_t other);  // RVA: 0x6AA840
        int32_t CompareTo(ObscuredByte other);  // RVA: 0x6AA7A0
        int32_t CompareTo(uint8_t other);  // RVA: 0x6AA810
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AA7E0
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6AAA50
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(uint8_t value);  // RVA: 0x6AAB10
        static uint8_t wsr(uint8_t a, uint8_t b);  // RVA: 0x6AADB0
        static void wss(Byte[][] a, uint8_t b);  // RVA: 0x6AADC0
        static uint8_t wst(uint8_t a, uint8_t b);  // RVA: 0x6AAE20
        static void wsu(Byte[][] a, uint8_t b);  // RVA: 0x6AAE30
        static ObscuredByte wsv(uint8_t a, uint8_t b);  // RVA: 0x6AAE90
        static uint8_t wsw();  // RVA: 0x6AA4C0
        uint8_t wsx(uint8_t a);  // RVA: 0x6AAEE0
        void wsy(uint8_t a, uint8_t b);  // RVA: 0x6AAF60
        uint8_t wsz();  // RVA: 0x6AAFB0
        void wpb();  // RVA: 0x6AABF0
        static bool wta(uint8_t a, int32_t b);  // RVA: 0x6AAFC0
        void wtb(uint8_t a);  // RVA: 0x6AAFD0
        uint8_t wtc();  // RVA: 0x6AB000
        bool wtd();  // RVA: 0x6AB100
        static void wte(uint8_t a);  // RVA: 0x63D9D0
        void wtf();  // RVA: 0x63D9D0
        static uint8_t wtg(uint8_t a, uint8_t b);  // RVA: 0x6AB120
        static void wth(Byte[][] a, uint8_t b);  // RVA: 0x6AB160
        static uint8_t wti(uint8_t a, uint8_t b);  // RVA: 0x6AB1A0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredChar
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        wchar_t hiddenValue; // 0x0014
        uint8_t pad_0015[0x1]; // 0x0015
        wchar_t currentCryptoKey; // 0x0016
        uint8_t pad_0017[0x1]; // 0x0017
        wchar_t fakeValue; // 0x0018
    
        // Methods
        static ObscuredChar op_Implicit(wchar_t value);  // RVA: 0x6AB640
        static wchar_t op_Implicit(ObscuredChar value);  // RVA: 0x6AB630
        static ObscuredChar wtj(ObscuredChar a);  // RVA: 0x6AB6F0
        static ObscuredChar wtk(ObscuredChar a);  // RVA: 0x6AB780
        static ObscuredChar wtl(ObscuredChar a, int32_t b);  // RVA: 0x6AB810
        int32_t GetHashCode();  // RVA: 0x6AB550
        Il2CppString* ToString();  // RVA: 0x6AB590
        Il2CppString* wtm(IFormatProvider* a);  // RVA: 0x6AB890
        bool Equals(Il2CppObject* other);  // RVA: 0x6AB300
        bool Equals(ObscuredChar other);  // RVA: 0x6AB4C0
        bool Equals(wchar_t other);  // RVA: 0x6AB2B0
        int32_t CompareTo(ObscuredChar other);  // RVA: 0x6AB1B0
        int32_t CompareTo(wchar_t other);  // RVA: 0x6AB210
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AB260
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(wchar_t value);  // RVA: 0x6AB5D0
        static wchar_t wtn(wchar_t a, wchar_t b);  // RVA: 0x6AB8E0
        static wchar_t wto(wchar_t a, wchar_t b);  // RVA: 0x6AB8F0
        static ObscuredChar wtp(wchar_t a, wchar_t b);  // RVA: 0x6AB900
        static wchar_t wtq();  // RVA: 0x6AB960
        wchar_t wtr(wchar_t a);  // RVA: 0x6AB970
        void wts(wchar_t a, wchar_t b);  // RVA: 0x6ABA20
        wchar_t wtt();  // RVA: 0x6ABA70
        void wpb();  // RVA: 0x6AB6A0
        static bool wtu(wchar_t a, int32_t b);  // RVA: 0x6ABA80
        void wtv(wchar_t a);  // RVA: 0x6ABA90
        wchar_t wtw();  // RVA: 0x6ABAC0
        bool wtx();  // RVA: 0x6ABC00
        static void wty(wchar_t a);  // RVA: 0x63D9D0
        void wtz();  // RVA: 0x63D9D0
        static wchar_t wua(wchar_t a, wchar_t b);  // RVA: 0x6ABC50
        static wchar_t wub(wchar_t a, wchar_t b);  // RVA: 0x6ABC50
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredDateTime
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int64_t hiddenValue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int64_t currentCryptoKey; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t fakeValue; // 0x0028
    
        // Methods
        int64_t wuc();  // RVA: 0x6B0110
        static ObscuredDateTime op_Implicit(DateTime value);  // RVA: 0x6B0030
        static DateTime op_Implicit(ObscuredDateTime value);  // RVA: 0x6B0060
        int32_t GetHashCode();  // RVA: 0x6AFC00
        Il2CppString* ToString();  // RVA: 0x6AFEE0
        Il2CppString* wud(Il2CppString* a);  // RVA: 0x6B01C0
        TypeCode GetTypeCode();  // RVA: 0x6AFCB0
        bool wue(IFormatProvider* a);  // RVA: 0x6B0280
        wchar_t wuf(IFormatProvider* a);  // RVA: 0x6B02C0
        int8_t wug(IFormatProvider* a);  // RVA: 0x6B0300
        uint8_t wuh(IFormatProvider* a);  // RVA: 0x6B0340
        int16_t wui(IFormatProvider* a);  // RVA: 0x6B0380
        uint16_t wuj(IFormatProvider* a);  // RVA: 0x6B03C0
        int32_t wuk(IFormatProvider* a);  // RVA: 0x6B0400
        uint32_t wul(IFormatProvider* a);  // RVA: 0x6B0440
        int64_t wum(IFormatProvider* a);  // RVA: 0x6B0480
        uint64_t wun(IFormatProvider* a);  // RVA: 0x6B04C0
        float wuo(IFormatProvider* a);  // RVA: 0x6B0500
        double wup(IFormatProvider* a);  // RVA: 0x6B0540
        Decimal wuq(IFormatProvider* a);  // RVA: 0x6B0580
        DateTime wur(IFormatProvider* a);  // RVA: 0x6B05C0
        Il2CppObject* wus(Type* a, IFormatProvider* b);  // RVA: 0x6B0630
        Il2CppString* ToString(IFormatProvider* provider);  // RVA: 0x6AFD50
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6AFE10
        bool Equals(Il2CppObject* other);  // RVA: 0x6AF9E0
        bool Equals(ObscuredDateTime other);  // RVA: 0x6AF980
        bool Equals(DateTime other);  // RVA: 0x6AFB40
        int32_t CompareTo(ObscuredDateTime other);  // RVA: 0x6AF7C0
        int32_t CompareTo(DateTime other);  // RVA: 0x6AF700
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AF8C0
        static DateTime wut(ObscuredDateTime a, TimeSpan b);  // RVA: 0x6B0830
        static DateTime wuu(ObscuredDateTime a, TimeSpan b);  // RVA: 0x6B08F0
        static TimeSpan wuv(ObscuredDateTime a, DateTime b);  // RVA: 0x6B09B0
        static TimeSpan wuw(DateTime a, ObscuredDateTime b);  // RVA: 0x6B0A70
        static bool wux(ObscuredDateTime a, DateTime b);  // RVA: 0x6B0B30
        static bool wuy(DateTime a, ObscuredDateTime b);  // RVA: 0x6B0BF0
        static bool wuz(ObscuredDateTime a, DateTime b);  // RVA: 0x6B0CB0
        static bool wva(DateTime a, ObscuredDateTime b);  // RVA: 0x6B0D70
        static bool wvb(ObscuredDateTime a, DateTime b);  // RVA: 0x6B0E30
        static bool wvc(DateTime a, ObscuredDateTime b);  // RVA: 0x6B0EF0
        static bool wvd(ObscuredDateTime a, DateTime b);  // RVA: 0x6B0FB0
        static bool wve(DateTime a, ObscuredDateTime b);  // RVA: 0x6B1070
        static bool wvf(ObscuredDateTime a, DateTime b);  // RVA: 0x6B1130
        static bool wvg(DateTime a, ObscuredDateTime b);  // RVA: 0x6B11F0
        static bool wvh(ObscuredDateTime a, DateTime b);  // RVA: 0x6B12B0
        static bool wvi(DateTime a, ObscuredDateTime b);  // RVA: 0x6B1370
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6AFCC0
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(DateTime value);  // RVA: 0x6AFF90
        static int64_t wvj(DateTime a, int64_t b);  // RVA: 0x6B1430
        static DateTime wvk(int64_t a, int64_t b);  // RVA: 0x6B1490
        static ObscuredDateTime wvl(int64_t a, int64_t b);  // RVA: 0x6B1580
        static int64_t wvm();  // RVA: 0x6AF160
        int64_t wvn(int64_t a);  // RVA: 0x6B15B0
        void wvo(int64_t a, int64_t b);  // RVA: 0x6B16B0
        DateTime wvp();  // RVA: 0x6B1760
        void wpb();  // RVA: 0x6B00C0
        static bool wvq(DateTime a, int32_t b);  // RVA: 0x6B17C0
        static bool wvr(int64_t a, int32_t b);  // RVA: 0x6AF450
        void wvs(int64_t a);  // RVA: 0x6AF460
        static int64_t wvt(int64_t a, int64_t b);  // RVA: 0x6AF490
        static int64_t wvu(int64_t a, int64_t b);  // RVA: 0x6AF4A0
        DateTime wvv();  // RVA: 0x6B0060
        int64_t wvw();  // RVA: 0x6B1820
        bool wvx();  // RVA: 0x6AF6E0
        static DateTime wvy(int64_t a, int64_t b);  // RVA: 0x6B19B0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredDateTimeOffset
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int64_t hiddenValue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int64_t currentCryptoKey; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t fakeValue; // 0x0028
    
        // Methods
        int64_t wvz();  // RVA: 0x6AC800
        DateTime wwa();  // RVA: 0x6AC8D0
        DateTime wwb();  // RVA: 0x6AC9A0
        int32_t wwc();  // RVA: 0x6ACA70
        DayOfWeek wwd();  // RVA: 0x6ACB40
        int32_t wwe();  // RVA: 0x6ACC10
        int32_t wwf();  // RVA: 0x6ACCE0
        int32_t wwg();  // RVA: 0x6ACDB0
        int32_t wwh();  // RVA: 0x6ACE80
        int32_t wwi();  // RVA: 0x6ACF50
        TimeSpan wwj();  // RVA: 0x6AD020
        int32_t wwk();  // RVA: 0x6AD0F0
        TimeSpan wwl();  // RVA: 0x6AD1C0
        DateTime wwm();  // RVA: 0x6AD290
        int32_t wwn();  // RVA: 0x6AD360
        static ObscuredDateTimeOffset op_Implicit(DateTimeOffset value);  // RVA: 0x6AC660
        static DateTimeOffset op_Implicit(ObscuredDateTimeOffset value);  // RVA: 0x6AC710
        int32_t GetHashCode();  // RVA: 0x6AC280
        Il2CppString* ToString();  // RVA: 0x6AC4F0
        Il2CppString* wwo(Il2CppString* a);  // RVA: 0x6AD430
        Il2CppString* wwp(IFormatProvider* a);  // RVA: 0x6AD510
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6AC400
        bool Equals(Il2CppObject* other);  // RVA: 0x6AC0C0
        bool Equals(ObscuredDateTimeOffset other);  // RVA: 0x6AC220
        bool Equals(DateTimeOffset other);  // RVA: 0x6ABFD0
        int32_t CompareTo(ObscuredDateTimeOffset other);  // RVA: 0x6ABD50
        int32_t CompareTo(DateTimeOffset other);  // RVA: 0x6ABC60
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6ABEB0
        static DateTimeOffset wwq(ObscuredDateTimeOffset a, TimeSpan b);  // RVA: 0x6AD5F0
        static DateTimeOffset wwr(ObscuredDateTimeOffset a, TimeSpan b);  // RVA: 0x6AD6F0
        static TimeSpan wws(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6AD7F0
        static TimeSpan wwt(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AD8E0
        static TimeSpan wwu(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AD9D0
        static bool wwv(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6ADB50
        static bool www(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6ADC40
        static bool wwx(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6ADD30
        static bool wwy(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6ADEB0
        static bool wwz(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6ADFA0
        static bool wxa(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AE090
        static bool wxb(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6AE210
        static bool wxc(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AE300
        static bool wxd(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AE3F0
        static bool wxe(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6AE570
        static bool wxf(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AE660
        static bool wxg(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AE750
        static bool wxh(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6AE8D0
        static bool wxi(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AE9C0
        static bool wxj(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AEAB0
        static bool wxk(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6AEC30
        static bool wxl(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AED20
        static bool wxm(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6AEE10
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6AC350
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(DateTimeOffset value);  // RVA: 0x6AC5C0
        static int64_t wxn(DateTimeOffset a, int64_t b);  // RVA: 0x6AEF90
        static DateTimeOffset wxo(int64_t a, int64_t b);  // RVA: 0x6AEFF0
        static ObscuredDateTimeOffset wxp(int64_t a, int64_t b);  // RVA: 0x6AF130
        static int64_t wxq();  // RVA: 0x6AF160
        int64_t wxr(int64_t a);  // RVA: 0x6AF170
        void wxs(int64_t a, int64_t b);  // RVA: 0x6AF280
        DateTimeOffset wxt();  // RVA: 0x6AF350
        void wpb();  // RVA: 0x6AC7B0
        static bool wxu(DateTimeOffset a, int32_t b);  // RVA: 0x6AF3E0
        static bool wxv(int64_t a, int32_t b);  // RVA: 0x6AF450
        void wxw(int64_t a);  // RVA: 0x6AF460
        static int64_t wxx(int64_t a, int64_t b);  // RVA: 0x6AF490
        static int64_t wxy(int64_t a, int64_t b);  // RVA: 0x6AF4A0
        DateTimeOffset wxz();  // RVA: 0x6AF4B0
        int64_t wya();  // RVA: 0x6AF540
        bool wyb();  // RVA: 0x6AF6E0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredDecimal
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        ACTkByte16 hiddenValue; // 0x0014
        uint8_t pad_0015[0x13]; // 0x0015
        int64_t currentCryptoKey; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Decimal fakeValue; // 0x0030
    
        // Methods
        static ObscuredDecimal op_Implicit(Decimal value);  // RVA: 0x6B21E0
        static Decimal op_Implicit(ObscuredDecimal value);  // RVA: 0x6B2220
        static ObscuredDecimal wyc(ObscuredFloat a);  // RVA: 0x6B22C0
        static ObscuredDecimal wyd(ObscuredDecimal a);  // RVA: 0x6B2410
        static ObscuredDecimal wye(ObscuredDecimal a);  // RVA: 0x6B2580
        static ObscuredDecimal wyf(ObscuredDecimal a, Decimal b);  // RVA: 0x6B26F0
        int32_t GetHashCode();  // RVA: 0x6B1F20
        Il2CppString* ToString();  // RVA: 0x6B2010
        Il2CppString* wyg(Il2CppString* a);  // RVA: 0x6B27F0
        Il2CppString* wyh(IFormatProvider* a);  // RVA: 0x6B2870
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B2080
        bool Equals(Il2CppObject* other);  // RVA: 0x6B1C00
        bool Equals(ObscuredDecimal other);  // RVA: 0x6B1D90
        bool Equals(Decimal other);  // RVA: 0x6B1E90
        int32_t CompareTo(ObscuredDecimal other);  // RVA: 0x6B1A40
        int32_t CompareTo(Decimal other);  // RVA: 0x6B1B70
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B1AF0
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6B1F90
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(Decimal value);  // RVA: 0x6B2110
        static Decimal wyi(Decimal a, int64_t b);  // RVA: 0x6A5850
        static Decimal wyj(Decimal a, int64_t b);  // RVA: 0x6A5850
        static ObscuredDecimal wyk(Decimal a, int64_t b);  // RVA: 0x6B28F0
        static int64_t wyl();  // RVA: 0x6AF160
        Decimal wym(int64_t a);  // RVA: 0x6B2970
        void wyn(Decimal a, int64_t b);  // RVA: 0x6B2AF0
        Decimal wyo();  // RVA: 0x6B2220
        void wpb();  // RVA: 0x6B2250
        static bool wyp(Decimal a, int32_t b);  // RVA: 0x6B2B60
        void wyq(Decimal a);  // RVA: 0x6B2B80
        static ACTkByte16 wyr(Decimal a, int64_t b);  // RVA: 0x6A5850
        Decimal wys();  // RVA: 0x6B2BD0
        bool wyt();  // RVA: 0x6B2ED0
        static void wyu(int64_t a);  // RVA: 0x63D9D0
        void wyv();  // RVA: 0x63D9D0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct DecimalLongBytesUnion
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Decimal d; // 0x0010
        int64_t l1; // 0x0010
        ACTkByte16 b16; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int64_t l2; // 0x0018
    
        // Methods
        static Decimal wyw(Decimal a, int64_t b);  // RVA: 0x6A5850
        static ACTkByte16 wyx(Decimal a, int64_t b);  // RVA: 0x6A5850
        static Decimal wyy(ACTkByte16 a, int64_t b);  // RVA: 0x6A5850
        static Decimal wyz(ACTkByte16 a);  // RVA: 0x6754F0
        static ACTkByte16 wza(Decimal a);  // RVA: 0x6754F0
        static DecimalLongBytesUnion wzb(Decimal a);  // RVA: 0x6754F0
        static DecimalLongBytesUnion wzc(ACTkByte16 a);  // RVA: 0x6754F0
        DecimalLongBytesUnion wzd(int64_t a);  // RVA: 0x6A5880
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct DoubleLongBytesUnion
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    double d; // 0x0010
    int64_t l; // 0x0010
    ACTkByte8 b8; // 0x0010

    // Methods
    static int64_t wze(int64_t a, uint8_t b, uint8_t c);  // RVA: 0x6A58A0
    static int64_t wzf(double a, int64_t b);  // RVA: 0x6A58E0
    static double wzg(int64_t a, int64_t b);  // RVA: 0x6A5910
    static DoubleLongBytesUnion wzh(double a);  // RVA: 0x6A5940
    static DoubleLongBytesUnion wzi(int64_t a);  // RVA: 0x6A5950
    DoubleLongBytesUnion wzj(int64_t a);  // RVA: 0x6A5960
    DoubleLongBytesUnion wzk(int64_t a);  // RVA: 0x6A5980
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredDouble
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int64_t hiddenValue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int64_t currentCryptoKey; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        double fakeValue; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        ACTkByte8 hiddenValueOldByte8; // 0x0030
    
        // Methods
        static ObscuredDouble op_Implicit(double value);  // RVA: 0x6B3400
        static double op_Implicit(ObscuredDouble value);  // RVA: 0x6B33F0
        static ObscuredDouble wzl(ObscuredFloat a);  // RVA: 0x6B3490
        static ObscuredDouble wzm(ObscuredDouble a);  // RVA: 0x6B3550
        static ObscuredDouble wzn(ObscuredDouble a);  // RVA: 0x6B3610
        static ObscuredDouble wzo(ObscuredDouble a, double b);  // RVA: 0x6B36D0
        int32_t GetHashCode();  // RVA: 0x6B3230
        Il2CppString* ToString();  // RVA: 0x6B3340
        Il2CppString* wzp(Il2CppString* a);  // RVA: 0x6B3780
        Il2CppString* wzq(IFormatProvider* a);  // RVA: 0x6B37C0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B32F0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B2FE0
        bool Equals(ObscuredDouble other);  // RVA: 0x6B3190
        bool Equals(double other);  // RVA: 0x6B31F0
        int32_t CompareTo(ObscuredDouble other);  // RVA: 0x6B2FA0
        int32_t CompareTo(double other);  // RVA: 0x6B2F20
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B2F60
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6B3280
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(double value);  // RVA: 0x6B3370
        static int64_t wzr(double a, int64_t b);  // RVA: 0x6A58E0
        static double wzs(int64_t a, int64_t b);  // RVA: 0x6A5910
        static int64_t wzt(int64_t a, uint8_t b, uint8_t c);  // RVA: 0x6A58A0
        static ObscuredDouble wzu(int64_t a, int64_t b);  // RVA: 0x6B3800
        static int64_t wzv();  // RVA: 0x6AF160
        int64_t wzw(int64_t a);  // RVA: 0x6B3890
        void wzx(int64_t a, int64_t b);  // RVA: 0x6B3950
        double wzy();  // RVA: 0x6B39D0
        void wpb();  // RVA: 0x6B3430
        static bool wzz(double a, int32_t b);  // RVA: 0x6B39E0
        void xaa(double a);  // RVA: 0x6B39F0
        static bool xab(double a, double b);  // RVA: 0x6B3A50
        double xac();  // RVA: 0x6B3B10
        bool xad();  // RVA: 0x6AF6E0
        static void xae(int64_t a);  // RVA: 0x63D9D0
        void xaf();  // RVA: 0x63D9D0
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct FloatIntBytesUnion
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float f; // 0x0010
    int32_t i; // 0x0010
    ACTkByte4 b4; // 0x0010

    // Methods
    static int32_t xag(int32_t a, uint8_t b, uint8_t c);  // RVA: 0x6A59B0
    static int32_t xah(float a, int32_t b);  // RVA: 0x6A59E0
    static float xai(int32_t a, int32_t b);  // RVA: 0x6A5A10
    static FloatIntBytesUnion xaj(float a);  // RVA: 0x6A5A40
    static FloatIntBytesUnion xak(int32_t a);  // RVA: 0x6A5A50
    FloatIntBytesUnion xal(int32_t a);  // RVA: 0x6A5A60
    FloatIntBytesUnion xam(int32_t a);  // RVA: 0x6A5A80
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredFloat
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t hiddenValue; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t currentCryptoKey; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float fakeValue; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        ACTkByte4 hiddenValueOldByte4; // 0x0020
    
        // Methods
        static ObscuredFloat op_Implicit(float value);  // RVA: 0x6B41D0
        static float op_Implicit(ObscuredFloat value);  // RVA: 0x6B41C0
        static ObscuredFloat xan(ObscuredFloat a);  // RVA: 0x6B4260
        static ObscuredFloat xao(ObscuredFloat a);  // RVA: 0x6B4300
        static ObscuredFloat xap(ObscuredFloat a, int32_t b);  // RVA: 0x6B43A0
        int32_t GetHashCode();  // RVA: 0x6B4030
        Il2CppString* ToString();  // RVA: 0x6B4110
        Il2CppString* xaq(Il2CppString* a);  // RVA: 0x6B4440
        Il2CppString* xar(IFormatProvider* a);  // RVA: 0x6B4480
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B40C0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B3E20
        bool Equals(ObscuredFloat other);  // RVA: 0x6B3FD0
        bool Equals(float other);  // RVA: 0x6B3F90
        int32_t CompareTo(ObscuredFloat other);  // RVA: 0x6B3DE0
        int32_t CompareTo(float other);  // RVA: 0x6B3DA0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B3D60
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6B4060
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(float value);  // RVA: 0x6B4140
        static int32_t xas(float a, int32_t b);  // RVA: 0x6A59E0
        static float xat(int32_t a, int32_t b);  // RVA: 0x6A5A10
        static ObscuredFloat xau(int32_t a, int32_t b);  // RVA: 0x6B44C0
        static int32_t xav();  // RVA: 0x6A9920
        int32_t xaw(int32_t a);  // RVA: 0x6B4540
        void xax(int32_t a, int32_t b);  // RVA: 0x6B45E0
        float xay();  // RVA: 0x6B4650
        void wpb();  // RVA: 0x6B4200
        static bool xaz(float a, int32_t b);  // RVA: 0x6B4660
        void xba(float a);  // RVA: 0x6B4670
        static bool xbb(float a, float b);  // RVA: 0x6B46C0
        float xbc();  // RVA: 0x6B4780
        bool xbd();  // RVA: 0x6B4980
        static void xbe(int32_t a);  // RVA: 0x63D9D0
        void xbf();  // RVA: 0x63D9D0
        static int32_t xbg(int32_t a, uint8_t b, uint8_t c);  // RVA: 0x6A59B0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredGuid
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int64_t hiddenValue1; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int64_t hiddenValue2; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t currentCryptoKey; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Guid fakeValue; // 0x0030
    
        // Methods
        static ObscuredGuid op_Implicit(Guid value);  // RVA: 0x6B4F20
        static Guid op_Implicit(ObscuredGuid value);  // RVA: 0x6B4EF0
        int32_t GetHashCode();  // RVA: 0x6B4CE0
        Il2CppString* ToString();  // RVA: 0x6B4DE0
        Il2CppString* xbh(Il2CppString* a);  // RVA: 0x6B5030
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B4D90
        bool Equals(Il2CppObject* other);  // RVA: 0x6B4B90
        bool Equals(ObscuredGuid other);  // RVA: 0x6B4AE0
        bool Equals(Guid other);  // RVA: 0x6B4A90
        int32_t CompareTo(ObscuredGuid other);  // RVA: 0x6B4A30
        int32_t CompareTo(Guid other);  // RVA: 0x6B49A0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B49F0
        static bool xbi(ObscuredGuid a, Guid b);  // RVA: 0x6B5070
        static bool xbj(Guid a, ObscuredGuid b);  // RVA: 0x6B50D0
        static bool xbk(ObscuredGuid a, ObscuredGuid b);  // RVA: 0x6B5130
        static bool xbl(ObscuredGuid a, Guid b);  // RVA: 0x6B51D0
        static bool xbm(Guid a, ObscuredGuid b);  // RVA: 0x6B5230
        static bool xbn(ObscuredGuid a, ObscuredGuid b);  // RVA: 0x6B5290
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6B4D20
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(Guid value);  // RVA: 0x6B4E20
        static void xbo(Guid a, int64_t b, int64_t c, int64_t d);  // RVA: 0x6B5330
        static Guid xbp(int64_t a, int64_t b, int64_t c);  // RVA: 0x6B53B0
        static ObscuredGuid xbq(int64_t a, int64_t b, int64_t c);  // RVA: 0x6B55A0
        static int64_t xbr();  // RVA: 0x6AF160
        static int32_t xbs(int64_t a, int64_t b);  // RVA: 0x6B55D0
        void xbt(int64_t a, int64_t b, int64_t c);  // RVA: 0x6B5610
        void xbu(int64_t a, int64_t b, int64_t c);  // RVA: 0x6B5770
        Guid xbv();  // RVA: 0x6B4EF0
        void wpb();  // RVA: 0x6B4F60
        static bool xbw(Guid a, int32_t b);  // RVA: 0x6B5830
        static bool xbx(System.ReadOnlySpan<System.Byte> a, int32_t b);  // RVA: 0x6B58F0
        void xby(Guid a);  // RVA: 0x6B59E0
        static int64_t xbz(int64_t a, int64_t b);  // RVA: 0x6AF490
        static int64_t xca(int64_t a, int64_t b);  // RVA: 0x6AF4A0
        Guid xcb();  // RVA: 0x6B5A80
        static bool xcc(Byte[][] a, Byte[][] b);  // RVA: 0x6B5E10
        bool xcd();  // RVA: 0x6B5E80
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredInt
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t hiddenValue; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t currentCryptoKey; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t fakeValue; // 0x001C
    
        // Methods
        static ObscuredInt op_Implicit(int32_t value);  // RVA: 0x6B6380
        static int32_t op_Implicit(ObscuredInt value);  // RVA: 0x6B6490
        static ObscuredFloat op_Implicit(ObscuredInt value);  // RVA: 0x6B62E0
        static ObscuredDouble op_Implicit(ObscuredInt value);  // RVA: 0x6B63E0
        static ObscuredUInt op_Explicit(ObscuredInt value);  // RVA: 0x6B6270
        static ObscuredInt xce(ObscuredInt a);  // RVA: 0x6B64E0
        static ObscuredInt xcf(ObscuredInt a);  // RVA: 0x6B6550
        static ObscuredInt xcg(ObscuredInt a, int32_t b);  // RVA: 0x6B65C0
        int32_t GetHashCode();  // RVA: 0x6B6120
        Il2CppString* ToString();  // RVA: 0x6B61F0
        Il2CppString* xch(Il2CppString* a);  // RVA: 0x6B6630
        Il2CppString* xci(IFormatProvider* a);  // RVA: 0x6B6670
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B61A0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B5F80
        bool Equals(ObscuredInt other);  // RVA: 0x6B60C0
        bool Equals(int32_t other);  // RVA: 0x6B5F50
        int32_t CompareTo(ObscuredInt other);  // RVA: 0x6B5F10
        int32_t CompareTo(int32_t other);  // RVA: 0x6B5EA0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B5ED0
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6B6150
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(int32_t value);  // RVA: 0x6B6220
        static int32_t xcj(int32_t a, int32_t b);  // RVA: 0x6B66B0
        static int32_t xck(int32_t a, int32_t b);  // RVA: 0x6B66C0
        static ObscuredInt xcl(int32_t a, int32_t b);  // RVA: 0x6B66D0
        static int32_t xcm();  // RVA: 0x6A9920
        int32_t xcn(int32_t a);  // RVA: 0x6B6720
        void xco(int32_t a, int32_t b);  // RVA: 0x6B6790
        int32_t xcp();  // RVA: 0x6B67D0
        void wpb();  // RVA: 0x6B64A0
        static bool xcq(int32_t a, int32_t b);  // RVA: 0x6B67E0
        void xcr(int32_t a);  // RVA: 0x6B67F0
        int32_t xcs();  // RVA: 0x6B6820
        bool xct();  // RVA: 0x6B4980
        static void xcu(int32_t a);  // RVA: 0x63D9D0
        void xcv();  // RVA: 0x63D9D0
        static int32_t xcw(int32_t a, int32_t b);  // RVA: 0x6B6910
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredLong
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int64_t hiddenValue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int64_t currentCryptoKey; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t fakeValue; // 0x0028
    
        // Methods
        static ObscuredLong op_Implicit(int64_t value);  // RVA: 0x6B6D30
        static int64_t op_Implicit(ObscuredLong value);  // RVA: 0x6B6D90
        static ObscuredLong xcx(ObscuredLong a);  // RVA: 0x6B6DE0
        static ObscuredLong xcy(ObscuredLong a);  // RVA: 0x6B6E70
        static ObscuredLong xcz(ObscuredLong a, int32_t b);  // RVA: 0x6B6F00
        int32_t GetHashCode();  // RVA: 0x6B6BD0
        Il2CppString* ToString();  // RVA: 0x6B6C50
        Il2CppString* xda(Il2CppString* a);  // RVA: 0x6B6F70
        Il2CppString* xdb(IFormatProvider* a);  // RVA: 0x6B6FB0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B6C80
        bool Equals(Il2CppObject* other);  // RVA: 0x6B6A80
        bool Equals(ObscuredLong other);  // RVA: 0x6B69E0
        bool Equals(int64_t other);  // RVA: 0x6B6A40
        int32_t CompareTo(ObscuredLong other);  // RVA: 0x6B6960
        int32_t CompareTo(int64_t other);  // RVA: 0x6B69A0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B6920
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6B6C00
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(int64_t value);  // RVA: 0x6B6CD0
        static int64_t xdc(int64_t a, int64_t b);  // RVA: 0x6AF490
        static int64_t xdd(int64_t a, int64_t b);  // RVA: 0x6AF4A0
        static ObscuredLong xde(int64_t a, int64_t b);  // RVA: 0x6B6FF0
        static int64_t xdf();  // RVA: 0x6AF160
        int64_t xdg(int64_t a);  // RVA: 0x6B7040
        void xdh(int64_t a, int64_t b);  // RVA: 0x6B70D0
        int64_t xdi();  // RVA: 0x6B7120
        void wpb();  // RVA: 0x6B6DA0
        static bool xdj(int64_t a, int32_t b);  // RVA: 0x6AF450
        void xdk(int64_t a);  // RVA: 0x6AF460
        int64_t xdl();  // RVA: 0x6B7130
        bool xdm();  // RVA: 0x6AF6E0
        static void xdn(int64_t a);  // RVA: 0x63D9D0
        void xdo();  // RVA: 0x63D9D0
        static int64_t xdp(int64_t a, int64_t b);  // RVA: 0x6B7250
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct RawEncryptedQuaternion
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t x; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t y; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t z; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t w; // 0x001C

    // Methods
    bool Equals(RawEncryptedQuaternion other);  // RVA: 0x6C4110
    bool Equals(Il2CppObject* obj);  // RVA: 0x6C4140
    int32_t GetHashCode();  // RVA: 0x6C41F0
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredQuaternion
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        RawEncryptedQuaternion hiddenValue; // 0x0014
        uint8_t pad_0015[0xF]; // 0x0015
        int32_t currentCryptoKey; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        Quaternion fakeValue; // 0x0028
    
        // Methods
        static ObscuredQuaternion op_Implicit(Quaternion value);  // RVA: 0x6B7A60
        static Quaternion op_Implicit(ObscuredQuaternion value);  // RVA: 0x6B7A30
        static ObscuredQuaternion xdq(ObscuredQuaternion a, ObscuredQuaternion b);  // RVA: 0x6B7BC0
        static ObscuredQuaternion xdr(ObscuredQuaternion a, Quaternion b);  // RVA: 0x6B7DC0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B73A0
        bool Equals(ObscuredQuaternion other);  // RVA: 0x6B7260
        bool Equals(Quaternion other);  // RVA: 0x6B7540
        int32_t GetHashCode();  // RVA: 0x6B75F0
        Il2CppString* ToString();  // RVA: 0x6B77C0
        Il2CppString* xds(Il2CppString* a);  // RVA: 0x6B7FA0
        void xdt();  // RVA: 0x6B7FF0
        Quaternion xdu();  // RVA: 0x6B8110
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6B7680
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(Quaternion value);  // RVA: 0x6B7800
        void .ctor(float x, float y, float z, float w);  // RVA: 0x6B7900
        float xdv();  // RVA: 0x6B8150
        void xdw(float a);  // RVA: 0x6B8170
        float xdx();  // RVA: 0x6B8210
        void xdy(float a);  // RVA: 0x6B8230
        float xdz();  // RVA: 0x6B82D0
        void xea(float a);  // RVA: 0x6B82F0
        float xeb();  // RVA: 0x6B8390
        void xec(float a);  // RVA: 0x6B83B0
        float get_Item(int32_t index);  // RVA: 0x6B7940
        void set_Item(int32_t index, float value);  // RVA: 0x6B7AA0
        static RawEncryptedQuaternion xed(Quaternion a, int32_t b);  // RVA: 0x6B8450
        static RawEncryptedQuaternion xee(float a, float b, float c, float d, int32_t e);  // RVA: 0x6B8510
        static Quaternion xef(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x6B85D0
        static ObscuredQuaternion xeg(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x6B8670
        static int32_t xeh();  // RVA: 0x6A9920
        static bool xei(Quaternion a, Quaternion b);  // RVA: 0x6B86B0
        RawEncryptedQuaternion xej(int32_t a);  // RVA: 0x6B87D0
        void xek(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x6B8880
        Quaternion xel();  // RVA: 0x6B7A30
        void wpb();  // RVA: 0x6B7B70
        static bool xem(Quaternion a, int32_t b);  // RVA: 0x6B89A0
        void xen(Quaternion a);  // RVA: 0x6B89C0
        Quaternion xeo();  // RVA: 0x6B8AA0
        bool xep();  // RVA: 0x6B8E00
        static void xeq(int32_t a);  // RVA: 0x63D9D0
        void xer();  // RVA: 0x63D9D0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredSByte
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int8_t hiddenValue; // 0x0014
        int8_t currentCryptoKey; // 0x0015
        int8_t fakeValue; // 0x0016
    
        // Methods
        static ObscuredSByte op_Implicit(int8_t value);  // RVA: 0x6B91B0
        static int8_t op_Implicit(ObscuredSByte value);  // RVA: 0x6B9210
        static ObscuredSByte xes(ObscuredSByte a);  // RVA: 0x6B9270
        static ObscuredSByte xet(ObscuredSByte a);  // RVA: 0x6B92D0
        static ObscuredSByte xeu(ObscuredSByte a, int32_t b);  // RVA: 0x6B9330
        int32_t GetHashCode();  // RVA: 0x6B90B0
        Il2CppString* ToString();  // RVA: 0x6B90E0
        Il2CppString* xev(Il2CppString* a);  // RVA: 0x6B9390
        Il2CppString* xew(IFormatProvider* a);  // RVA: 0x6B93C0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B9110
        bool Equals(Il2CppObject* other);  // RVA: 0x6B8F60
        bool Equals(ObscuredSByte obj);  // RVA: 0x6B8F00
        bool Equals(int8_t other);  // RVA: 0x6B8ED0
        int32_t CompareTo(ObscuredSByte other);  // RVA: 0x6B8E90
        int32_t CompareTo(int8_t other);  // RVA: 0x6B8E60
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B8E30
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6AAA50
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(int8_t value);  // RVA: 0x6B9150
        static int8_t xex(int8_t a, int8_t b);  // RVA: 0x6AADB0
        static int8_t xey(int8_t a, int8_t b);  // RVA: 0x6AAE20
        static ObscuredSByte xez(int8_t a, int8_t b);  // RVA: 0x6B93F0
        static int8_t xfa();  // RVA: 0x6B9440
        int8_t xfb(int8_t a);  // RVA: 0x6B9450
        void xfc(int8_t a, int8_t b);  // RVA: 0x6B94D0
        int8_t xfd();  // RVA: 0x6B9520
        void wpb();  // RVA: 0x6B9230
        static bool xfe(int8_t a, int32_t b);  // RVA: 0x6B9530
        void xff(int8_t a);  // RVA: 0x6B9540
        int8_t xfg();  // RVA: 0x6B9570
        bool xfh();  // RVA: 0x6AB100
        static void xfi(int8_t a);  // RVA: 0x63D9D0
        void xfj();  // RVA: 0x63D9D0
        static int8_t xfk(int8_t a, int8_t b);  // RVA: 0x6AB1A0
        static int8_t xfl(int8_t a, int8_t b);  // RVA: 0x6AB1A0
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredShort
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int16_t hiddenValue; // 0x0014
        uint8_t pad_0015[0x1]; // 0x0015
        int16_t currentCryptoKey; // 0x0016
        uint8_t pad_0017[0x1]; // 0x0017
        int16_t fakeValue; // 0x0018
    
        // Methods
        static ObscuredShort op_Implicit(int16_t value);  // RVA: 0x6B9AB0
        static int16_t op_Implicit(ObscuredShort value);  // RVA: 0x6B9AA0
        static ObscuredShort xfm(ObscuredShort a);  // RVA: 0x6B9B60
        static ObscuredShort xfn(ObscuredShort a);  // RVA: 0x6B9BF0
        static ObscuredShort xfo(ObscuredShort a, int32_t b);  // RVA: 0x6B9C80
        int32_t GetHashCode();  // RVA: 0x6B9940
        Il2CppString* ToString();  // RVA: 0x6B99C0
        Il2CppString* xfp(Il2CppString* a);  // RVA: 0x6B9D00
        Il2CppString* xfq(IFormatProvider* a);  // RVA: 0x6B9D40
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6B99F0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B97D0
        bool Equals(ObscuredShort obj);  // RVA: 0x6B9730
        bool Equals(int16_t other);  // RVA: 0x6B9790
        int32_t CompareTo(ObscuredShort other);  // RVA: 0x6B96F0
        int32_t CompareTo(int16_t other);  // RVA: 0x6B96B0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6B9670
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6B9970
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(int16_t value);  // RVA: 0x6B9A40
        static int16_t xfr(int16_t a, int16_t b);  // RVA: 0x6AB8E0
        static int16_t xfs(int16_t a, int16_t b);  // RVA: 0x6AB8F0
        static ObscuredShort xft(int16_t a, int16_t b);  // RVA: 0x6B9D80
        static int16_t xfu();  // RVA: 0x6B9DE0
        int16_t xfv(int16_t a);  // RVA: 0x6B9DF0
        void xfw(int16_t a, int16_t b);  // RVA: 0x6B9E80
        int16_t xfx();  // RVA: 0x6B9ED0
        void wpb();  // RVA: 0x6B9B10
        static bool xfy(int16_t a, int32_t b);  // RVA: 0x6B9EE0
        void xfz(int16_t a);  // RVA: 0x6B9EF0
        int16_t xga();  // RVA: 0x6B9F20
        bool xgb();  // RVA: 0x6BA040
        static void xgc(int16_t a);  // RVA: 0x63D9D0
        void xgd();  // RVA: 0x63D9D0
        static int16_t xge(int16_t a, int16_t b);  // RVA: 0x6ABC50
        static int16_t xgf(int16_t a, int16_t b);  // RVA: 0x6ABC50
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    class ObscuredString
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Char[][] cryptoKey; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Char[][] hiddenChars; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* bmsp; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Il2CppString* currentCryptoKey; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Byte[][] hiddenValue; // 0x0038
    
        // Methods
        int32_t xgg();  // RVA: 0x6BA7F0
        wchar_t get_Item(int32_t index);  // RVA: 0x6BA670
        static ObscuredString* op_Implicit(Il2CppString* value);  // RVA: 0x6BA6F0
        static Il2CppString* op_Implicit(ObscuredString* value);  // RVA: 0x6BA760
        static bool xgh(ObscuredString* a, ObscuredString* b);  // RVA: 0x6BA810
        static bool xgi(ObscuredString* a, ObscuredString* b);  // RVA: 0x6BA950
        Il2CppString* xgj(int32_t a);  // RVA: 0x6BA970
        Il2CppString* xgk(int32_t a, int32_t b);  // RVA: 0x6BA9D0
        bool xgl(Il2CppString* a, StringComparison b);  // RVA: 0x6BAA20
        bool xgm(Il2CppString* a, StringComparison b);  // RVA: 0x6BAA70
        int32_t GetHashCode();  // RVA: 0x6BA380
        Il2CppString* ToString();  // RVA: 0x6BA500
        static bool xgn(ObscuredString* a);  // RVA: 0x6BAAC0
        static bool xgo(ObscuredString* a);  // RVA: 0x6BAB10
        bool Equals(Il2CppObject* other);  // RVA: 0x6BA2A0
        bool Equals(ObscuredString* obj);  // RVA: 0x6BA190
        bool xgp(ObscuredString* a, StringComparison b);  // RVA: 0x6BAC10
        bool Equals(Il2CppString* other);  // RVA: 0x6BA150
        int32_t CompareTo(ObscuredString* other);  // RVA: 0x6BA060
        int32_t CompareTo(Il2CppString* other);  // RVA: 0x6BA110
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6BA0D0
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6BA3C0
        int32_t wpa();  // RVA: 0x674720
        void .ctor();  // RVA: 0x6BA520
        void .ctor(Il2CppString* value);  // RVA: 0x6BA560
        static Char[][] xgq();  // RVA: 0x6BAC90
        static Char[][] xgr(Il2CppString* a, Il2CppString* b);  // RVA: 0x6BACF0
        static Char[][] xgs(Il2CppString* a, Char[][] b);  // RVA: 0x6BAD50
        static Char[][] xgt(Char[][] a, Char[][] b);  // RVA: 0x6BAD80
        static Il2CppString* xgu(Char[][] a, Il2CppString* b);  // RVA: 0x6BAD90
        static Il2CppString* xgv(Char[][] a, Char[][] b);  // RVA: 0x6BADE0
        static ObscuredString* xgw(Char[][] a, Char[][] b);  // RVA: 0x6BAE10
        static Char[][] xgx();  // RVA: 0x6BAEA0
        static void xgy(Char[][] a);  // RVA: 0x6BAF00
        Char[][] xgz(Char[][] a);  // RVA: 0x6BAF10
        void xha(Char[][] a, Char[][] b);  // RVA: 0x6BAFF0
        Il2CppString* xhb();  // RVA: 0x6BA500
        Char[][] xhc();  // RVA: 0x6BB080
        void wpb();  // RVA: 0x6BA790
        static bool xhd(Char[][] a, int32_t b);  // RVA: 0x6BB090
        void xhe(Char[][] a);  // RVA: 0x6BB0A0
        static Char[][] xhf(Char[][] a, Char[][] b);  // RVA: 0x6BB0F0
        static wchar_t xhg(Char[][] a, Char[][] b, int32_t c);  // RVA: 0x6BB260
        static bool xhh(ObscuredString* a);  // RVA: 0x6BAB10
        Il2CppString* xhi();  // RVA: 0x6BA500
        Char[][] xhj();  // RVA: 0x6BB2B0
        bool xhk();  // RVA: 0x6BB5D0
        bool xhl(Char[][] a, Il2CppString* b);  // RVA: 0x6BB600
        static void xhm(Il2CppString* a);  // RVA: 0x63D9D0
        void xhn();  // RVA: 0x63D9D0
        static Il2CppString* xho(Il2CppString* a);  // RVA: 0x6BB760
        static Il2CppString* xhp(Il2CppString* a, Il2CppString* b);  // RVA: 0x6BB7A0
        Il2CppString* xhq();  // RVA: 0x6BB7B0
        void xhr(Il2CppString* a);  // RVA: 0x63D9D0
        static ObscuredString* xhs(Il2CppString* a, Il2CppString* b);  // RVA: 0x6BB7F0
        void xht(Il2CppString* a, Il2CppString* b);  // RVA: 0x6BB950
        static Char[][] xhu(Char[][] a);  // RVA: 0x6BBA60
        static Il2CppString* xhv(Il2CppString* a, Il2CppString* b);  // RVA: 0x6BBA80
        static Il2CppString* xhw(Byte[][] a);  // RVA: 0x6BBC50
        static Byte[][] xhx(Il2CppString* a);  // RVA: 0x6BBCE0
        static bool xhy(Char[][] a, Char[][] b);  // RVA: 0x6BBD70
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredUInt
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint32_t hiddenValue; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        uint32_t currentCryptoKey; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        uint32_t fakeValue; // 0x001C
    
        // Methods
        static ObscuredUInt op_Implicit(uint32_t value);  // RVA: 0x6B6380
        static uint32_t op_Implicit(ObscuredUInt value);  // RVA: 0x6BC120
        static ObscuredInt xhz(ObscuredUInt a);  // RVA: 0x6BC170
        static ObscuredUInt xia(ObscuredUInt a);  // RVA: 0x6BC1E0
        static ObscuredUInt xib(ObscuredUInt a);  // RVA: 0x6BC250
        static ObscuredUInt xic(ObscuredUInt a, int32_t b);  // RVA: 0x6BC2C0
        int32_t GetHashCode();  // RVA: 0x6BC070
        Il2CppString* ToString();  // RVA: 0x6BC0A0
        Il2CppString* xid(Il2CppString* a);  // RVA: 0x6BC330
        Il2CppString* xie(IFormatProvider* a);  // RVA: 0x6BC370
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6BC0D0
        bool Equals(Il2CppObject* other);  // RVA: 0x6BBED0
        bool Equals(ObscuredUInt obj);  // RVA: 0x6BC010
        bool Equals(uint32_t other);  // RVA: 0x6BBEA0
        int32_t CompareTo(ObscuredUInt other);  // RVA: 0x6BBE30
        int32_t CompareTo(uint32_t other);  // RVA: 0x6BBE70
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6BBDF0
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6B6150
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(uint32_t value);  // RVA: 0x6B6220
        static uint32_t xif(uint32_t a, uint32_t b);  // RVA: 0x6B66B0
        static uint32_t xig(uint32_t a, uint32_t b);  // RVA: 0x6B66C0
        static ObscuredUInt xih(uint32_t a, uint32_t b);  // RVA: 0x6B66D0
        static uint32_t xii();  // RVA: 0x6A9920
        uint32_t xij(uint32_t a);  // RVA: 0x6B6720
        void xik(uint32_t a, uint32_t b);  // RVA: 0x6B6790
        uint32_t xil();  // RVA: 0x6BC3B0
        void wpb();  // RVA: 0x6BC130
        static bool xim(uint32_t a, int32_t b);  // RVA: 0x6B67E0
        void xin(uint32_t a);  // RVA: 0x6B67F0
        uint32_t xio();  // RVA: 0x6BC3C0
        bool xip();  // RVA: 0x6B4980
        static void xiq(uint32_t a);  // RVA: 0x63D9D0
        void xir();  // RVA: 0x63D9D0
        static uint32_t xis(uint32_t a, uint32_t b);  // RVA: 0x6B6910
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredULong
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        uint64_t hiddenValue; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        uint64_t currentCryptoKey; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        uint64_t fakeValue; // 0x0028
    
        // Methods
        static ObscuredULong op_Implicit(uint64_t value);  // RVA: 0x6BC880
        static uint64_t op_Implicit(ObscuredULong value);  // RVA: 0x6BC870
        static ObscuredULong xit(ObscuredULong a);  // RVA: 0x6BC920
        static ObscuredULong xiu(ObscuredULong a);  // RVA: 0x6BC9B0
        static ObscuredULong xiv(ObscuredULong a, bool b);  // RVA: 0x6BCA40
        int32_t GetHashCode();  // RVA: 0x6BC760
        Il2CppString* ToString();  // RVA: 0x6BC7E0
        Il2CppString* xiw(Il2CppString* a);  // RVA: 0x6BCAC0
        Il2CppString* xix(IFormatProvider* a);  // RVA: 0x6BCB00
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6BC790
        bool Equals(Il2CppObject* other);  // RVA: 0x6BC570
        bool Equals(ObscuredULong obj);  // RVA: 0x6BC700
        bool Equals(uint64_t other);  // RVA: 0x6BC6C0
        int32_t CompareTo(ObscuredULong other);  // RVA: 0x6BC530
        int32_t CompareTo(uint64_t other);  // RVA: 0x6BC4B0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6BC4F0
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6B6C00
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(uint64_t value);  // RVA: 0x6BC810
        static uint64_t xiy(uint64_t a, uint64_t b);  // RVA: 0x6AF490
        static uint64_t xiz(uint64_t a, uint64_t b);  // RVA: 0x6AF4A0
        static ObscuredULong xja(uint64_t a, uint64_t b);  // RVA: 0x6BCB40
        static uint64_t xjb();  // RVA: 0x6AF160
        uint64_t xjc(uint64_t a);  // RVA: 0x6BCB90
        void xjd(uint64_t a, uint64_t b);  // RVA: 0x6BCC20
        uint64_t xje();  // RVA: 0x6BCC70
        void wpb();  // RVA: 0x6BC8E0
        static bool xjf(uint64_t a, int32_t b);  // RVA: 0x6BCC80
        void xjg(uint64_t a);  // RVA: 0x6BCC90
        uint64_t xjh();  // RVA: 0x6BCCC0
        bool xji();  // RVA: 0x6AF6E0
        static void xjj(uint64_t a);  // RVA: 0x63D9D0
        void xjk();  // RVA: 0x63D9D0
        static uint64_t xjl(uint64_t a, uint64_t b);  // RVA: 0x6B7250
    };

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredUShort
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        uint16_t hiddenValue; // 0x0014
        uint8_t pad_0015[0x1]; // 0x0015
        uint16_t currentCryptoKey; // 0x0016
        uint8_t pad_0017[0x1]; // 0x0017
        uint16_t fakeValue; // 0x0018
    
        // Methods
        static ObscuredUShort op_Implicit(uint16_t value);  // RVA: 0x6BD1D0
        static uint16_t op_Implicit(ObscuredUShort value);  // RVA: 0x6BD1C0
        static ObscuredUShort xjm(ObscuredUShort a);  // RVA: 0x6BD280
        static ObscuredUShort xjn(ObscuredUShort a);  // RVA: 0x6BD310
        static ObscuredUShort xjo(ObscuredUShort a, int32_t b);  // RVA: 0x6BD3A0
        int32_t GetHashCode();  // RVA: 0x6BD0B0
        Il2CppString* ToString();  // RVA: 0x6BD0E0
        Il2CppString* xjp(Il2CppString* a);  // RVA: 0x6BD420
        Il2CppString* xjq(IFormatProvider* a);  // RVA: 0x6BD460
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6BD110
        bool Equals(Il2CppObject* other);  // RVA: 0x6BCF40
        bool Equals(ObscuredUShort obj);  // RVA: 0x6BCEA0
        bool Equals(uint16_t other);  // RVA: 0x6BCF00
        int32_t CompareTo(ObscuredUShort other);  // RVA: 0x6BCE60
        int32_t CompareTo(uint16_t other);  // RVA: 0x6BCDE0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6BCE20
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6B9970
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(uint16_t value);  // RVA: 0x6BD160
        static uint16_t xjr(uint16_t a, uint16_t b);  // RVA: 0x6AB8E0
        static uint16_t xjs(uint16_t a, uint16_t b);  // RVA: 0x6AB8F0
        static ObscuredUShort xjt(uint16_t a, uint16_t b);  // RVA: 0x6AB900
        static uint16_t xju();  // RVA: 0x6BD4A0
        uint16_t xjv(uint16_t a);  // RVA: 0x6BD4B0
        void xjw(uint16_t a, uint16_t b);  // RVA: 0x6ABA20
        uint16_t xjx();  // RVA: 0x6BD530
        void wpb();  // RVA: 0x6BD230
        static bool xjy(uint16_t a, int32_t b);  // RVA: 0x6ABA80
        void xjz(uint16_t a);  // RVA: 0x6ABA90
        uint16_t xka();  // RVA: 0x6BD540
        bool xkb();  // RVA: 0x6BA040
        static void xkc(uint16_t a);  // RVA: 0x63D9D0
        void xkd();  // RVA: 0x63D9D0
        static uint16_t xke(uint16_t a, uint16_t b);  // RVA: 0x6ABC50
        static uint16_t xkf(uint16_t a, uint16_t b);  // RVA: 0x6ABC50
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct RawEncryptedVector2
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t x; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t y; // 0x0014

    // Methods
    bool Equals(RawEncryptedVector2 other);  // RVA: 0x6C42A0
    bool Equals(Il2CppObject* obj);  // RVA: 0x6C42D0
    int32_t GetHashCode();  // RVA: 0x6C42C0
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredVector2
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        RawEncryptedVector2 hiddenValue; // 0x0014
        uint8_t pad_0015[0x7]; // 0x0015
        int32_t currentCryptoKey; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        Vector2 fakeValue; // 0x0020
    
        // Methods
        static ObscuredVector2 op_Implicit(Vector2 value);  // RVA: 0x6BF110
        static Vector2 op_Implicit(ObscuredVector2 value);  // RVA: 0x6BF100
        static Vector3 op_Implicit(ObscuredVector2 value);  // RVA: 0x6BF140
        static ObscuredVector2 xkg(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6BF2B0
        static ObscuredVector2 xkh(Vector2 a, ObscuredVector2 b);  // RVA: 0x6BF340
        static ObscuredVector2 xki(ObscuredVector2 a, Vector2 b);  // RVA: 0x6BF3C0
        static ObscuredVector2 xkj(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6BF440
        static ObscuredVector2 xkk(Vector2 a, ObscuredVector2 b);  // RVA: 0x6BF4D0
        static ObscuredVector2 xkl(ObscuredVector2 a, Vector2 b);  // RVA: 0x6BF550
        static ObscuredVector2 xkm(ObscuredVector2 a);  // RVA: 0x6BF5D0
        static ObscuredVector2 xkn(ObscuredVector2 a, float b);  // RVA: 0x6BF650
        static ObscuredVector2 xko(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6BF6D0
        static ObscuredVector2 xkp(float a, ObscuredVector2 b);  // RVA: 0x6BF760
        static ObscuredVector2 xkq(ObscuredVector2 a, float b);  // RVA: 0x6BF7E0
        static bool xkr(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6BF860
        static bool xks(Vector2 a, ObscuredVector2 b);  // RVA: 0x6BF8C0
        static bool xkt(ObscuredVector2 a, Vector2 b);  // RVA: 0x6BF920
        static bool xku(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6BF970
        static bool xkv(Vector2 a, ObscuredVector2 b);  // RVA: 0x6BF9D0
        static bool xkw(ObscuredVector2 a, Vector2 b);  // RVA: 0x6BFA30
        bool Equals(Il2CppObject* other);  // RVA: 0x6BECB0
        bool Equals(ObscuredVector2 other);  // RVA: 0x6BEBD0
        bool Equals(Vector2 other);  // RVA: 0x6BEC60
        int32_t GetHashCode();  // RVA: 0x6BEE90
        Il2CppString* ToString();  // RVA: 0x6BEF40
        Il2CppString* xkx(Il2CppString* a);  // RVA: 0x6BFA80
        void xky();  // RVA: 0x6BFAC0
        Vector2 xkz();  // RVA: 0x6BFB90
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6BEED0
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(Vector2 value);  // RVA: 0x6BEF80
        void .ctor(float x, float y);  // RVA: 0x6BEF70
        float xla();  // RVA: 0x6BFBD0
        void xlb(float a);  // RVA: 0x6BFBF0
        float xlc();  // RVA: 0x6BFC60
        void xld(float a);  // RVA: 0x6BFC80
        float get_Item(int32_t index);  // RVA: 0x6BF050
        void set_Item(int32_t index, float value);  // RVA: 0x6BF180
        static RawEncryptedVector2 xle(Vector2 a, int32_t b);  // RVA: 0x6BFCF0
        static RawEncryptedVector2 xlf(float a, float b, int32_t c);  // RVA: 0x6BFD50
        static Vector2 xlg(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6BFDB0
        static ObscuredVector2 xlh(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6BFE10
        static int32_t xli();  // RVA: 0x6A9920
        static bool xlj(Vector2 a, Vector2 b);  // RVA: 0x6BFE40
        static bool xlk(float a, float b);  // RVA: 0x6BFE90
        RawEncryptedVector2 xll(int32_t a);  // RVA: 0x6BFF50
        void xlm(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6BFFD0
        Vector2 xln();  // RVA: 0x6C0080
        void wpb();  // RVA: 0x6BF270
        static bool xlo(Vector2 a, int32_t b);  // RVA: 0x6C0090
        void xlp(Vector2 a);  // RVA: 0x6C00A0
        Vector2 xlq();  // RVA: 0x6C0130
        bool xlr();  // RVA: 0x6BEB90
        static void xls(int32_t a);  // RVA: 0x63D9D0
        void xlt();  // RVA: 0x63D9D0
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct RawEncryptedVector2Int
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t x; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t y; // 0x0014

    // Methods
    bool Equals(RawEncryptedVector2Int other);  // RVA: 0x6C42A0
    bool Equals(Il2CppObject* obj);  // RVA: 0x6C4210
    int32_t GetHashCode();  // RVA: 0x6C42C0
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredVector2Int
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        RawEncryptedVector2Int hiddenValue; // 0x0014
        uint8_t pad_0015[0x7]; // 0x0015
        int32_t currentCryptoKey; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        Vector2Int fakeValue; // 0x0020
    
        // Methods
        static ObscuredVector2Int op_Implicit(Vector2Int value);  // RVA: 0x6BDD10
        static Vector2Int op_Implicit(ObscuredVector2Int value);  // RVA: 0x6BDD90
        static Vector3Int op_Explicit(ObscuredVector2Int v);  // RVA: 0x6BDC90
        static Vector2 op_Implicit(ObscuredVector2Int value);  // RVA: 0x6BDCE0
        static ObscuredVector2Int xlu(ObscuredVector2Int a);  // RVA: 0x6BDEA0
        static ObscuredVector2Int xlv(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6BDF10
        static ObscuredVector2Int xlw(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6BDFA0
        static ObscuredVector2Int xlx(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6BE020
        static ObscuredVector2Int xly(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6BE0B0
        static ObscuredVector2Int xlz(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6BE130
        static ObscuredVector2Int xma(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6BE1B0
        static ObscuredVector2Int xmb(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6BE230
        static ObscuredVector2Int xmc(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6BE2C0
        static ObscuredVector2Int xmd(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6BE340
        static ObscuredVector2Int xme(int32_t a, ObscuredVector2Int b);  // RVA: 0x6BE3C0
        static ObscuredVector2Int xmf(ObscuredVector2Int a, int32_t b);  // RVA: 0x6BE440
        static ObscuredVector2Int xmg(ObscuredVector2Int a, int32_t b);  // RVA: 0x6BE4C0
        static bool xmh(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6BE540
        static bool xmi(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6BE5C0
        bool Equals(Il2CppObject* other);  // RVA: 0x6BD690
        bool Equals(ObscuredVector2Int other);  // RVA: 0x6BD810
        bool Equals(Vector2Int other);  // RVA: 0x6BD650
        int32_t GetHashCode();  // RVA: 0x6BD8A0
        Il2CppString* ToString();  // RVA: 0x6BD940
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6BD8D0
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(Vector2Int value);  // RVA: 0x6BDB80
        void .ctor(int32_t x, int32_t y);  // RVA: 0x6BDAF0
        int32_t xmj();  // RVA: 0x6BE650
        void xmk(int32_t a);  // RVA: 0x6BE660
        int32_t xml();  // RVA: 0x6BE700
        void xmm(int32_t a);  // RVA: 0x6BE720
        int32_t get_Item(int32_t index);  // RVA: 0x6BDBF0
        void set_Item(int32_t index, int32_t value);  // RVA: 0x6BDDA0
        static RawEncryptedVector2Int xmn(Vector2Int a, int32_t b);  // RVA: 0x6BE7C0
        static RawEncryptedVector2Int xmo(int32_t a, int32_t b, int32_t c);  // RVA: 0x6BE7E0
        static Vector2Int xmp(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6BE800
        static ObscuredVector2Int xmq(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6BE820
        static int32_t xmr();  // RVA: 0x6A9920
        RawEncryptedVector2Int xms(int32_t a);  // RVA: 0x6BE890
        void xmt(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6BE930
        Vector2Int xmu();  // RVA: 0x6BE990
        void wpb();  // RVA: 0x6BDE40
        static bool xmv(Vector2Int a, int32_t b);  // RVA: 0x6BE9A0
        void xmw(Vector2Int a);  // RVA: 0x6BE9B0
        Vector2Int xmx();  // RVA: 0x6BEA00
        bool xmy();  // RVA: 0x6BEB90
        static void xmz(int32_t a);  // RVA: 0x63D9D0
        void xna();  // RVA: 0x63D9D0
        static Vector2Int xnb(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6BEBB0
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct RawEncryptedVector3
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t x; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t y; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t z; // 0x0018

    // Methods
    bool Equals(RawEncryptedVector3 other);  // RVA: 0x6C4360
    bool Equals(Il2CppObject* obj);  // RVA: 0x6C4380
    int32_t GetHashCode();  // RVA: 0x6C4430
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredVector3
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        RawEncryptedVector3 hiddenValue; // 0x0014
        uint8_t pad_0015[0xB]; // 0x0015
        int32_t currentCryptoKey; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        Vector3 fakeValue; // 0x0024
    
        // Methods
        static ObscuredVector3 op_Implicit(Vector3 value);  // RVA: 0x6C28C0
        static Vector3 op_Implicit(ObscuredVector3 value);  // RVA: 0x6C2900
        static ObscuredVector3 xnc(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6C2A40
        static ObscuredVector3 xnd(Vector3 a, ObscuredVector3 b);  // RVA: 0x6C2B00
        static ObscuredVector3 xne(ObscuredVector3 a, Vector3 b);  // RVA: 0x6C2BA0
        static ObscuredVector3 xnf(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6C2C50
        static ObscuredVector3 xng(Vector3 a, ObscuredVector3 b);  // RVA: 0x6C2D10
        static ObscuredVector3 xnh(ObscuredVector3 a, Vector3 b);  // RVA: 0x6C2DB0
        static ObscuredVector3 xni(ObscuredVector3 a);  // RVA: 0x6C2E60
        static ObscuredVector3 xnj(ObscuredVector3 a, float b);  // RVA: 0x6C2EE0
        static ObscuredVector3 xnk(float a, ObscuredVector3 b);  // RVA: 0x6C2F70
        static ObscuredVector3 xnl(ObscuredVector3 a, float b);  // RVA: 0x6C3000
        static bool xnm(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6C3090
        static bool xnn(Vector3 a, ObscuredVector3 b);  // RVA: 0x6C3130
        static bool xno(ObscuredVector3 a, Vector3 b);  // RVA: 0x6C31A0
        static bool xnp(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6C3220
        static bool xnq(Vector3 a, ObscuredVector3 b);  // RVA: 0x6C32C0
        static bool xnr(ObscuredVector3 a, Vector3 b);  // RVA: 0x6C3330
        bool Equals(Il2CppObject* other);  // RVA: 0x6C2350
        bool Equals(ObscuredVector3 other);  // RVA: 0x6C2260
        bool Equals(Vector3 other);  // RVA: 0x6C24B0
        int32_t GetHashCode();  // RVA: 0x6C2510
        Il2CppString* ToString();  // RVA: 0x6C2670
        Il2CppString* xns(Il2CppString* a);  // RVA: 0x6C33A0
        void xnt();  // RVA: 0x6C33F0
        Vector3 xnu();  // RVA: 0x6C3570
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6C2590
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(Vector3 value);  // RVA: 0x6C26F0
        void .ctor(float x, float y, float z);  // RVA: 0x6C26C0
        float xnv();  // RVA: 0x6C36A0
        void xnw(float a);  // RVA: 0x6C36C0
        float xnx();  // RVA: 0x6C3740
        void xny(float a);  // RVA: 0x6C3760
        float xnz();  // RVA: 0x6C37E0
        void xoa(float a);  // RVA: 0x6C3800
        float get_Item(int32_t index);  // RVA: 0x6C27F0
        void set_Item(int32_t index, float value);  // RVA: 0x6C2930
        static RawEncryptedVector3 xob(Vector3 a, int32_t b);  // RVA: 0x6C3890
        static RawEncryptedVector3 xoc(float a, float b, float c, int32_t d);  // RVA: 0x6C3930
        static Vector3 xod(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6C39D0
        static ObscuredVector3 xoe(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6C3A60
        static int32_t xof();  // RVA: 0x6A9920
        static bool xog(Vector3 a, Vector3 b);  // RVA: 0x6C3AA0
        static bool xoh(float a, float b);  // RVA: 0x6C3B10
        RawEncryptedVector3 xoi(int32_t a);  // RVA: 0x6C3BD0
        void xoj(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6C3C80
        Vector3 xok();  // RVA: 0x6C2900
        void wpb();  // RVA: 0x6C29E0
        static bool xol(Vector3 a, int32_t b);  // RVA: 0x6C3D80
        void xom(Vector3 a);  // RVA: 0x6C3DB0
        Vector3 xon();  // RVA: 0x6C3E80
        bool xoo();  // RVA: 0x6C2210
        static void xop(int32_t a);  // RVA: 0x63D9D0
        void xoq();  // RVA: 0x63D9D0
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
struct RawEncryptedVector3Int
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t x; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    int32_t y; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    int32_t z; // 0x0018

    // Methods
    bool Equals(RawEncryptedVector3Int other);  // RVA: 0x6C4360
    bool Equals(Il2CppObject* obj);  // RVA: 0x6CB4C0
    int32_t GetHashCode();  // RVA: 0x6C4430
};

namespace CodeStage.AntiCheat.ObscuredTypes
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes
    struct ObscuredVector3Int
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hash; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        RawEncryptedVector3Int hiddenValue; // 0x0014
        uint8_t pad_0015[0xB]; // 0x0015
        int32_t currentCryptoKey; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        Vector3Int fakeValue; // 0x0024
    
        // Methods
        static ObscuredVector3Int op_Implicit(Vector3Int value);  // RVA: 0x6C09B0
        static Vector3Int op_Implicit(ObscuredVector3Int value);  // RVA: 0x6C09F0
        static Vector2Int xor(ObscuredVector3Int a);  // RVA: 0x6C0B70
        static Vector3 op_Implicit(ObscuredVector3Int value);  // RVA: 0x6C0950
        static ObscuredVector3Int xos(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6C0BB0
        static ObscuredVector3Int xot(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6C0CC0
        static ObscuredVector3Int xou(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6C0DD0
        static ObscuredVector3Int xov(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6C0ED0
        static ObscuredVector3Int xow(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6C0FE0
        static ObscuredVector3Int xox(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6C10F0
        static ObscuredVector3Int xoy(ObscuredVector3Int a, int32_t b);  // RVA: 0x6C11F0
        static ObscuredVector3Int xoz(int32_t a, ObscuredVector3Int b);  // RVA: 0x6C1300
        static ObscuredVector3Int xpa(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6C1410
        static ObscuredVector3Int xpb(ObscuredVector3Int a, int32_t b);  // RVA: 0x6C14C0
        static bool xpc(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6C1550
        static bool xpd(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6C15E0
        static bool xpe(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6C1650
        static bool xpf(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6C16B0
        static bool xpg(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6C1740
        static bool xph(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6C17B0
        bool Equals(Il2CppObject* other);  // RVA: 0x6C0430
        bool Equals(ObscuredVector3Int other);  // RVA: 0x6C0350
        bool Equals(Vector3Int other);  // RVA: 0x6C0580
        int32_t GetHashCode();  // RVA: 0x6C05F0
        Il2CppString* ToString();  // RVA: 0x6C0720
        Il2CppString* xpi(Il2CppString* a);  // RVA: 0x6C1820
        void OnBeforeSerialize();  // RVA: 0x63D9D0
        void OnAfterDeserialize();  // RVA: 0x6C0690
        int32_t wpa();  // RVA: 0x6A69E0
        void .ctor(Vector3Int value);  // RVA: 0x6C0760
        void .ctor(int32_t x, int32_t y, int32_t z);  // RVA: 0x6C0830
        int32_t xpj();  // RVA: 0x6C1870
        void xpk(int32_t a);  // RVA: 0x6C18A0
        int32_t xpl();  // RVA: 0x6C1990
        void xpm(int32_t a);  // RVA: 0x6C19C0
        int32_t xpn();  // RVA: 0x6C1AB0
        void xpo(int32_t a);  // RVA: 0x6C1AD0
        int32_t get_Item(int32_t index);  // RVA: 0x6C0860
        void set_Item(int32_t index, int32_t value);  // RVA: 0x6C0A20
        static RawEncryptedVector3Int xpp(Vector3Int a, int32_t b);  // RVA: 0x6C1BC0
        static RawEncryptedVector3Int xpq(int32_t a, int32_t b, int32_t c, int32_t d);  // RVA: 0x6C1C00
        static Vector3Int xpr(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6C1C30
        static ObscuredVector3Int xps(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6C1C60
        static int32_t xpt();  // RVA: 0x6A9920
        RawEncryptedVector3Int xpu(int32_t a);  // RVA: 0x6C1D20
        void xpv(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6C1E30
        Vector3Int xpw();  // RVA: 0x6C09F0
        void wpb();  // RVA: 0x6C0AD0
        static bool xpx(Vector3Int a, int32_t b);  // RVA: 0x6C1EE0
        void xpy(Vector3Int a);  // RVA: 0x6C1F10
        Vector3Int xpz();  // RVA: 0x6C1F90
        bool xqa();  // RVA: 0x6C2210
        static void xqb(int32_t a);  // RVA: 0x63D9D0
        void xqc();  // RVA: 0x63D9D0
        static Vector3Int xqd(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6C2240
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_0;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_1;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_2;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_3;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_4;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_5;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_6;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_7;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_8;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_9;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_10;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_11;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_12;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_13;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_14;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_15;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_16;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_17;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_18;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_19;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_20;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_21;
    // static System.Action<Newtonsoft.Json.JsonWriter,System.Object> <>9__14_22;


    // Methods
    static void .cctor();  // RVA: 0x6D16E0
    void .ctor();  // RVA: 0x628380
    void xqe(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D1830
    void xqf(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D1920
    void xqg(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D19C0
    void xqh(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D1A50
    void xqi(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D1AF0
    void xqj(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D1B90
    void xqk(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D1C50
    void xql(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D1D10
    void xqm(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D1DC0
    void xqn(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D1E60
    void xqo(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D1F20
    void xqp(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D1FC0
    void xqq(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D2060
    void xqr(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D22B0
    void xqs(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D2340
    void xqt(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D23E0
    void xqu(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D2470
    void xqv(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D2510
    void xqw(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D25B0
    void xqx(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D2650
    void xqy(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D2800
    void xqz(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D29A0
    void xra(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6D2BA0
};

namespace CodeStage.AntiCheat.ObscuredTypes.Converters
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes.Converters
    class ObscuredTypesNewtonsoftConverter : public JsonConverter
    {
    public:
        // Static fields
        // static Il2CppString* bmsq;
        // static Il2CppString* bmsr;
        // static Il2CppString* bmss;
        // static Il2CppString* bmst;
    
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.HashSet<System.Type> bmsu; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.Dictionary<System.Type,System.Action<Newtonsoft.Json.JsonWriter,System.Object>> bmsv; // 0x0018
    
        // Methods
        void WriteJson(JsonWriter* writer, Il2CppObject* value, JsonSerializer* serializer);  // RVA: 0x6C8D80
        static void xrb(JsonWriter* a, Quaternion b);  // RVA: 0x6CAAD0
        static void xrc(JsonWriter* a, Vector2 b);  // RVA: 0x6CAC70
        static void xrd(JsonWriter* a, Vector2Int b);  // RVA: 0x6CAD80
        static void xre(JsonWriter* a, Vector3 b);  // RVA: 0x6CAE90
        static void xrf(JsonWriter* a, Vector3Int b);  // RVA: 0x6CAFF0
        Il2CppObject* ReadJson(JsonReader* reader, Type* objectType, Il2CppObject* existingValue, JsonSerializer* serializer);  // RVA: 0x6C6CB0
        bool CanConvert(Type* objectType);  // RVA: 0x6C6C50
        void .ctor();  // RVA: 0x6C9060
        static void .cctor();  // RVA: 0x6C8F20
    };

} // namespace CodeStage.AntiCheat.ObscuredTypes.Converters

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<dbz> <>9__13_0;


    // Methods
    static void .cctor();  // RVA: 0x6D1750
    void .ctor();  // RVA: 0x628380
    int32_t xrg(dbz* a, dbz* b);  // RVA: 0x6D2D90
};

// Namespace: <global>
class dbw
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmsw>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.IReadOnlyList<dbz> <bmsx>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* <bmsy>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    double <bmsz>k__BackingField; // 0x0028

    // Methods
    Il2CppString* xrj();  // RVA: 0x639E40
    Il2CppString* hrh(dbz[][] a);  // RVA: 0x6D8850
    void gaq();  // RVA: 0x6D8320
    bool xrm(Il2CppString* a);  // RVA: 0x6D97F0
    void kxx();  // RVA: 0x6D8F30
    void xrn();  // RVA: 0x6D9970
    void .ctor(Il2CppString* a, dbz[][] b);  // RVA: 0x6D71E0
    void .ctor(Il2CppString* a, dbz[][] b, Il2CppString* c);  // RVA: 0x6D7360
    Il2CppString* xrh();  // RVA: 0x6CB3B0
    bool cmj(Il2CppString* a);  // RVA: 0x6D7900
    double xrk();  // RVA: 0x6D97D0
    void eur();  // RVA: 0x6D7DF0
    System.Collections.Generic.IReadOnlyList<dbz> xri();  // RVA: 0x695920
    void bjx();  // RVA: 0x6D73D0
    Il2CppString* xro(dbz[][] a);  // RVA: 0x6D9EA0
    Il2CppString* cmk(dbz[][] a);  // RVA: 0x6D7A80
    Il2CppString* lln(dbz[][] a);  // RVA: 0x6D9460
    Il2CppString* jtn(dbz[][] a);  // RVA: 0x6D8BC0
    void xrl(double a);  // RVA: 0x6D97E0
};

// Namespace: <global>
class dbx
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmta; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmtb; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dby* bmtc; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x681030
    void xrp();  // RVA: 0x63D9D0
    bool MoveNext();  // RVA: 0x6DA210
    Il2CppObject* xrq();  // RVA: 0x695920
    void xrr();  // RVA: 0x6DA310
    Il2CppObject* xrs();  // RVA: 0x695920
};

// Namespace: <global>
struct <GenerateInternalAsync>d__20
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<dcd> <>t__builder; // 0x0018
    uint8_t pad_0019[0x17]; // 0x0019
    dby* <>4__this; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t maxThreads; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Runtime.CompilerServices.TaskAwaiter<System.Boolean> <>u__1; // 0x0040

    // Methods
    void MoveNext();  // RVA: 0x6CFFE0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6D0280
};

// Namespace: <global>
class dby : public dcy`1
{
public:
    // Static fields
    // static int32_t bmtd;
    // static HashGeneratorResultHandler* bmte;

    uint8_t pad_0000[0x30]; // 0x0000
    dcd* <bmtf>k__BackingField; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    WaitForSeconds* bmtg; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    dcg* bmth; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    SemaphoreSlim* bmti; // 0x0048

    // Methods
    static dce* xrz(int32_t a);  // RVA: 0x6DAEB0
    dce* bdl(int32_t a);  // RVA: 0x6DA440
    bool xsb();  // RVA: 0x6DAF50
    void xrw(dcd* a);  // RVA: 0x6DAE70
    static dce* xry();  // RVA: 0x6DAE80
    static System.Threading.Tasks.Task<dcd> xsa(int32_t a);  // RVA: 0x6DAF00
    static bool xrx();  // RVA: 0x67A4D0
    static void xru(HashGeneratorResultHandler* a);  // RVA: 0x6DADA0
    dcd* xrv();  // RVA: 0x6DAE60
    static dce* njm(int32_t a);  // RVA: 0x6DAC90
    void .ctor();  // RVA: 0x6DA3C0
    IEnumerator* xsg();  // RVA: 0x6DB2E0
    dce* dhf(int32_t a);  // RVA: 0x6DA600
    dce* xsc(int32_t a);  // RVA: 0x6DAF70
    static void xrt(HashGeneratorResultHandler* a);  // RVA: 0x6DACE0
    static System.Threading.Tasks.Task<dcd> ert(int32_t a);  // RVA: 0x6DA7F0
    static bool lea();  // RVA: 0x67A4D0
    dce* xsf(int32_t a);  // RVA: 0x6DB120
    static System.Threading.Tasks.Task<dcd> gqd(int32_t a);  // RVA: 0x6DAA00
    static dce* egn();  // RVA: 0x6DA7C0
    System.Threading.Tasks.Task<dcd> xsd(int32_t a);  // RVA: 0x6DAFC0
    static dce* jkv();  // RVA: 0x6DAA50
    System.Threading.Tasks.Task<dcd> xse(int32_t a);  // RVA: 0x6DB010
    static bool lxr();  // RVA: 0x67A4D0
    void OnDestroy();  // RVA: 0x6DA350
    static System.Threading.Tasks.Task<dcd> kwa(int32_t a);  // RVA: 0x6DAA80
    dce* fjh(int32_t a);  // RVA: 0x6DA840
    dce* moa(int32_t a);  // RVA: 0x6DAAD0
};

// Namespace: <global>
class dbz
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmtj>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* <bmtk>k__BackingField; // 0x0018

    // Methods
    Il2CppString* xsh();  // RVA: 0x6CB3B0
    Il2CppString* xsi();  // RVA: 0x695920
    void .ctor(Il2CppString* a, Stream* b, day<dcf> c);  // RVA: 0x6DB410
    void .ctor(Il2CppString* a, Il2CppString* b);  // RVA: 0x6DB3C0
    Il2CppString* ToString();  // RVA: 0x6DB350
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> <>9__2_0;


    // Methods
    static void .cctor();  // RVA: 0x6D17C0
    void .ctor();  // RVA: 0x628380
    void xsj(FilesProgress a);  // RVA: 0x63D9D0
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    struct FilesProgress
    {
    public:
    
        // Methods
        static FilesProgress xsk(float a, Il2CppString* b);  // RVA: 0x628740
        static FilesProgress None();  // RVA: 0x628740
        static System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> xsl(Il2CppString* a);  // RVA: 0x6C5890
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dca
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool bmtl; // 0x0010
    bool bmtm; // 0x0011
    bool bmtn; // 0x0012
    bool bmto; // 0x0013
    uint8_t pad_0014[0x4]; // 0x0014
    Il2CppString* bmtp; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* bmtq; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bmtr; // 0x0028

    // Methods
    static bool xsn(Il2CppString* a, Il2CppString* b, bool c, bool d);  // RVA: 0x6DC7F0
    Il2CppString* ToString();  // RVA: 0x6DB510
    void .ctor();  // RVA: 0x628380
    bool xsm(Il2CppString* a);  // RVA: 0x6DC4F0
    bool ipg(Il2CppString* a);  // RVA: 0x6DBB20
    bool elf(Il2CppString* a);  // RVA: 0x6DB820
    bool mtr(Il2CppString* a);  // RVA: 0x6DC120
    bool kle(Il2CppString* a);  // RVA: 0x6DBE20
    static bool omq(Il2CppString* a, Il2CppString* b, bool c, bool d);  // RVA: 0x6DC420
    static bool cme(Il2CppString* a, Il2CppString* b, bool c, bool d);  // RVA: 0x6DB750
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    struct FilterGroup
    {
    public:
        // Static fields
        // static FilterGroup Code;
        // static FilterGroup Content;
        // static FilterGroup All;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dcb
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dca[][] <bmts>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    dca[][] <bmtt>k__BackingField; // 0x0018

    // Methods
    bool ltw(Il2CppString* a);  // RVA: 0x6DC940
    bool xsq(Il2CppString* a);  // RVA: 0x6DC940
    bool xst(Il2CppString* a, dca[][] b);  // RVA: 0x6DC8C0
    dca[][] xso();  // RVA: 0x6CB3B0
    bool ksx(Il2CppString* a, dca[][] b);  // RVA: 0x6DC8C0
    dca[][] xsp();  // RVA: 0x695920
    a[][] xsu(a[][] a, a[][] b);  // RVA: 0x42D250
    dcb* xss(dcb* a);  // RVA: 0x6DCA50
    bool xsr(Il2CppString* a);  // RVA: 0x6DC9C0
    bool ofr(Il2CppString* a);  // RVA: 0x6DC940
    void .ctor(dca[][] a, dca[][] b);  // RVA: 0x6DB3C0
    bool bjp(Il2CppString* a, dca[][] b);  // RVA: 0x6DC8C0
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    class FilteringSettings : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        FilterGroup <DefaultGroup>k__BackingField; // 0x0018
    
        // Methods
        FilterGroup get_DefaultGroup();  // RVA: 0x6C59C0
        void set_DefaultGroup(FilterGroup value);  // RVA: 0x6C59D0
        void .ctor();  // RVA: 0x6C59B0
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dcc
{
public:

    // Methods
    static dcb* dzq(bool a);  // RVA: 0x6DCED0
    static dcb* ibh(bool a);  // RVA: 0x6DD500
    static dcb* lgj(bool a);  // RVA: 0x6DD880
    static FilteringSettings* bsc();  // RVA: 0x6DCB20
    static dcb* xta(bool a);  // RVA: 0x6DD4B0
    static dcb* ott(bool a);  // RVA: 0x6DDCF0
    static dcb* xsy(bool a);  // RVA: 0x6DE290
    static FilteringSettings* orq();  // RVA: 0x6DDCC0
    static dcb* mei(bool a);  // RVA: 0x6DDB50
    static FilteringSettings* lec();  // RVA: 0x6DDB20
    static dcb* xtc(bool a);  // RVA: 0x6DEB50
    static dcb* xsx(bool a);  // RVA: 0x6DE150
    static dcb* bsi(bool a);  // RVA: 0x6DCB50
    static FilteringSettings* xsv();  // RVA: 0x6DDFE0
    static dcb* jvd(bool a);  // RVA: 0x6DD8D0
    static dcb* xsw(bool a);  // RVA: 0x6DE010
    static dcb* hwm(bool a);  // RVA: 0x6DD4B0
    static dcb* gbt(bool a);  // RVA: 0x6DD1C0
    static dcb* ior(bool a);  // RVA: 0x6DD880
    static dcb* hus(bool a);  // RVA: 0x6DD4B0
    static dcb* xsz(bool a);  // RVA: 0x6DE580
    static dcb* xtd(bool a);  // RVA: 0x6DD880
    static dcb* jtv(bool a);  // RVA: 0x6DD4B0
    static dcb* xtb(bool a);  // RVA: 0x6DE7D0
    static dcb* nsb(bool a);  // RVA: 0x6DD880
    static FilteringSettings* nht();  // RVA: 0x6DDC90
};

// Namespace: <global>
class dcd
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmtu>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* bmtv; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbw* bmtw; // 0x0020

    // Methods
    void xto();  // RVA: 0x6DF180
    static dcd* xtm(dbw* a);  // RVA: 0x6DF0F0
    static dcd* xtl(Il2CppString* a);  // RVA: 0x6DF080
    Il2CppString* xte();  // RVA: 0x6DF000
    void xti(Il2CppString* a);  // RVA: 0x6DF040
    System.Collections.Generic.IReadOnlyList<dbz> xtg();  // RVA: 0x6DF020
    static dcd* oog(dbw* a);  // RVA: 0x6DEF90
    static dcd* jay(dbw* a);  // RVA: 0x6DEF20
    Il2CppString* xtf();  // RVA: 0x6DF000
    void .ctor();  // RVA: 0x628380
    bool xtn(Il2CppString* a);  // RVA: 0x6DF160
    static dcd* hms(dbw* a);  // RVA: 0x6DEE40
    bool xtj();  // RVA: 0x6DF050
    Il2CppString* xth();  // RVA: 0x6CB3B0
    double xtk();  // RVA: 0x6DF060
    static dcd* ipc(dbw* a);  // RVA: 0x6DEEB0
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    class HashGeneratorResultHandler : public MulticastDelegate
    {
    public:
    
        // Methods
        void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6C59E0
        void Invoke(dcd* result);  // RVA: 0x674920
        IAsyncResult* BeginInvoke(dcd* result, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x674A50
        void EndInvoke(IAsyncResult* result);  // RVA: 0x674910
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dce
{
public:

    // Methods
    dcd* xrv();  // RVA: 0x41C6A0
    bool xsb();  // RVA: 0x4216A0
    dce* xtp(int32_t a);  // RVA: 0x41CCE0
    System.Threading.Tasks.Task<dcd> xtq(int32_t a);  // RVA: 0x41CCE0
};

// Namespace: <global>
class dcf
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SHA1Managed* bmtx; // 0x0010

    // Methods
    void Dispose();  // RVA: 0x6DF1F0
    Byte[][] xtr(Stream* a);  // RVA: 0x6DF280
    Byte[][] ea(Stream* a);  // RVA: 0x6DF280
    Byte[][] xts(Byte[][] a);  // RVA: 0x6DF2A0
    Byte[][] bn(Stream* a);  // RVA: 0x6DF280
    void .ctor();  // RVA: 0x6DF210
    Byte[][] lly(Stream* a);  // RVA: 0x6DF280
    Byte[][] bsz(Stream* a);  // RVA: 0x6DF280
    Byte[][] lyz(Byte[][] a);  // RVA: 0x6DF2A0
    Byte[][] lmy(Byte[][] a);  // RVA: 0x6DF2A0
};

// Namespace: <global>
class dcg
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dcd* <bmty>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool <bmtz>k__BackingField; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t bmua; // 0x001C

    // Methods
    dcd* xtt();  // RVA: 0x6CB3B0
    void xtu(dcd* a);  // RVA: 0x6DF040
    bool xtv();  // RVA: 0x6DF300
    void xtw(bool a);  // RVA: 0x6DF310
    void .ctor(int32_t a);  // RVA: 0x6DF2D0
    void Execute();  // RVA: 0x6DF2C0
    void xtx(dcd* a);  // RVA: 0x6DF320
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<dcf> <>9__1_0;


    // Methods
    static void .cctor();  // RVA: 0x6D1670
    void .ctor();  // RVA: 0x628380
    dcf* xty();  // RVA: 0x6D2DD0
};

// Namespace: <global>
class dch
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dcb* bmub; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Concurrent.ConcurrentBag<dbz> bmuc; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    day<dcf> bmud; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bmue; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t bmuf; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> bmug; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t bmuh; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t bmui; // 0x0044

    // Methods
    void .ctor();  // RVA: 0x628380
    void iwz(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6DF340
    void xtz(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6DF870
};

// Namespace: <global>
class dci
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dcj* bmuj; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* bmuk; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dcb* bmul; // 0x0020

    // Methods
    void nqf();  // RVA: 0x6DFDA0
    void .ctor();  // RVA: 0x628380
    void xua();  // RVA: 0x6DFDA0
};

// Namespace: <global>
class dcj : public dcg
{
public:
    // Static fields
    // static Il2CppObject* bmum;


    // Methods
    static void .cctor();  // RVA: 0x6E0120
    void .ctor(int32_t a);  // RVA: 0x6DF2D0
    static dbw* csr(Il2CppString* a, dcb* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6E01A0
    void xuc(Il2CppString* a, dcb* b);  // RVA: 0x6E0AE0
    static dbw* xub(Il2CppString* a, dcb* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6E0640
    void Execute();  // RVA: 0x6DFDD0
};

namespace CodeStage.AntiCheat.Genuine.Android
{

    // Namespace: CodeStage.AntiCheat.Genuine.Android
    struct AndroidAppSource
    {
    public:
        // Static fields
        // static AndroidAppSource PackageInstaller;
        // static AndroidAppSource GooglePlayStore;
        // static AndroidAppSource AmazonAppStore;
        // static AndroidAppSource HuaweiAppGallery;
        // static AndroidAppSource SamsungGalaxyStore;
        // static AndroidAppSource Other;
        // static AndroidAppSource AccessError;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

} // namespace CodeStage.AntiCheat.Genuine.Android

// Namespace: <global>
class dck
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmun>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    AndroidAppSource <bmuo>k__BackingField; // 0x0018

    // Methods
    AndroidAppSource fmq(Il2CppString* a);  // RVA: 0x6E1190
    AndroidAppSource xue();  // RVA: 0x6C59C0
    AndroidAppSource xuf(Il2CppString* a);  // RVA: 0x6E1330
    Il2CppString* xud();  // RVA: 0x6CB3B0
    AndroidAppSource exe(Il2CppString* a);  // RVA: 0x6E0FF0
    AndroidAppSource ceo(Il2CppString* a);  // RVA: 0x6E0E50
    void .ctor(Il2CppString* a);  // RVA: 0x6E0C70
};

// Namespace: <global>
class dcl
{
public:

    // Methods
    static dck* xug();  // RVA: 0x6E1650
    static dck* ngd();  // RVA: 0x6E15D0
    static dck* cpw();  // RVA: 0x6E14D0
    static bool xuh();  // RVA: 0x6E16D0
    static dck* gxv();  // RVA: 0x6E1550
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class ACTkDetectorBase`1 : public dcy`1
    {
    public:
        // Static fields
        // static Il2CppString* bmup;
    
        bool autoStart; // 0x0000
        bool autoDispose; // 0x0000
        Action* bmuq; // 0x0000
        bool <bmur>k__BackingField; // 0x0000
        UnityEvent* detectionEvent; // 0x0000
        bool detectionEventHasListener; // 0x0000
        bool <bmus>k__BackingField; // 0x0000
        bool <bmut>k__BackingField; // 0x0000
        dcm* <bmuu>k__BackingField; // 0x0000
    
        // Methods
        void xui(Action* a);  // RVA: 0x418A00
        void xuj(Action* a);  // RVA: 0x418A00
        bool xuk();  // RVA: 0x4216A0
        void xul(bool a);  // RVA: 0x41C750
        bool xum();  // RVA: 0x4216A0
        void xun(bool a);  // RVA: 0x41C750
        bool xuo();  // RVA: 0x4216A0
        void xup(bool a);  // RVA: 0x41C750
        dcm* xuq();  // RVA: 0x41C6A0
        void xur(dcm* a);  // RVA: 0x418A00
        void Start();  // RVA: 0x42E240
        void OnEnable();  // RVA: 0x42E240
        void OnDisable();  // RVA: 0x42E240
        void OnApplicationQuit();  // RVA: 0x42E240
        void OnDestroy();  // RVA: 0x42E240
        void xus(dcm* a);  // RVA: 0x418A00
        void xut();  // RVA: 0x42E240
        bool xuu();  // RVA: 0x4216A0
        void xuv();  // RVA: 0x42E240
        void xuw();  // RVA: 0x42E240
        bool xux();  // RVA: 0x4216A0
        bool xuy();  // RVA: 0x4216A0
        void xuz();  // RVA: 0x42E240
        void .ctor();  // RVA: 0x42E240
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcm
{
public:

    // Methods
    Il2CppString* xva();  // RVA: 0x41C6A0
};

// Namespace: <global>
class dcn
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmuv>k__BackingField; // 0x0010

    // Methods
    Il2CppString* xvb();  // RVA: 0x6CB3B0
    void .ctor(Il2CppString* a);  // RVA: 0x6E17B0
    Il2CppString* xva();  // RVA: 0x6E1750
    Il2CppString* ToString();  // RVA: 0x6E1750
};

// Namespace: <global>
class InjectionDetectedEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6C5B10
    void Invoke(Il2CppString* reason);  // RVA: 0x674920
    IAsyncResult* BeginInvoke(Il2CppString* reason, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x674A50
    void EndInvoke(IAsyncResult* result);  // RVA: 0x674910
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class InjectionDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmuw;
    
    
        // Methods
        dcn* xvc();  // RVA: 0x6C5C90
        static InjectionDetector* xvd();  // RVA: 0x6C5D10
        static void xve();  // RVA: 0x6C5D90
        static void xvf(System.Action<System.String> a);  // RVA: 0x6C5E10
        static void xvg();  // RVA: 0x6C5E90
        static void xvh();  // RVA: 0x6C5F10
        void xuz();  // RVA: 0x6C5C10
        void .ctor();  // RVA: 0x6C5BD0
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dco
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Type* <bmux>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool <bmuy>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppObject* <bmuz>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppObject* <bmva>k__BackingField; // 0x0028

    // Methods
    Type* xvi();  // RVA: 0x6CB3B0
    bool xvj();  // RVA: 0x6DF300
    Il2CppObject* xvk();  // RVA: 0x639E40
    Il2CppObject* xvl();  // RVA: 0x685D60
    void .ctor(Type* a, bool b, Il2CppObject* c, Il2CppObject* d);  // RVA: 0x6E18F0
    Il2CppString* xva();  // RVA: 0x6E17F0
    Il2CppString* ToString();  // RVA: 0x6E17F0
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class ObscuredCheatingDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmvb;
    
        uint8_t pad_0000[0x60]; // 0x0000
        bool honeyPot; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        double doubleEpsilon; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        float floatEpsilon; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float vector2Epsilon; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        float vector3Epsilon; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float quaternionEpsilon; // 0x007C
    
        // Methods
        dco* xvm();  // RVA: 0x6C6010
        static ObscuredCheatingDetector* xvn();  // RVA: 0x6C6090
        static ObscuredCheatingDetector* xvo();  // RVA: 0x6C60C0
        static ObscuredCheatingDetector* xvp(Action* a);  // RVA: 0x6C6210
        static void xvq();  // RVA: 0x6C6260
        static void xvr();  // RVA: 0x6C6370
        static bool xvs();  // RVA: 0x6C6480
        static bool xvt();  // RVA: 0x6C6580
        void .ctor();  // RVA: 0x6C5F90
        void xvu();  // RVA: 0x6C66F0
        void xvv(dbu* a, Il2CppObject* b, Il2CppObject* c);  // RVA: 0x6C6880
        void xvw(dbu* a, bool b, Il2CppObject* c, Il2CppObject* d);  // RVA: 0x6C6960
        ObscuredCheatingDetector* xvx(Action* a);  // RVA: 0x6C6A50
        void xuz();  // RVA: 0x6C6000
        static void xvy(b a, bool b, c c, bool d, a e, d f);  // RVA: 0x564160
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcp
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool <bmvc>k__BackingField; // 0x0010
    bool <bmvd>k__BackingField; // 0x0011
    bool <bmve>k__BackingField; // 0x0012
    bool <bmvf>k__BackingField; // 0x0013
    bool <bmvg>k__BackingField; // 0x0014

    // Methods
    bool xvz();  // RVA: 0x675500
    bool xwa();  // RVA: 0x6819C0
    bool xwb();  // RVA: 0x6E1B80
    bool xwc();  // RVA: 0x6E1B90
    bool xwd();  // RVA: 0x6E1BA0
    void .ctor(bool a, bool b, bool c, bool d, bool e);  // RVA: 0x6E1980
    Il2CppString* xva();  // RVA: 0x6E19E0
    Il2CppString* ToString();  // RVA: 0x6E1970
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class SpeedHackDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmvh;
    
        uint8_t pad_0000[0x60]; // 0x0000
        float interval; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float threshold; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        uint8_t maxFalsePositives; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        int32_t coolDown; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        int32_t <TimeJumpThreshold>k__BackingField; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        bool <UseDsp>k__BackingField; // 0x0074
        bool <WatchTimeScale>k__BackingField; // 0x0075
        uint8_t bmvi; // 0x0076
        uint8_t pad_0077[0x1]; // 0x0077
        int32_t bmvj; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        int64_t bmvk; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        int64_t bmvl; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        int64_t bmvm; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        int64_t bmvn; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        bool bmvo; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float bmvp; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        bool bmvq; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        double bmvr; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        bool bmvs; // 0x00B8
    
        // Methods
        dcp* xwe();  // RVA: 0x6CBB10
        int32_t get_TimeJumpThreshold();  // RVA: 0x6CBA20
        void set_TimeJumpThreshold(int32_t value);  // RVA: 0x6CBA50
        bool get_UseDsp();  // RVA: 0x6CBA30
        void set_UseDsp(bool value);  // RVA: 0x6CBA60
        bool get_WatchTimeScale();  // RVA: 0x6CBA40
        void set_WatchTimeScale(bool value);  // RVA: 0x6CBA70
        static SpeedHackDetector* xwf();  // RVA: 0x6CBB90
        static SpeedHackDetector* xwg();  // RVA: 0x6CBBC0
        static SpeedHackDetector* xwh(Action* a);  // RVA: 0x6CBE30
        static SpeedHackDetector* xwi(Action* a, float b);  // RVA: 0x6CBF50
        static SpeedHackDetector* xwj(Action* a, float b, uint8_t c);  // RVA: 0x6CC040
        static SpeedHackDetector* xwk(Action* a, float b, uint8_t c, int32_t d);  // RVA: 0x6CC100
        static void xwl();  // RVA: 0x6CC190
        static void xwm();  // RVA: 0x6CC2A0
        static void xwn(float a);  // RVA: 0x6CC3B0
        static void xwo(float a);  // RVA: 0x6CC510
        static void xwp();  // RVA: 0x6CC650
        static void xwq();  // RVA: 0x6CC780
        void xwr();  // RVA: 0x6CC8A0
        void .ctor();  // RVA: 0x6CB9A0
        void OnApplicationPause(bool pause);  // RVA: 0x6CB570
        void Update();  // RVA: 0x6CB600
        SpeedHackDetector* xws(Action* a, float b, uint8_t c, int32_t d);  // RVA: 0x6CC990
        void xuz();  // RVA: 0x6CBAE0
        void xuv();  // RVA: 0x6CBA80
        bool xwt(int64_t a, int64_t b, int64_t c);  // RVA: 0x6CCC00
        void xwu(float a);  // RVA: 0x6CCCC0
        bool xwv();  // RVA: 0x6CCD10
        void xww(float a);  // RVA: 0x6CCDB0
        void xwx();  // RVA: 0x6CCDF0
        void xwy();  // RVA: 0x6CCE10
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcq
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    CheckResult <bmvt>k__BackingField; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    ErrorKind <bmvu>k__BackingField; // 0x0014

    // Methods
    CheckResult xwz();  // RVA: 0x674720
    ErrorKind xxa();  // RVA: 0x6E1D00
    void .ctor(CheckResult a, ErrorKind b);  // RVA: 0x6E1CC0
    Il2CppString* xva();  // RVA: 0x6E1BB0
    Il2CppString* ToString();  // RVA: 0x6E1BB0
};

// Namespace: <global>
class OnlineTimeCallback : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6CB200
    void Invoke(OnlineTimeResult result);  // RVA: 0x6CB1C0
    IAsyncResult* BeginInvoke(OnlineTimeResult result, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6CB140
    void EndInvoke(IAsyncResult* result);  // RVA: 0x674910
};

// Namespace: <global>
class TimeCheatingDetectorEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6CCF10
    void Invoke(CheckResult result, ErrorKind error);  // RVA: 0x6CCF00
    IAsyncResult* BeginInvoke(CheckResult result, ErrorKind error, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6CCE60
    void EndInvoke(IAsyncResult* result);  // RVA: 0x674910
};

// Namespace: <global>
struct OnlineTimeResult
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* error; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int64_t errorResponseCode; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    double onlineSecondsUtc; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    DateTime onlineDateTimeUtc; // 0x0030

    // Methods
    bool xxb();  // RVA: 0x674C50
    Il2CppString* xxc();  // RVA: 0x674C60
    int64_t xxd();  // RVA: 0x6CB3B0
    double xxe();  // RVA: 0x6CB3C0
    DateTime xxf();  // RVA: 0x639E40
    OnlineTimeResult xxg(double a, DateTime b);  // RVA: 0x6CB3D0
    OnlineTimeResult xxh(Il2CppString* a, int64_t b);  // RVA: 0x6CB450
    Il2CppString* ToString();  // RVA: 0x6CB2B0
};

// Namespace: <global>
struct CheckResult
{
public:
    // Static fields
    // static CheckResult Unknown;
    // static CheckResult CheckPassed;
    // static CheckResult WrongTimeDetected;
    // static CheckResult CheatDetected;
    // static CheckResult Error;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct ErrorKind
{
public:
    // Static fields
    // static ErrorKind NoError;
    // static ErrorKind IncorrectUri;
    // static ErrorKind OnlineTimeError;
    // static ErrorKind NotStarted;
    // static ErrorKind AlreadyCheckingForCheat;
    // static ErrorKind Unknown;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
struct RequestMethod
{
public:
    // Static fields
    // static RequestMethod Head;
    // static RequestMethod Get;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class dcr
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmvv; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmvw; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TimeCheatingDetector* bmvx; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x681030
    void xxi();  // RVA: 0x63D9D0
    bool MoveNext();  // RVA: 0x6E1D10
    Il2CppObject* xxj();  // RVA: 0x695920
    void xxk();  // RVA: 0x6E2130
    Il2CppObject* xxl();  // RVA: 0x695920
};

// Namespace: <global>
struct <ForceCheckAwaitable>d__77
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    UnityEngine.Awaitable.AwaitableAsyncMethodBuilder<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> <>t__builder; // 0x0018
    uint8_t pad_0019[0xF]; // 0x0019
    TimeCheatingDetector* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Awaiter <>u__1; // 0x0030

    // Methods
    void MoveNext();  // RVA: 0x6CF9A0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6CFC30
};

// Namespace: <global>
class dcs
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmvy; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmvz; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TimeCheatingDetector* bmwa; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x681030
    void xxm();  // RVA: 0x63D9D0
    bool MoveNext();  // RVA: 0x6E2170
    Il2CppObject* xxn();  // RVA: 0x695920
    void xxo();  // RVA: 0x6E2280
    Il2CppObject* xxp();  // RVA: 0x695920
};

// Namespace: <global>
struct <ForceCheckTask>d__76
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> <>t__builder; // 0x0018
    uint8_t pad_0019[0x17]; // 0x0019
    TimeCheatingDetector* <>4__this; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    TaskAwaiter <>u__1; // 0x0038

    // Methods
    void MoveNext();  // RVA: 0x6CFC60
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6CFF70
};

// Namespace: <global>
struct <GetOnlineTimeAwaitable>d__67
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    UnityEngine.Awaitable.AwaitableAsyncMethodBuilder<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> <>t__builder; // 0x0018
    uint8_t pad_0019[0xF]; // 0x0019
    CancellationToken cancellationToken; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Uri* uri; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    RequestMethod method; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    OnlineTimeResult <result>5__2; // 0x0040
    uint8_t pad_0041[0x27]; // 0x0041
    Awaiter <>u__1; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    UnityWebRequest* <wr>5__3; // 0x0070

    // Methods
    void MoveNext();  // RVA: 0x6D02F0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6D0BE0
};

// Namespace: <global>
class dct
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmwb; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmwc; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* bmwd; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    OnlineTimeCallback* bmwe; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    RequestMethod bmwf; // 0x0030

    // Methods
    void .ctor(int32_t a);  // RVA: 0x681030
    void xxq();  // RVA: 0x63D9D0
    bool MoveNext();  // RVA: 0x6E22C0
    Il2CppObject* xxr();  // RVA: 0x695920
    void xxs();  // RVA: 0x6E2370
    Il2CppObject* xxt();  // RVA: 0x695920
};

// Namespace: <global>
class dcu
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmwg; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmwh; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Uri* bmwi; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RequestMethod bmwj; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    OnlineTimeCallback* bmwk; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    OnlineTimeResult bmwl; // 0x0038
    uint8_t pad_0039[0x27]; // 0x0039
    UnityWebRequest* bmwm; // 0x0060

    // Methods
    void .ctor(int32_t a);  // RVA: 0x681030
    void xxx();  // RVA: 0x6E27D0
    void xxu();  // RVA: 0x6E26F0
    Il2CppObject* xxw();  // RVA: 0x695920
    void xxv();  // RVA: 0x6E2780
    bool MoveNext();  // RVA: 0x6E23B0
    Il2CppObject* xxy();  // RVA: 0x695920
};

// Namespace: <global>
struct <GetOnlineTimeTask>d__63
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Runtime.CompilerServices.AsyncTaskMethodBuilder<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> <>t__builder; // 0x0018
    uint8_t pad_0019[0x17]; // 0x0019
    CancellationToken cancellationToken; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Uri* uri; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    RequestMethod method; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    OnlineTimeResult <result>5__2; // 0x0048
    uint8_t pad_0049[0x27]; // 0x0049
    TaskAwaiter <>u__1; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    UnityWebRequest* <wr>5__3; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    UnityWebRequestAsyncOperation* <asyncOperation>5__4; // 0x0080

    // Methods
    void MoveNext();  // RVA: 0x6D0C10
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6D1600
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class TimeCheatingDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmwn;
        // static int32_t bmwo;
        // static WaitForEndOfFrame* bmwp;
        // static System.Lazy<dat> <bmwq>k__BackingField;
        // static bool bmwr;
    
        uint8_t pad_0000[0x60]; // 0x0000
        TimeCheatingDetectorEventHandler* bmws; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Il2CppString* requestUrl; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        RequestMethod requestMethod; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        int32_t timeoutSeconds; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        float interval; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        int32_t realCheatThreshold; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        int32_t wrongTimeThreshold; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        bool ignoreSetCorrectTime; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        ErrorKind <bmwt>k__BackingField; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        CheckResult <bmwu>k__BackingField; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        OnlineTimeResult <bmwv>k__BackingField; // 0x0090
        uint8_t pad_0091[0x27]; // 0x0091
        bool <bmww>k__BackingField; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Il2CppString* bmwx; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Uri* bmwy; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        TimeCheatingDetectorEventHandler* bmwz; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        float bmxa; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        bool bmxb; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        double bmxc; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> bmxd; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Action* bmxe; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        int32_t threshold; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Il2CppString* timeServer; // 0x0100
    
        // Methods
        dcq* xxz();  // RVA: 0x6CD480
        static System.Lazy<dat> xya();  // RVA: 0x6CD500
        void xyb(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6CD550
        void xyc(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6CD5F0
        Il2CppString* xyd();  // RVA: 0x6CD690
        void xye(Il2CppString* a);  // RVA: 0x6CD6A0
        ErrorKind xyf();  // RVA: 0x6CD760
        void xyg(ErrorKind a);  // RVA: 0x6CD770
        CheckResult xyh();  // RVA: 0x6CD780
        void xyi(CheckResult a);  // RVA: 0x6CD790
        OnlineTimeResult xyj();  // RVA: 0x6CD7A0
        void xyk(OnlineTimeResult a);  // RVA: 0x6CD7D0
        bool xyl();  // RVA: 0x6CD800
        void xym(bool a);  // RVA: 0x6CD810
        void OnApplicationPause(bool pauseStatus);  // RVA: 0x6CCFC0
        void Update();  // RVA: 0x6CD040
        static TimeCheatingDetector* xyn();  // RVA: 0x6CD820
        static TimeCheatingDetector* xyo(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6CD850
        static TimeCheatingDetector* xyp(float a, TimeCheatingDetectorEventHandler* b);  // RVA: 0x6CDA40
        static void xyq();  // RVA: 0x6CDAA0
        static void xyr();  // RVA: 0x6CDBB0
        static IEnumerator* xys(Il2CppString* a, OnlineTimeCallback* b, RequestMethod c);  // RVA: 0x6CDCC0
        static IEnumerator* xyt(Uri* a, OnlineTimeCallback* b, RequestMethod c);  // RVA: 0x6CDD60
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyu(Il2CppString* a, RequestMethod b);  // RVA: 0x6CDE00
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyv(Il2CppString* a, CancellationToken b, RequestMethod c);  // RVA: 0x6CDED0
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyw(Uri* a, RequestMethod b);  // RVA: 0x6CDF50
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyx(Uri* a, CancellationToken b, RequestMethod c);  // RVA: 0x6CDFE0
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyy(Il2CppString* a, RequestMethod b);  // RVA: 0x6CE130
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyz(Il2CppString* a, CancellationToken b, RequestMethod c);  // RVA: 0x6CE200
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xza(Uri* a, RequestMethod b);  // RVA: 0x6CE280
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xzb(Uri* a, CancellationToken b, RequestMethod c);  // RVA: 0x6CE310
        static dat* xzc();  // RVA: 0x6CE420
        static UnityWebRequest* xzd(Uri* a, RequestMethod b);  // RVA: 0x6CE470
        static void xze(UnityWebRequest* a, OnlineTimeResult b);  // RVA: 0x6CE6B0
        static Uri* xzf(Il2CppString* a);  // RVA: 0x6CE980
        static bool xzg(Il2CppString* a, DateTime b);  // RVA: 0x6CEA50
        void xzh();  // RVA: 0x6CEDC0
        bool xzi();  // RVA: 0x6CEE70
        IEnumerator* xzj();  // RVA: 0x6CEF00
        System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> xzk();  // RVA: 0x6CEF70
        UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> xzl();  // RVA: 0x6CF060
        bool xzm();  // RVA: 0x6CF120
        TimeCheatingDetector* xzn(float a, TimeCheatingDetectorEventHandler* b);  // RVA: 0x6CF250
        bool xzo(TimeCheatingDetector* a);  // RVA: 0x6CF3A0
        void xuz();  // RVA: 0x6CD470
        bool xuu();  // RVA: 0x6CD350
        void xuw();  // RVA: 0x6CD420
        void xuv();  // RVA: 0x6CD3B0
        IEnumerator* xzp();  // RVA: 0x6CF470
        void xzq();  // RVA: 0x6CF4E0
        void xzr(OnlineTimeResult a);  // RVA: 0x6CF620
        void xzs(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x6CF6B0
        void xzt(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x6CF770
        void xzu(Action* a);  // RVA: 0x6CF830
        void xzv(Action* a);  // RVA: 0x6CF8E0
        static double xzw(Il2CppString* a);  // RVA: 0x6CF990
        static void xzx(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x63D9D0
        static void xzy(Action* a, int32_t b);  // RVA: 0x63D9D0
        static void xzz(Action* a, System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> b, int32_t c);  // RVA: 0x63D9D0
        static void yaa(float a, Action* b, System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> c, Action* d);  // RVA: 0x63D9D0
        void .ctor();  // RVA: 0x6CD230
        static void .cctor();  // RVA: 0x6CD110
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcv
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool <bmxf>k__BackingField; // 0x0010
    bool <bmxg>k__BackingField; // 0x0011
    bool <bmxh>k__BackingField; // 0x0012
    bool <bmxi>k__BackingField; // 0x0013

    // Methods
    bool yab();  // RVA: 0x675500
    bool yac();  // RVA: 0x6819C0
    bool yad();  // RVA: 0x6E1B80
    bool yae();  // RVA: 0x6E1B90
    void .ctor(bool a, bool b, bool c, bool d);  // RVA: 0x6E2980
    Il2CppString* xva();  // RVA: 0x6E2810
    Il2CppString* ToString();  // RVA: 0x6E2810
};

// Namespace: <global>
class dcw
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmxj; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmxk; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    WallHackDetector* bmxl; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RenderTexture* bmxm; // 0x0028

    // Methods
    void .ctor(int32_t a);  // RVA: 0x681030
    void yaf();  // RVA: 0x63D9D0
    bool MoveNext();  // RVA: 0x6F5CE0
    Il2CppObject* yag();  // RVA: 0x695920
    void yah();  // RVA: 0x6F6310
    Il2CppObject* yai();  // RVA: 0x695920
};

// Namespace: <global>
class dcx
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmxn; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmxo; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    WallHackDetector* bmxp; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x681030
    void yaj();  // RVA: 0x63D9D0
    bool MoveNext();  // RVA: 0x6F6350
    Il2CppObject* yak();  // RVA: 0x695920
    void yal();  // RVA: 0x6F6410
    Il2CppObject* yam();  // RVA: 0x695920
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class WallHackDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static int32_t bmxu;
        // static float bmxw;
        // static int32_t bmxv;
        // static int32_t bmxt;
        // static Il2CppString* bmxs;
        // static Il2CppString* bmxr;
        // static Il2CppString* bmxq;
        // static Il2CppString* ComponentName;
    
        uint8_t pad_0000[0x60]; // 0x0000
        Vector3 bmxx; // 0x0060
        uint8_t pad_0061[0xF]; // 0x0061
        WaitForEndOfFrame* bmxy; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        bool checkRigidbody; // 0x0078
        bool checkController; // 0x0079
        bool checkWireframe; // 0x007A
        bool checkRaycast; // 0x007B
        int32_t wireframeDelay; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        int32_t raycastDelay; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        Vector3 spawnPosition; // 0x0084
        uint8_t pad_0085[0xB]; // 0x0085
        uint8_t maxFalsePositives; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        GameObject* bmxz; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        GameObject* bmya; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* bmyb; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Camera* bmyc; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        MeshRenderer* bmyd; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        MeshRenderer* bmye; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Color bmyf; // 0x00C8
        uint8_t pad_00C9[0xF]; // 0x00C9
        Color bmyg; // 0x00D8
        uint8_t pad_00D9[0xF]; // 0x00D9
        Shader* bmyh; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Material* bmyi; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        Texture2D* bmyj; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Texture2D* bmyk; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        RenderTexture* bmyl; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        int32_t bmym; // 0x0110
        uint8_t pad_0111[0x3]; // 0x0111
        int32_t bmyn; // 0x0114
        uint8_t pad_0115[0x3]; // 0x0115
        Rigidbody* bmyo; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        CharacterController* bmyp; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        float bmyq; // 0x0128
        uint8_t pad_0129[0x3]; // 0x0129
        uint8_t bmyr; // 0x012C
        uint8_t bmys; // 0x012D
        uint8_t bmyt; // 0x012E
        uint8_t bmyu; // 0x012F
        bool bmyv; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        RaycastHit[][] bmyw; // 0x0138
    
        // Methods
        dcv* yan();  // RVA: 0x6D3FB0
        bool yao();  // RVA: 0x6D4030
        void yap(bool a);  // RVA: 0x6D4040
        bool yaq();  // RVA: 0x6D4110
        void yar(bool a);  // RVA: 0x6D4120
        bool yas();  // RVA: 0x6D41F0
        void yat(bool a);  // RVA: 0x6D4200
        bool yau();  // RVA: 0x6D42D0
        void yav(bool a);  // RVA: 0x6D42E0
        static WallHackDetector* yaw();  // RVA: 0x6D43B0
        static WallHackDetector* yax();  // RVA: 0x6D43E0
        static WallHackDetector* yay(Action* a);  // RVA: 0x6D4610
        static WallHackDetector* yaz(Action* a, Vector3 b);  // RVA: 0x6D4710
        static WallHackDetector* yba(Action* a, Vector3 b, uint8_t c);  // RVA: 0x6D47D0
        static void ybb();  // RVA: 0x6D4860
        static void ybc();  // RVA: 0x6D4970
        void ybd();  // RVA: 0x6D4A80
        void .ctor();  // RVA: 0x6D3C40
        void OnDestroy();  // RVA: 0x6D2F60
        void FixedUpdate();  // RVA: 0x6D2E70
        void Update();  // RVA: 0x6D3AC0
        WallHackDetector* ybe(Action* a, Vector3 b, uint8_t c);  // RVA: 0x6D4B60
        void xuz();  // RVA: 0x6D3F70
        void xuw();  // RVA: 0x6D3DE0
        bool xux();  // RVA: 0x6D3EE0
        void xuv();  // RVA: 0x6D3D70
        void ybf();  // RVA: 0x6D4E00
        IEnumerator* ybg();  // RVA: 0x6D6490
        void StartRigidModule();  // RVA: 0x6D3640
        void StartControllerModule();  // RVA: 0x6D33F0
        void ybh();  // RVA: 0x6D6500
        void ShootWireframeModule();  // RVA: 0x6D3320
        IEnumerator* ybi();  // RVA: 0x6D65D0
        bool ybj(Color a, Color b);  // RVA: 0x6D6640
        void ybk();  // RVA: 0x6D6730
        void ShootRaycastModule();  // RVA: 0x6D3110
        void ybl();  // RVA: 0x6D67F0
        void ybm();  // RVA: 0x6D68E0
        void ybn();  // RVA: 0x6D6980
        void ybo();  // RVA: 0x6D6A10
        void ybp();  // RVA: 0x6D6A70
        void ybq();  // RVA: 0x6D6AD0
        void ybr();  // RVA: 0x6D6C70
        void ybs();  // RVA: 0x6D6E40
        void ybt();  // RVA: 0x6D6F00
        bool ybu();  // RVA: 0x6D6FC0
        static Color32 ybv();  // RVA: 0x6D70A0
        static bool ybw(Color32 a, Color32 b, int32_t c);  // RVA: 0x6D70F0
    };

} // namespace CodeStage.AntiCheat.Detectors

namespace CodeStage.AntiCheat.Common
{

    // Namespace: CodeStage.AntiCheat.Common
    class ACTk
    {
    public:
        // Static fields
        // static Il2CppString* bmyx;
        // static Il2CppString* bmyy;
        // static Il2CppString* bmyz;
        // static Il2CppString* bmza;
        // static Char[][] bmzb;
        // static Il2CppString* bmzc;
        // static Il2CppString* bmzd;
    
    
        // Methods
        static void GetUnityInfo();  // RVA: 0x6E2E20
        static void ybx(Il2CppString* a, Exception* b);  // RVA: 0x6E2FB0
        static void yby(Il2CppString* a, Il2CppString* b, Exception* c);  // RVA: 0x6E3090
        static Il2CppString* ybz(Il2CppString* a, Il2CppString* b, Exception* c);  // RVA: 0x6E3150
        static Il2CppString* yca(Exception* a);  // RVA: 0x6E3360
        static void .cctor();  // RVA: 0x6E2F20
    };

    // Namespace: CodeStage.AntiCheat.Common
    struct ACTkByte16
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t b1; // 0x0010
        uint8_t b2; // 0x0011
        uint8_t b3; // 0x0012
        uint8_t b4; // 0x0013
        uint8_t b5; // 0x0014
        uint8_t b6; // 0x0015
        uint8_t b7; // 0x0016
        uint8_t b8; // 0x0017
        uint8_t b9; // 0x0018
        uint8_t b10; // 0x0019
        uint8_t b11; // 0x001A
        uint8_t b12; // 0x001B
        uint8_t b13; // 0x001C
        uint8_t b14; // 0x001D
        uint8_t b15; // 0x001E
        uint8_t b16; // 0x001F
    
        // Methods
        bool Equals(ACTkByte16 other);  // RVA: 0x6E2B40
        bool Equals(Il2CppObject* obj);  // RVA: 0x6E29E0
        int32_t GetHashCode();  // RVA: 0x6E2BE0
    };

    // Namespace: CodeStage.AntiCheat.Common
    struct ACTkByte4
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t b1; // 0x0010
        uint8_t b2; // 0x0011
        uint8_t b3; // 0x0012
        uint8_t b4; // 0x0013
    
        // Methods
        void ycb();  // RVA: 0x6E2DA0
        void ycc();  // RVA: 0x6E2DB0
    };

    // Namespace: CodeStage.AntiCheat.Common
    struct ACTkByte8
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        uint8_t b1; // 0x0010
        uint8_t b2; // 0x0011
        uint8_t b3; // 0x0012
        uint8_t b4; // 0x0013
        uint8_t b5; // 0x0014
        uint8_t b6; // 0x0015
        uint8_t b7; // 0x0016
        uint8_t b8; // 0x0017
    
        // Methods
        void ycd();  // RVA: 0x6E2DC0
        void yce();  // RVA: 0x6E2DF0
    };

    // Namespace: CodeStage.AntiCheat.Common
    class BackgroundThreadAccessException : public Exception
    {
    public:
        uint8_t pad_0000[0x90]; // 0x0000
        Il2CppString* <bmze>k__BackingField; // 0x0090
    
        // Methods
        Il2CppString* ycf();  // RVA: 0x6E3940
        void .ctor(Il2CppString* apiName);  // RVA: 0x6E3750
    };

    // Namespace: CodeStage.AntiCheat.Common
    class ContainerHolder
    {
    public:
        // Static fields
        // static Il2CppString* bmzf;
        // static GameObject* container;
        // static bool bmzg;
    
    
        // Methods
        static void AfterAssembliesLoaded();  // RVA: 0x6E3950
        static void BeforeSplashScreen();  // RVA: 0x6E3B10
        static void BeforeSceneLoad();  // RVA: 0x6E3A30
        static void ycg(Il2CppString* a);  // RVA: 0x6E3BF0
        static a ych();  // RVA: 0x564160
        static void yci(GameObject* a);  // RVA: 0x6E3DD0
    };

} // namespace CodeStage.AntiCheat.Common

// Namespace: <global>
class dcy`1 : public MonoBehaviour
{
public:
    // Static fields
    // static a <bmzk>k__BackingField;

    bool keepAlive; // 0x0000
    int32_t bmzh; // 0x0000
    bool bmzi; // 0x0000
    Scene bmzj; // 0x0000

    // Methods
    static a ycj();  // RVA: 0x564160
    static void yck(a a);  // RVA: 0x564160
    static a ycl();  // RVA: 0x564160
    void Awake();  // RVA: 0x42E240
    void Start();  // RVA: 0x42E240
    void OnDestroy();  // RVA: 0x42E240
    void wda(Scene a, LoadSceneMode b);
    void ycm(Scene a);
    bool xzo(a a);  // RVA: 0x564160
    void ycn();  // RVA: 0x42E240
    void .ctor();  // RVA: 0x42E240
};

// Namespace: <global>
class dcz
{
public:
    // Static fields
    // static Il2CppString* bmzl;
    // static Il2CppString* bmzm;
    // static System.Nullable<System.Boolean> bmzn;


    // Methods
    static void yco(bool a);  // RVA: 0x6F6AD0
    static Il2CppString* ycp();  // RVA: 0x6F6E70
    static bool ycr();  // RVA: 0x6F7070
    static Il2CppString* ycq();  // RVA: 0x6F6F70
    static Il2CppString* ycs();  // RVA: 0x6F7150
    static Il2CppString* dlp();  // RVA: 0x6F6450
    static bool qs();  // RVA: 0x6F69F0
    static Il2CppString* nxb();  // RVA: 0x6F68F0
    static Il2CppString* gas();  // RVA: 0x6F6550
    static bool gjf();  // RVA: 0x6F6650
    static bool kth();  // RVA: 0x6F6730
    static bool low();  // RVA: 0x6F6810
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=10
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=32
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=8908
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=16301
{
public:
};

// Namespace: <global>
class <PrivateImplementationDetails>
{
public:
    // Static fields
    // static __StaticArrayInitTypeSize=32 2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70;
    // static __StaticArrayInitTypeSize=10 506D5506D226B0865AAC3B4C2D1BD1C1E96B7A1FEBEF4E1EF21BAB4BF2DC0DC1;
    // static __StaticArrayInitTypeSize=8908 612E7B8C70814984DDE70F0FAE08D1F0E0DACA659396C8E67CC62D26C6F52F21;
    // static __StaticArrayInitTypeSize=16301 E9E9A74FDD13D111B1E042A0AE8C8E40E3F5499621A7CDEC03ACF40350023F30;

};

// Namespace: <global>
struct a_
{
public:
};

namespace <PrivateImplementationDetails>{8A9B04D4-5584-4E15-B289-513DD6F24D34}
{

    // Namespace: <PrivateImplementationDetails>{8A9B04D4-5584-4E15-B289-513DD6F24D34}
    class a
    {
    public:
        // Static fields
        // static a_ a_;
        // static Byte[][] a__;
        // static String[][] a___;
    
    
        // Methods
        static Il2CppString* a_(int32_t param0, int32_t param1, int32_t param2);  // RVA: 0x6E40E0
        static Il2CppString* a();  // RVA: 0x6E41D0
        static Il2CppString* b();  // RVA: 0x6E4260
        static Il2CppString* c();  // RVA: 0x6E5340
        static Il2CppString* d();  // RVA: 0x6E6420
        static Il2CppString* e();  // RVA: 0x6E7500
        static Il2CppString* f();  // RVA: 0x6E85E0
        static Il2CppString* g();  // RVA: 0x6E96C0
        static Il2CppString* h();  // RVA: 0x6EA7A0
        static Il2CppString* i();  // RVA: 0x6EB880
        static Il2CppString* j();  // RVA: 0x6EC960
        static Il2CppString* k();  // RVA: 0x6EDA40
        static Il2CppString* l();  // RVA: 0x6EEB20
        static Il2CppString* m();  // RVA: 0x6EFC00
        static Il2CppString* n();  // RVA: 0x6F0CE0
        static Il2CppString* o();  // RVA: 0x6F1DC0
        static Il2CppString* p();  // RVA: 0x6F2EA0
        static Il2CppString* q();  // RVA: 0x6F3F80
        static Il2CppString* r();  // RVA: 0x6F5060
        static Il2CppString* s();  // RVA: 0x6F57E0
        static Il2CppString* t();  // RVA: 0x6F5880
        static Il2CppString* u();  // RVA: 0x6F5920
        static Il2CppString* v();  // RVA: 0x6F59C0
        static Il2CppString* w();  // RVA: 0x6F5A60
        static Il2CppString* x();  // RVA: 0x6F5B00
        static Il2CppString* y();  // RVA: 0x6F5BA0
        static Il2CppString* z();  // RVA: 0x6F5C40
        static Il2CppString* ba();  // RVA: 0x6E4300
        static Il2CppString* bb();  // RVA: 0x6E43A0
        static Il2CppString* bc();  // RVA: 0x6E4440
        static Il2CppString* bd();  // RVA: 0x6E44E0
        static Il2CppString* be();  // RVA: 0x6E4580
        static Il2CppString* bf();  // RVA: 0x6E4620
        static Il2CppString* bg();  // RVA: 0x6E46C0
        static Il2CppString* bh();  // RVA: 0x6E4760
        static Il2CppString* bi();  // RVA: 0x6E4800
        static Il2CppString* bj();  // RVA: 0x6E48A0
        static Il2CppString* bk();  // RVA: 0x6E4940
        static Il2CppString* bl();  // RVA: 0x6E49E0
        static Il2CppString* bm();  // RVA: 0x6E4A80
        static Il2CppString* bn();  // RVA: 0x6E4B20
        static Il2CppString* bo();  // RVA: 0x6E4BC0
        static Il2CppString* bp();  // RVA: 0x6E4C60
        static Il2CppString* bq();  // RVA: 0x6E4D00
        static Il2CppString* br();  // RVA: 0x6E4DA0
        static Il2CppString* bs();  // RVA: 0x6E4E40
        static Il2CppString* bt();  // RVA: 0x6E4EE0
        static Il2CppString* bu();  // RVA: 0x6E4F80
        static Il2CppString* bv();  // RVA: 0x6E5020
        static Il2CppString* bw();  // RVA: 0x6E50C0
        static Il2CppString* bx();  // RVA: 0x6E5160
        static Il2CppString* by();  // RVA: 0x6E5200
        static Il2CppString* bz();  // RVA: 0x6E52A0
        static Il2CppString* ca();  // RVA: 0x6E53E0
        static Il2CppString* cb();  // RVA: 0x6E5480
        static Il2CppString* cc();  // RVA: 0x6E5520
        static Il2CppString* cd();  // RVA: 0x6E55C0
        static Il2CppString* ce();  // RVA: 0x6E5660
        static Il2CppString* cf();  // RVA: 0x6E5700
        static Il2CppString* cg();  // RVA: 0x6E57A0
        static Il2CppString* ch();  // RVA: 0x6E5840
        static Il2CppString* ci();  // RVA: 0x6E58E0
        static Il2CppString* cj();  // RVA: 0x6E5980
        static Il2CppString* ck();  // RVA: 0x6E5A20
        static Il2CppString* cl();  // RVA: 0x6E5AC0
        static Il2CppString* cm();  // RVA: 0x6E5B60
        static Il2CppString* cn();  // RVA: 0x6E5C00
        static Il2CppString* co();  // RVA: 0x6E5CA0
        static Il2CppString* cp();  // RVA: 0x6E5D40
        static Il2CppString* cq();  // RVA: 0x6E5DE0
        static Il2CppString* cr();  // RVA: 0x6E5E80
        static Il2CppString* cs();  // RVA: 0x6E5F20
        static Il2CppString* ct();  // RVA: 0x6E5FC0
        static Il2CppString* cu();  // RVA: 0x6E6060
        static Il2CppString* cv();  // RVA: 0x6E6100
        static Il2CppString* cw();  // RVA: 0x6E61A0
        static Il2CppString* cx();  // RVA: 0x6E6240
        static Il2CppString* cy();  // RVA: 0x6E62E0
        static Il2CppString* cz();  // RVA: 0x6E6380
        static Il2CppString* da();  // RVA: 0x6E64C0
        static Il2CppString* db();  // RVA: 0x6E6560
        static Il2CppString* dc();  // RVA: 0x6E6600
        static Il2CppString* dd();  // RVA: 0x6E66A0
        static Il2CppString* de();  // RVA: 0x6E6740
        static Il2CppString* df();  // RVA: 0x6E67E0
        static Il2CppString* dg();  // RVA: 0x6E6880
        static Il2CppString* dh();  // RVA: 0x6E6920
        static Il2CppString* di();  // RVA: 0x6E69C0
        static Il2CppString* dj();  // RVA: 0x6E6A60
        static Il2CppString* dk();  // RVA: 0x6E6B00
        static Il2CppString* dl();  // RVA: 0x6E6BA0
        static Il2CppString* dm();  // RVA: 0x6E6C40
        static Il2CppString* dn();  // RVA: 0x6E6CE0
        static Il2CppString* do();  // RVA: 0x6E6D80
        static Il2CppString* dp();  // RVA: 0x6E6E20
        static Il2CppString* dq();  // RVA: 0x6E6EC0
        static Il2CppString* dr();  // RVA: 0x6E6F60
        static Il2CppString* ds();  // RVA: 0x6E7000
        static Il2CppString* dt();  // RVA: 0x6E70A0
        static Il2CppString* du();  // RVA: 0x6E7140
        static Il2CppString* dv();  // RVA: 0x6E71E0
        static Il2CppString* dw();  // RVA: 0x6E7280
        static Il2CppString* dx();  // RVA: 0x6E7320
        static Il2CppString* dy();  // RVA: 0x6E73C0
        static Il2CppString* dz();  // RVA: 0x6E7460
        static Il2CppString* ea();  // RVA: 0x6E75A0
        static Il2CppString* eb();  // RVA: 0x6E7640
        static Il2CppString* ec();  // RVA: 0x6E76E0
        static Il2CppString* ed();  // RVA: 0x6E7780
        static Il2CppString* ee();  // RVA: 0x6E7820
        static Il2CppString* ef();  // RVA: 0x6E78C0
        static Il2CppString* eg();  // RVA: 0x6E7960
        static Il2CppString* eh();  // RVA: 0x6E7A00
        static Il2CppString* ei();  // RVA: 0x6E7AA0
        static Il2CppString* ej();  // RVA: 0x6E7B40
        static Il2CppString* ek();  // RVA: 0x6E7BE0
        static Il2CppString* el();  // RVA: 0x6E7C80
        static Il2CppString* em();  // RVA: 0x6E7D20
        static Il2CppString* en();  // RVA: 0x6E7DC0
        static Il2CppString* eo();  // RVA: 0x6E7E60
        static Il2CppString* ep();  // RVA: 0x6E7F00
        static Il2CppString* eq();  // RVA: 0x6E7FA0
        static Il2CppString* er();  // RVA: 0x6E8040
        static Il2CppString* es();  // RVA: 0x6E80E0
        static Il2CppString* et();  // RVA: 0x6E8180
        static Il2CppString* eu();  // RVA: 0x6E8220
        static Il2CppString* ev();  // RVA: 0x6E82C0
        static Il2CppString* ew();  // RVA: 0x6E8360
        static Il2CppString* ex();  // RVA: 0x6E8400
        static Il2CppString* ey();  // RVA: 0x6E84A0
        static Il2CppString* ez();  // RVA: 0x6E8540
        static Il2CppString* fa();  // RVA: 0x6E8680
        static Il2CppString* fb();  // RVA: 0x6E8720
        static Il2CppString* fc();  // RVA: 0x6E87C0
        static Il2CppString* fd();  // RVA: 0x6E8860
        static Il2CppString* fe();  // RVA: 0x6E8900
        static Il2CppString* ff();  // RVA: 0x6E89A0
        static Il2CppString* fg();  // RVA: 0x6E8A40
        static Il2CppString* fh();  // RVA: 0x6E8AE0
        static Il2CppString* fi();  // RVA: 0x6E8B80
        static Il2CppString* fj();  // RVA: 0x6E8C20
        static Il2CppString* fk();  // RVA: 0x6E8CC0
        static Il2CppString* fl();  // RVA: 0x6E8D60
        static Il2CppString* fm();  // RVA: 0x6E8E00
        static Il2CppString* fn();  // RVA: 0x6E8EA0
        static Il2CppString* fo();  // RVA: 0x6E8F40
        static Il2CppString* fp();  // RVA: 0x6E8FE0
        static Il2CppString* fq();  // RVA: 0x6E9080
        static Il2CppString* fr();  // RVA: 0x6E9120
        static Il2CppString* fs();  // RVA: 0x6E91C0
        static Il2CppString* ft();  // RVA: 0x6E9260
        static Il2CppString* fu();  // RVA: 0x6E9300
        static Il2CppString* fv();  // RVA: 0x6E93A0
        static Il2CppString* fw();  // RVA: 0x6E9440
        static Il2CppString* fx();  // RVA: 0x6E94E0
        static Il2CppString* fy();  // RVA: 0x6E9580
        static Il2CppString* fz();  // RVA: 0x6E9620
        static Il2CppString* ga();  // RVA: 0x6E9760
        static Il2CppString* gb();  // RVA: 0x6E9800
        static Il2CppString* gc();  // RVA: 0x6E98A0
        static Il2CppString* gd();  // RVA: 0x6E9940
        static Il2CppString* ge();  // RVA: 0x6E99E0
        static Il2CppString* gf();  // RVA: 0x6E9A80
        static Il2CppString* gg();  // RVA: 0x6E9B20
        static Il2CppString* gh();  // RVA: 0x6E9BC0
        static Il2CppString* gi();  // RVA: 0x6E9C60
        static Il2CppString* gj();  // RVA: 0x6E9D00
        static Il2CppString* gk();  // RVA: 0x6E9DA0
        static Il2CppString* gl();  // RVA: 0x6E9E40
        static Il2CppString* gm();  // RVA: 0x6E9EE0
        static Il2CppString* gn();  // RVA: 0x6E9F80
        static Il2CppString* go();  // RVA: 0x6EA020
        static Il2CppString* gp();  // RVA: 0x6EA0C0
        static Il2CppString* gq();  // RVA: 0x6EA160
        static Il2CppString* gr();  // RVA: 0x6EA200
        static Il2CppString* gs();  // RVA: 0x6EA2A0
        static Il2CppString* gt();  // RVA: 0x6EA340
        static Il2CppString* gu();  // RVA: 0x6EA3E0
        static Il2CppString* gv();  // RVA: 0x6EA480
        static Il2CppString* gw();  // RVA: 0x6EA520
        static Il2CppString* gx();  // RVA: 0x6EA5C0
        static Il2CppString* gy();  // RVA: 0x6EA660
        static Il2CppString* gz();  // RVA: 0x6EA700
        static Il2CppString* ha();  // RVA: 0x6EA840
        static Il2CppString* hb();  // RVA: 0x6EA8E0
        static Il2CppString* hc();  // RVA: 0x6EA980
        static Il2CppString* hd();  // RVA: 0x6EAA20
        static Il2CppString* he();  // RVA: 0x6EAAC0
        static Il2CppString* hf();  // RVA: 0x6EAB60
        static Il2CppString* hg();  // RVA: 0x6EAC00
        static Il2CppString* hh();  // RVA: 0x6EACA0
        static Il2CppString* hi();  // RVA: 0x6EAD40
        static Il2CppString* hj();  // RVA: 0x6EADE0
        static Il2CppString* hk();  // RVA: 0x6EAE80
        static Il2CppString* hl();  // RVA: 0x6EAF20
        static Il2CppString* hm();  // RVA: 0x6EAFC0
        static Il2CppString* hn();  // RVA: 0x6EB060
        static Il2CppString* ho();  // RVA: 0x6EB100
        static Il2CppString* hp();  // RVA: 0x6EB1A0
        static Il2CppString* hq();  // RVA: 0x6EB240
        static Il2CppString* hr();  // RVA: 0x6EB2E0
        static Il2CppString* hs();  // RVA: 0x6EB380
        static Il2CppString* ht();  // RVA: 0x6EB420
        static Il2CppString* hu();  // RVA: 0x6EB4C0
        static Il2CppString* hv();  // RVA: 0x6EB560
        static Il2CppString* hw();  // RVA: 0x6EB600
        static Il2CppString* hx();  // RVA: 0x6EB6A0
        static Il2CppString* hy();  // RVA: 0x6EB740
        static Il2CppString* hz();  // RVA: 0x6EB7E0
        static Il2CppString* ia();  // RVA: 0x6EB920
        static Il2CppString* ib();  // RVA: 0x6EB9C0
        static Il2CppString* ic();  // RVA: 0x6EBA60
        static Il2CppString* id();  // RVA: 0x6EBB00
        static Il2CppString* ie();  // RVA: 0x6EBBA0
        static Il2CppString* if();  // RVA: 0x6EBC40
        static Il2CppString* ig();  // RVA: 0x6EBCE0
        static Il2CppString* ih();  // RVA: 0x6EBD80
        static Il2CppString* ii();  // RVA: 0x6EBE20
        static Il2CppString* ij();  // RVA: 0x6EBEC0
        static Il2CppString* ik();  // RVA: 0x6EBF60
        static Il2CppString* il();  // RVA: 0x6EC000
        static Il2CppString* im();  // RVA: 0x6EC0A0
        static Il2CppString* in();  // RVA: 0x6EC140
        static Il2CppString* io();  // RVA: 0x6EC1E0
        static Il2CppString* ip();  // RVA: 0x6EC280
        static Il2CppString* iq();  // RVA: 0x6EC320
        static Il2CppString* ir();  // RVA: 0x6EC3C0
        static Il2CppString* is();  // RVA: 0x6EC460
        static Il2CppString* it();  // RVA: 0x6EC500
        static Il2CppString* iu();  // RVA: 0x6EC5A0
        static Il2CppString* iv();  // RVA: 0x6EC640
        static Il2CppString* iw();  // RVA: 0x6EC6E0
        static Il2CppString* ix();  // RVA: 0x6EC780
        static Il2CppString* iy();  // RVA: 0x6EC820
        static Il2CppString* iz();  // RVA: 0x6EC8C0
        static Il2CppString* ja();  // RVA: 0x6ECA00
        static Il2CppString* jb();  // RVA: 0x6ECAA0
        static Il2CppString* jc();  // RVA: 0x6ECB40
        static Il2CppString* jd();  // RVA: 0x6ECBE0
        static Il2CppString* je();  // RVA: 0x6ECC80
        static Il2CppString* jf();  // RVA: 0x6ECD20
        static Il2CppString* jg();  // RVA: 0x6ECDC0
        static Il2CppString* jh();  // RVA: 0x6ECE60
        static Il2CppString* ji();  // RVA: 0x6ECF00
        static Il2CppString* jj();  // RVA: 0x6ECFA0
        static Il2CppString* jk();  // RVA: 0x6ED040
        static Il2CppString* jl();  // RVA: 0x6ED0E0
        static Il2CppString* jm();  // RVA: 0x6ED180
        static Il2CppString* jn();  // RVA: 0x6ED220
        static Il2CppString* jo();  // RVA: 0x6ED2C0
        static Il2CppString* jp();  // RVA: 0x6ED360
        static Il2CppString* jq();  // RVA: 0x6ED400
        static Il2CppString* jr();  // RVA: 0x6ED4A0
        static Il2CppString* js();  // RVA: 0x6ED540
        static Il2CppString* jt();  // RVA: 0x6ED5E0
        static Il2CppString* ju();  // RVA: 0x6ED680
        static Il2CppString* jv();  // RVA: 0x6ED720
        static Il2CppString* jw();  // RVA: 0x6ED7C0
        static Il2CppString* jx();  // RVA: 0x6ED860
        static Il2CppString* jy();  // RVA: 0x6ED900
        static Il2CppString* jz();  // RVA: 0x6ED9A0
        static Il2CppString* ka();  // RVA: 0x6EDAE0
        static Il2CppString* kb();  // RVA: 0x6EDB80
        static Il2CppString* kc();  // RVA: 0x6EDC20
        static Il2CppString* kd();  // RVA: 0x6EDCC0
        static Il2CppString* ke();  // RVA: 0x6EDD60
        static Il2CppString* kf();  // RVA: 0x6EDE00
        static Il2CppString* kg();  // RVA: 0x6EDEA0
        static Il2CppString* kh();  // RVA: 0x6EDF40
        static Il2CppString* ki();  // RVA: 0x6EDFE0
        static Il2CppString* kj();  // RVA: 0x6EE080
        static Il2CppString* kk();  // RVA: 0x6EE120
        static Il2CppString* kl();  // RVA: 0x6EE1C0
        static Il2CppString* km();  // RVA: 0x6EE260
        static Il2CppString* kn();  // RVA: 0x6EE300
        static Il2CppString* ko();  // RVA: 0x6EE3A0
        static Il2CppString* kp();  // RVA: 0x6EE440
        static Il2CppString* kq();  // RVA: 0x6EE4E0
        static Il2CppString* kr();  // RVA: 0x6EE580
        static Il2CppString* ks();  // RVA: 0x6EE620
        static Il2CppString* kt();  // RVA: 0x6EE6C0
        static Il2CppString* ku();  // RVA: 0x6EE760
        static Il2CppString* kv();  // RVA: 0x6EE800
        static Il2CppString* kw();  // RVA: 0x6EE8A0
        static Il2CppString* kx();  // RVA: 0x6EE940
        static Il2CppString* ky();  // RVA: 0x6EE9E0
        static Il2CppString* kz();  // RVA: 0x6EEA80
        static Il2CppString* la();  // RVA: 0x6EEBC0
        static Il2CppString* lb();  // RVA: 0x6EEC60
        static Il2CppString* lc();  // RVA: 0x6EED00
        static Il2CppString* ld();  // RVA: 0x6EEDA0
        static Il2CppString* le();  // RVA: 0x6EEE40
        static Il2CppString* lf();  // RVA: 0x6EEEE0
        static Il2CppString* lg();  // RVA: 0x6EEF80
        static Il2CppString* lh();  // RVA: 0x6EF020
        static Il2CppString* li();  // RVA: 0x6EF0C0
        static Il2CppString* lj();  // RVA: 0x6EF160
        static Il2CppString* lk();  // RVA: 0x6EF200
        static Il2CppString* ll();  // RVA: 0x6EF2A0
        static Il2CppString* lm();  // RVA: 0x6EF340
        static Il2CppString* ln();  // RVA: 0x6EF3E0
        static Il2CppString* lo();  // RVA: 0x6EF480
        static Il2CppString* lp();  // RVA: 0x6EF520
        static Il2CppString* lq();  // RVA: 0x6EF5C0
        static Il2CppString* lr();  // RVA: 0x6EF660
        static Il2CppString* ls();  // RVA: 0x6EF700
        static Il2CppString* lt();  // RVA: 0x6EF7A0
        static Il2CppString* lu();  // RVA: 0x6EF840
        static Il2CppString* lv();  // RVA: 0x6EF8E0
        static Il2CppString* lw();  // RVA: 0x6EF980
        static Il2CppString* lx();  // RVA: 0x6EFA20
        static Il2CppString* ly();  // RVA: 0x6EFAC0
        static Il2CppString* lz();  // RVA: 0x6EFB60
        static Il2CppString* ma();  // RVA: 0x6EFCA0
        static Il2CppString* mb();  // RVA: 0x6EFD40
        static Il2CppString* mc();  // RVA: 0x6EFDE0
        static Il2CppString* md();  // RVA: 0x6EFE80
        static Il2CppString* me();  // RVA: 0x6EFF20
        static Il2CppString* mf();  // RVA: 0x6EFFC0
        static Il2CppString* mg();  // RVA: 0x6F0060
        static Il2CppString* mh();  // RVA: 0x6F0100
        static Il2CppString* mi();  // RVA: 0x6F01A0
        static Il2CppString* mj();  // RVA: 0x6F0240
        static Il2CppString* mk();  // RVA: 0x6F02E0
        static Il2CppString* ml();  // RVA: 0x6F0380
        static Il2CppString* mm();  // RVA: 0x6F0420
        static Il2CppString* mn();  // RVA: 0x6F04C0
        static Il2CppString* mo();  // RVA: 0x6F0560
        static Il2CppString* mp();  // RVA: 0x6F0600
        static Il2CppString* mq();  // RVA: 0x6F06A0
        static Il2CppString* mr();  // RVA: 0x6F0740
        static Il2CppString* ms();  // RVA: 0x6F07E0
        static Il2CppString* mt();  // RVA: 0x6F0880
        static Il2CppString* mu();  // RVA: 0x6F0920
        static Il2CppString* mv();  // RVA: 0x6F09C0
        static Il2CppString* mw();  // RVA: 0x6F0A60
        static Il2CppString* mx();  // RVA: 0x6F0B00
        static Il2CppString* my();  // RVA: 0x6F0BA0
        static Il2CppString* mz();  // RVA: 0x6F0C40
        static Il2CppString* na();  // RVA: 0x6F0D80
        static Il2CppString* nb();  // RVA: 0x6F0E20
        static Il2CppString* nc();  // RVA: 0x6F0EC0
        static Il2CppString* nd();  // RVA: 0x6F0F60
        static Il2CppString* ne();  // RVA: 0x6F1000
        static Il2CppString* nf();  // RVA: 0x6F10A0
        static Il2CppString* ng();  // RVA: 0x6F1140
        static Il2CppString* nh();  // RVA: 0x6F11E0
        static Il2CppString* ni();  // RVA: 0x6F1280
        static Il2CppString* nj();  // RVA: 0x6F1320
        static Il2CppString* nk();  // RVA: 0x6F13C0
        static Il2CppString* nl();  // RVA: 0x6F1460
        static Il2CppString* nm();  // RVA: 0x6F1500
        static Il2CppString* nn();  // RVA: 0x6F15A0
        static Il2CppString* no();  // RVA: 0x6F1640
        static Il2CppString* np();  // RVA: 0x6F16E0
        static Il2CppString* nq();  // RVA: 0x6F1780
        static Il2CppString* nr();  // RVA: 0x6F1820
        static Il2CppString* ns();  // RVA: 0x6F18C0
        static Il2CppString* nt();  // RVA: 0x6F1960
        static Il2CppString* nu();  // RVA: 0x6F1A00
        static Il2CppString* nv();  // RVA: 0x6F1AA0
        static Il2CppString* nw();  // RVA: 0x6F1B40
        static Il2CppString* nx();  // RVA: 0x6F1BE0
        static Il2CppString* ny();  // RVA: 0x6F1C80
        static Il2CppString* nz();  // RVA: 0x6F1D20
        static Il2CppString* oa();  // RVA: 0x6F1E60
        static Il2CppString* ob();  // RVA: 0x6F1F00
        static Il2CppString* oc();  // RVA: 0x6F1FA0
        static Il2CppString* od();  // RVA: 0x6F2040
        static Il2CppString* oe();  // RVA: 0x6F20E0
        static Il2CppString* of();  // RVA: 0x6F2180
        static Il2CppString* og();  // RVA: 0x6F2220
        static Il2CppString* oh();  // RVA: 0x6F22C0
        static Il2CppString* oi();  // RVA: 0x6F2360
        static Il2CppString* oj();  // RVA: 0x6F2400
        static Il2CppString* ok();  // RVA: 0x6F24A0
        static Il2CppString* ol();  // RVA: 0x6F2540
        static Il2CppString* om();  // RVA: 0x6F25E0
        static Il2CppString* on();  // RVA: 0x6F2680
        static Il2CppString* oo();  // RVA: 0x6F2720
        static Il2CppString* op();  // RVA: 0x6F27C0
        static Il2CppString* oq();  // RVA: 0x6F2860
        static Il2CppString* or();  // RVA: 0x6F2900
        static Il2CppString* os();  // RVA: 0x6F29A0
        static Il2CppString* ot();  // RVA: 0x6F2A40
        static Il2CppString* ou();  // RVA: 0x6F2AE0
        static Il2CppString* ov();  // RVA: 0x6F2B80
        static Il2CppString* ow();  // RVA: 0x6F2C20
        static Il2CppString* ox();  // RVA: 0x6F2CC0
        static Il2CppString* oy();  // RVA: 0x6F2D60
        static Il2CppString* oz();  // RVA: 0x6F2E00
        static Il2CppString* pa();  // RVA: 0x6F2F40
        static Il2CppString* pb();  // RVA: 0x6F2FE0
        static Il2CppString* pc();  // RVA: 0x6F3080
        static Il2CppString* pd();  // RVA: 0x6F3120
        static Il2CppString* pe();  // RVA: 0x6F31C0
        static Il2CppString* pf();  // RVA: 0x6F3260
        static Il2CppString* pg();  // RVA: 0x6F3300
        static Il2CppString* ph();  // RVA: 0x6F33A0
        static Il2CppString* pi();  // RVA: 0x6F3440
        static Il2CppString* pj();  // RVA: 0x6F34E0
        static Il2CppString* pk();  // RVA: 0x6F3580
        static Il2CppString* pl();  // RVA: 0x6F3620
        static Il2CppString* pm();  // RVA: 0x6F36C0
        static Il2CppString* pn();  // RVA: 0x6F3760
        static Il2CppString* po();  // RVA: 0x6F3800
        static Il2CppString* pp();  // RVA: 0x6F38A0
        static Il2CppString* pq();  // RVA: 0x6F3940
        static Il2CppString* pr();  // RVA: 0x6F39E0
        static Il2CppString* ps();  // RVA: 0x6F3A80
        static Il2CppString* pt();  // RVA: 0x6F3B20
        static Il2CppString* pu();  // RVA: 0x6F3BC0
        static Il2CppString* pv();  // RVA: 0x6F3C60
        static Il2CppString* pw();  // RVA: 0x6F3D00
        static Il2CppString* px();  // RVA: 0x6F3DA0
        static Il2CppString* py();  // RVA: 0x6F3E40
        static Il2CppString* pz();  // RVA: 0x6F3EE0
        static Il2CppString* qa();  // RVA: 0x6F4020
        static Il2CppString* qb();  // RVA: 0x6F40C0
        static Il2CppString* qc();  // RVA: 0x6F4160
        static Il2CppString* qd();  // RVA: 0x6F4200
        static Il2CppString* qe();  // RVA: 0x6F42A0
        static Il2CppString* qf();  // RVA: 0x6F4340
        static Il2CppString* qg();  // RVA: 0x6F43E0
        static Il2CppString* qh();  // RVA: 0x6F4480
        static Il2CppString* qi();  // RVA: 0x6F4520
        static Il2CppString* qj();  // RVA: 0x6F45C0
        static Il2CppString* qk();  // RVA: 0x6F4660
        static Il2CppString* ql();  // RVA: 0x6F4700
        static Il2CppString* qm();  // RVA: 0x6F47A0
        static Il2CppString* qn();  // RVA: 0x6F4840
        static Il2CppString* qo();  // RVA: 0x6F48E0
        static Il2CppString* qp();  // RVA: 0x6F4980
        static Il2CppString* qq();  // RVA: 0x6F4A20
        static Il2CppString* qr();  // RVA: 0x6F4AC0
        static Il2CppString* qs();  // RVA: 0x6F4B60
        static Il2CppString* qt();  // RVA: 0x6F4C00
        static Il2CppString* qu();  // RVA: 0x6F4CA0
        static Il2CppString* qv();  // RVA: 0x6F4D40
        static Il2CppString* qw();  // RVA: 0x6F4DE0
        static Il2CppString* qx();  // RVA: 0x6F4E80
        static Il2CppString* qy();  // RVA: 0x6F4F20
        static Il2CppString* qz();  // RVA: 0x6F4FC0
        static Il2CppString* ra();  // RVA: 0x6F5100
        static Il2CppString* rb();  // RVA: 0x6F51A0
        static Il2CppString* rc();  // RVA: 0x6F5240
        static Il2CppString* rd();  // RVA: 0x6F52E0
        static Il2CppString* re();  // RVA: 0x6F5380
        static Il2CppString* rf();  // RVA: 0x6F5420
        static Il2CppString* rg();  // RVA: 0x6F54C0
        static Il2CppString* rh();  // RVA: 0x6F5560
        static Il2CppString* ri();  // RVA: 0x6F5600
        static Il2CppString* rj();  // RVA: 0x6F56A0
        static Il2CppString* rk();  // RVA: 0x6F5740
        static void .cctor();  // RVA: 0x6E3F70
    };

} // namespace <PrivateImplementationDetails>{8A9B04D4-5584-4E15-B289-513DD6F24D34}
