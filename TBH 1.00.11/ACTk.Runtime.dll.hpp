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
        void .ctor();  // RVA: 0x666560
    };

} // namespace Microsoft.CodeAnalysis

namespace System.Runtime.CompilerServices
{

    // Namespace: System.Runtime.CompilerServices
    class IsUnmanagedAttribute : public Attribute
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x666560
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
    static MonoScriptData vza();  // RVA: 0x667590
    static MonoScriptData djy();  // RVA: 0x6672F0
    static MonoScriptData byk();  // RVA: 0x667210
    static MonoScriptData hqb();  // RVA: 0x6673D0
    static MonoScriptData hxw();  // RVA: 0x6674B0
    void .ctor();  // RVA: 0x6284D0
};

// Namespace: <global>
class dao
{
public:

    // Methods
    static void vzc();  // RVA: 0x635AE0
    static void vzb();  // RVA: 0x635AE0
};

// Namespace: <global>
class ApplicationFocusEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x666450
    void Invoke(bool hasFocus);  // RVA: 0x666440
    IAsyncResult* BeginInvoke(bool hasFocus, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6663D0
    void EndInvoke(IAsyncResult* result);  // RVA: 0x666430
};

// Namespace: <global>
class ApplicationPauseEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x666450
    void Invoke(bool pauseStatus);  // RVA: 0x666440
    IAsyncResult* BeginInvoke(bool pauseStatus, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6663D0
    void EndInvoke(IAsyncResult* result);  // RVA: 0x666430
};

// Namespace: <global>
class dap : public MonoBehaviour
{
public:
    // Static fields
    // static dap* bmoa;

    uint8_t pad_0000[0x20]; // 0x0000
    ApplicationFocusEventHandler* bmny; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ApplicationPauseEventHandler* bmnz; // 0x0028

    // Methods
    void OnApplicationFocus(bool hasFocus);  // RVA: 0x667710
    void il(bool hasFocus);  // RVA: 0x667710
    void gle(bool pauseStatus);  // RVA: 0x667730
    void vzg(ApplicationPauseEventHandler* a);  // RVA: 0x667930
    static dap* vzh();  // RVA: 0x6679D0
    void .ctor();  // RVA: 0x6287A0
    void cwd(bool pauseStatus);  // RVA: 0x667730
    void vzd(ApplicationFocusEventHandler* a);  // RVA: 0x667750
    void j(bool pauseStatus);  // RVA: 0x667730
    void Awake();  // RVA: 0x667670
    void vzf(ApplicationPauseEventHandler* a);  // RVA: 0x667890
    void OnApplicationPause(bool pauseStatus);  // RVA: 0x667730
    void vze(ApplicationFocusEventHandler* a);  // RVA: 0x6677F0
};

// Namespace: <global>
class daq
{
public:

    // Methods
    static Char[][] vzj(Il2CppString* a);  // RVA: 0x667FA0
    static Il2CppString* vzi(Il2CppString* a);  // RVA: 0x667F00
    static Char[][] lll(Il2CppString* a);  // RVA: 0x667D50
    static Char[][] her(Il2CppString* a);  // RVA: 0x667BA0
    static Il2CppString* vzk(Il2CppString* a);  // RVA: 0x668040
    static Il2CppString* msu(Char[][] a);  // RVA: 0x667DF0
    static Il2CppString* vzl(Char[][] a);  // RVA: 0x668160
    static Char[][] cma(Il2CppString* a);  // RVA: 0x667B00
    static Il2CppString* jfq(Char[][] a);  // RVA: 0x667C40
};

// Namespace: <global>
class dar
{
public:
    // Static fields
    // static int32_t bmob;
    // static uint8_t bmoc;
    // static uint8_t bmod;
    // static uint8_t bmoe;
    // static uint8_t bmof;
    // static uint8_t bmog;


    // Methods
    static void vzm(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x668580
    static void vzr(Stream* a, Stream* b, Byte[][] c, uint8_t d, uint8_t e);  // RVA: 0x436950
    static void vzn(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x6685F0
    static void omr(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x668510
    static void vzq(Stream* a, Stream* b, Byte[][] c, uint8_t d);  // RVA: 0x563F30
    static void ezh(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x6682E0
    static void nda(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x6684A0
    static void evn(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x668270
    static void vzo(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x668660
    static void vzp(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x6686D0
    static void ltq(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x668430
    static void jqm(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x6683C0
    static void iuo(Stream* a, Stream* b, Byte[][] c);  // RVA: 0x668350
};

// Namespace: <global>
class das
{
public:
    // Static fields
    // static int32_t bmoh;


    // Methods
    static int32_t bbc(BigInteger a);  // RVA: 0x668740
    static bool fff(int64_t a, int32_t b);  // RVA: 0x6695D0
    static int32_t huh(DateTimeOffset a);  // RVA: 0x66A050
    static int32_t idi(Decimal a);  // RVA: 0x66A130
    static bool vzw(int64_t a, int32_t b);  // RVA: 0x6695D0
    static int32_t waj(a a);  // RVA: 0x563F30
    static bool wai(Guid a, int32_t b);  // RVA: 0x66A300
    static int32_t wat(uint64_t a);  // RVA: 0x66B810
    static bool wad(Vector3Int a, int32_t b);  // RVA: 0x66AD50
    static bool wab(Vector2Int a, int32_t b);  // RVA: 0x66A330
    static bool dra(BigInteger a, int32_t b);  // RVA: 0x6696F0
    static bool img(double a, int32_t b);  // RVA: 0x669820
    static int32_t eue(Guid a);  // RVA: 0x669850
    static bool lht(Char[][] a, int32_t b);  // RVA: 0x66AA80
    static bool npc(Vector2Int a, int32_t b);  // RVA: 0x66A330
    static int32_t zn(float a);  // RVA: 0x668D10
    static bool nzr(Vector2Int a, int32_t b);  // RVA: 0x66A330
    static bool wae(float a, int32_t b);  // RVA: 0x66AAE0
    static int32_t wak(BigInteger a);  // RVA: 0x66AE70
    static int32_t ljr(uint32_t a);  // RVA: 0x669AD0
    static int32_t lap(DateTimeOffset a);  // RVA: 0x66A9A0
    static bool egb(double a, int32_t b);  // RVA: 0x669820
    static int32_t wbc(Il2CppString* a);  // RVA: 0x66BA20
    static bool iza(Guid a, int32_t b);  // RVA: 0x66A300
    static int32_t jky(Decimal a);  // RVA: 0x66A5B0
    static bool jzn(Quaternion a, int32_t b);  // RVA: 0x669CE0
    static int32_t wbb(Char[][] a);  // RVA: 0x66B9D0
    static bool obs(Vector2 a, int32_t b);  // RVA: 0x669190
    static int32_t wau(float a);  // RVA: 0x668D10
    static int32_t mqm(Vector2Int a);  // RVA: 0x668B70
    static int32_t waw(Quaternion a);  // RVA: 0x66A820
    static int32_t bld(Vector2Int a);  // RVA: 0x668B70
    static int32_t glj(DateTime a);  // RVA: 0x669D30
    static bool gux(int32_t a, int32_t b);  // RVA: 0x668B20
    static int32_t efm(Vector2Int a);  // RVA: 0x668B70
    static int32_t wax(Vector2 a);  // RVA: 0x669240
    static int32_t joj(int64_t a);  // RVA: 0x669B20
    static int32_t esi(Vector2Int a);  // RVA: 0x668B70
    static int32_t war(int64_t a);  // RVA: 0x66B770
    static int32_t kaa(Char[][] a);  // RVA: 0x66A7D0
    static bool wah(DateTimeOffset a, int32_t b);  // RVA: 0x669740
    static bool gcl(Quaternion a, int32_t b);  // RVA: 0x669CE0
    static bool iyy(double a, int32_t b);  // RVA: 0x669820
    static bool dvr(BigInteger a, int32_t b);  // RVA: 0x6696F0
    static bool wac(Vector3 a, int32_t b);  // RVA: 0x669080
    static int32_t gpt(DateTime a);  // RVA: 0x669E20
    static bool waf(double a, int32_t b);  // RVA: 0x669820
    static int32_t llr(Vector3 a);  // RVA: 0x669BB0
    static int32_t crx(BigInteger a);  // RVA: 0x6692E0
    static bool fit(uint32_t a, int32_t b);  // RVA: 0x668B20
    static bool iyg(Vector3 a, int32_t b);  // RVA: 0x669080
    static int32_t was(uint32_t a);  // RVA: 0x669AD0
    static bool hjn(uint64_t a, int32_t b);  // RVA: 0x669770
    static bool cpo(Vector2 a, int32_t b);  // RVA: 0x669190
    static int32_t lul(DateTimeOffset a);  // RVA: 0x66AB90
    static bool mkq(int32_t a, int32_t b);  // RVA: 0x668B20
    static int32_t loj(Char[][] a);  // RVA: 0x66AB40
    static bool ggx(Vector3 a, int32_t b);  // RVA: 0x669080
    static bool lta(Quaternion a, int32_t b);  // RVA: 0x669CE0
    static int32_t kxv(Quaternion a);  // RVA: 0x66A820
    static bool vzu(Decimal a, int32_t b);  // RVA: 0x668D60
    static bool bzw(Decimal a, int32_t b);  // RVA: 0x668D60
    static bool dcs(int64_t a, int32_t b);  // RVA: 0x6695D0
    static bool wag(Char[][] a, int32_t b);  // RVA: 0x66AA80
    static bool jjp(int64_t a, int32_t b);  // RVA: 0x6695D0
    static bool mef(int32_t a, int32_t b);  // RVA: 0x668B20
    static int32_t wan(int32_t a);  // RVA: 0x669AD0
    static int32_t fgu(int64_t a);  // RVA: 0x669B20
    static int32_t dmj(double a);  // RVA: 0x669680
    static int32_t wam(Decimal a);  // RVA: 0x66B170
    static int32_t jrj(DateTime a);  // RVA: 0x66A6E0
    static int32_t lea(uint32_t a);  // RVA: 0x669AD0
    static bool vzt(bool a, int32_t b);  // RVA: 0x66AD30
    static bool ooi(DateTimeOffset a, int32_t b);  // RVA: 0x669740
    static int32_t wal(bool a);  // RVA: 0x66B160
    static int32_t gdc(double a);  // RVA: 0x669D10
    static bool feu(uint64_t a, int32_t b);  // RVA: 0x669770
    static bool lcc(DateTimeOffset a, int32_t b);  // RVA: 0x669740
    static bool dyg(DateTimeOffset a, int32_t b);  // RVA: 0x669740
    static int32_t hbb(uint64_t a);  // RVA: 0x669FB0
    static bool nss(int64_t a, int32_t b);  // RVA: 0x6695D0
    static int32_t ccw(BigInteger a);  // RVA: 0x668D90
    static bool lo(float a, int32_t b);  // RVA: 0x66AAE0
    static int32_t wav(double a);  // RVA: 0x66B8B0
    static int32_t wao(DateTime a);  // RVA: 0x66B340
    static bool gcj(Vector2 a, int32_t b);  // RVA: 0x669190
    static int32_t omc(Quaternion a);  // RVA: 0x66A820
    static int32_t fxc(int32_t a);  // RVA: 0x669CA0
    static bool vzy(uint64_t a, int32_t b);  // RVA: 0x669770
    static int32_t mib(int32_t a);  // RVA: 0x66AC70
    static bool jda(BigInteger a, int32_t b);  // RVA: 0x6696F0
    static int32_t bbu(DateTime a);  // RVA: 0x668A30
    static int32_t way(Vector2Int a);  // RVA: 0x668B70
    static bool los(uint64_t a, int32_t b);  // RVA: 0x669770
    static bool guw(double a, int32_t b);  // RVA: 0x669820
    static bool fqe(Vector2 a, int32_t b);  // RVA: 0x669190
    static bool cif(Vector3 a, int32_t b);  // RVA: 0x669080
    static int32_t waz(Vector3 a);  // RVA: 0x669BB0
    static int32_t mdg(Vector3 a);  // RVA: 0x669BB0
    static bool sq(uint32_t a, int32_t b);  // RVA: 0x668B20
    static int32_t oqw(float a);  // RVA: 0x668D10
    static bool vzv(int32_t a, int32_t b);  // RVA: 0x668B20
    static int32_t kyu(int32_t a);  // RVA: 0x66A960
    static int32_t waq(Guid a);  // RVA: 0x66B510
    static bool ebh(int32_t a, int32_t b);  // RVA: 0x668B20
    static int32_t jga(Decimal a);  // RVA: 0x66A3E0
    static int32_t ojm(uint64_t a);  // RVA: 0x66ACB0
    static int32_t bsz(float a);  // RVA: 0x668D10
    static int32_t duc(double a);  // RVA: 0x669720
    static bool vzx(uint32_t a, int32_t b);  // RVA: 0x668B20
    static int32_t wap(DateTimeOffset a);  // RVA: 0x66B430
    static bool ebx(uint64_t a, int32_t b);  // RVA: 0x669770
    static int32_t fah(uint32_t a);  // RVA: 0x669AD0
    static bool hfx(Vector3 a, int32_t b);  // RVA: 0x669080
    static bool beu(uint32_t a, int32_t b);  // RVA: 0x668B20
    static int32_t koh(uint32_t a);  // RVA: 0x669AD0
    static int32_t crn(Vector2 a);  // RVA: 0x669240
    static bool waa(Vector2 a, int32_t b);  // RVA: 0x669190
    static int32_t wba(Vector3Int a);  // RVA: 0x66B8D0
    static bool vzz(Quaternion a, int32_t b);  // RVA: 0x669CE0
    static bool vzs(BigInteger a, int32_t b);  // RVA: 0x6696F0
    static bool jcu(Vector2Int a, int32_t b);  // RVA: 0x66A330
    static int32_t gwz(int64_t a);  // RVA: 0x669F10
    static int32_t fwz(Vector3 a);  // RVA: 0x669BB0
    static int32_t bsm(Vector3Int a);  // RVA: 0x668C10
    static bool kzy(DateTimeOffset a, int32_t b);  // RVA: 0x669740
    static int32_t obu(float a);  // RVA: 0x668D10
    static int32_t dmt(Char[][] a);  // RVA: 0x6696A0
    static int32_t isd(Char[][] a);  // RVA: 0x66A2B0
};

// Namespace: <global>
class dat : public CertificateHandler
{
public:

    // Methods
    bool ValidateCertificate(Byte[][] certificateData);  // RVA: 0x66BAA0
    void .ctor();  // RVA: 0x66BAB0
};

// Namespace: <global>
class dau
{
public:

    // Methods
    static bool gha(double a, double b, double c);  // RVA: 0x66BC20
    static bool wbe(double a, double b, double c);  // RVA: 0x66BF30
    static bool fsj(float a, float b, float c);  // RVA: 0x66BB70
    static bool jnf(double a, double b, double c);  // RVA: 0x66BD50
    static bool dcs(float a, float b, float c);  // RVA: 0x66BAC0
    static bool wbd(float a, float b, float c);  // RVA: 0x66BE80
};

// Namespace: <global>
class dav
{
public:

    // Methods
    static void wbf(System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> a, int32_t b, int32_t c, int64_t d, Il2CppString* e);  // RVA: 0x66C060
};

// Namespace: <global>
class daw
{
public:

    // Methods
    static int32_t gja();  // RVA: 0x66C6D0
    static int64_t fvm();  // RVA: 0x66C680
    static int64_t wbo();  // RVA: 0x66C370
    static int32_t wbm();  // RVA: 0x66C230
    static int16_t wbk();  // RVA: 0x66CC00
    static uint32_t wbn();  // RVA: 0x66C230
    static void ewo(Char[][] a);  // RVA: 0x66C550
    static wchar_t kdi();  // RVA: 0x66C8F0
    static wchar_t fkf();  // RVA: 0x66C630
    static uint64_t wbp();  // RVA: 0x66C370
    static uint8_t kma();  // RVA: 0x66C940
    static int64_t bzo();  // RVA: 0x66C2D0
    static uint32_t brw();  // RVA: 0x66C230
    static int8_t nvu();  // RVA: 0x66C9E0
    static int16_t bbb();  // RVA: 0x66C190
    static uint8_t jpp();  // RVA: 0x66C8A0
    static uint32_t kyh();  // RVA: 0x66C230
    static void wbq(Char[][] a);  // RVA: 0x66CCA0
    static int16_t fcv();  // RVA: 0x66C5E0
    static wchar_t byd();  // RVA: 0x66C280
    static int8_t cmn();  // RVA: 0x66C320
    static int16_t bmr();  // RVA: 0x66C1E0
    static uint8_t hlz();  // RVA: 0x66C720
    static Il2CppString* dsv(int32_t a);  // RVA: 0x66C3D0
    static int32_t ewf();  // RVA: 0x66C500
    static wchar_t wbj();  // RVA: 0x66CBB0
    static uint16_t eby();  // RVA: 0x66C4B0
    static uint64_t dfo();  // RVA: 0x66C370
    static uint8_t mig();  // RVA: 0x66C990
    static uint16_t wbl();  // RVA: 0x66CC50
    static Il2CppString* jcq(int32_t a);  // RVA: 0x66C7C0
    static Il2CppString* wbg(int32_t a);  // RVA: 0x66CA30
    static uint8_t wbh();  // RVA: 0x66CB10
    static int8_t wbi();  // RVA: 0x66CB60
    static uint64_t lhg();  // RVA: 0x66C370
    static int16_t izq();  // RVA: 0x66C770
};

// Namespace: <global>
class dax
{
public:
    // Static fields
    // static Char[][] bmoi;


    // Methods
    static Char[][] fl(Byte[][] a);  // RVA: 0x66D0C0
    static Byte[][] jsu(Char[][] a);  // RVA: 0x66D100
    static Il2CppString* bdi(Byte[][] a);  // RVA: 0x66CF40
    static Il2CppString* bct(Byte[][] a);  // RVA: 0x66CDC0
    static Byte[][] gez(Char[][] a);  // RVA: 0x66D100
    static Il2CppString* wbu(Byte[][] a);  // RVA: 0x66D2C0
    static void .cctor();  // RVA: 0x66CD30
    static Char[][] iez(Byte[][] a);  // RVA: 0x66D0C0
    static Il2CppString* nxp(Byte[][] a, int32_t b, int32_t c);  // RVA: 0x66D480
    static Char[][] icy(Byte[][] a);  // RVA: 0x66D0C0
    static Byte[][] hmi(Char[][] a);  // RVA: 0x66D100
    static Il2CppString* igu(Byte[][] a);  // RVA: 0x66D140
    static Il2CppString* msq(Byte[][] a);  // RVA: 0x66D300
    static Byte[][] wbr(Char[][] a);  // RVA: 0x66D100
    static Il2CppString* kja(Byte[][] a);  // RVA: 0x66D2C0
    static Il2CppString* wbw(Byte[][] a);  // RVA: 0x66D530
    static Char[][] ch(Byte[][] a);  // RVA: 0x66D0C0
    static Byte[][] wbs(Il2CppString* a);  // RVA: 0x66D4E0
    static Byte[][] ofw(Char[][] a);  // RVA: 0x66D100
    static Char[][] wbt(Byte[][] a);  // RVA: 0x66D0C0
    static Il2CppString* wbv(Byte[][] a, int32_t b, int32_t c);  // RVA: 0x66D480
};

// Namespace: <global>
class day`1
{
public:
    System.Collections.Concurrent.ConcurrentBag<a> bmoj; // 0x0000
    System.Func<a> bmok; // 0x0000

    // Methods
    void wbz();  // RVA: 0x42E0A0
    void .ctor(System.Func<a> a);  // RVA: 0x418860
    void wby(a a);  // RVA: 0x563F30
    a wbx();  // RVA: 0x563F30
};

// Namespace: <global>
class daz
{
public:
    // Static fields
    // static Random* bmol;
    // static Random* bmom;


    // Methods
    static void myu(Char[][] a);  // RVA: 0x66F070
    static void deh(Char[][] a);  // RVA: 0x66D730
    static void wcd(Char[][] a);  // RVA: 0x66FAA0
    static int64_t glp(Random* a, int64_t b, int64_t c);  // RVA: 0x66E200
    static int32_t wca(int32_t a, int32_t b);  // RVA: 0x66F380
    static int64_t lon(int64_t a, int64_t b);  // RVA: 0x66EAF0
    static int64_t fot(Random* a, int64_t b, int64_t c);  // RVA: 0x66DE80
    static void ebq(Random* a, Char[][] b);  // RVA: 0x66DD40
    static int64_t iov(int64_t a, int64_t b);  // RVA: 0x66E580
    static void .cctor();  // RVA: 0x66D6B0
    static void lip(Byte[][] a);  // RVA: 0x66E860
    static void lxb(Char[][] a);  // RVA: 0x66ED60
    static void wcf(Random* a, Char[][] b);  // RVA: 0x66FE30
    static void hbq(Char[][] a);  // RVA: 0x66E270
    static int64_t wce(Random* a, int64_t b, int64_t c);  // RVA: 0x66FDB0
    static void wcc(Byte[][] a);  // RVA: 0x66F810
    static int64_t dpp(Random* a, int64_t b, int64_t c);  // RVA: 0x66DA40
    static void gdc(Random* a, Char[][] b);  // RVA: 0x66E160
    static void enu(Random* a, Char[][] b);  // RVA: 0x66DDE0
    static int64_t wcb(int64_t a, int64_t b);  // RVA: 0x66F5A0
    static int64_t jvv(Random* a, int64_t b, int64_t c);  // RVA: 0x66E7F0
    static void dum(Byte[][] a);  // RVA: 0x66DAB0
    static int64_t fps(int64_t a, int64_t b);  // RVA: 0x66DEF0
};

// Namespace: <global>
class dba
{
public:
    // Static fields
    // static int64_t bmon;


    // Methods
    static int64_t wcg();  // RVA: 0x6701F0
    static double wch();  // RVA: 0x670250
    static int64_t wci();  // RVA: 0x6702C0
    static double dym();  // RVA: 0x66FF40
    static int64_t cj();  // RVA: 0x66FF20
    static int64_t bcc();  // RVA: 0x66FEC0
    static int64_t jfc();  // RVA: 0x670030
    static int64_t ggj();  // RVA: 0x66FFD0
    static int64_t obq();  // RVA: 0x6701D0
    static double kvf();  // RVA: 0x670120
    static int64_t kvm();  // RVA: 0x670190
    static double jnz();  // RVA: 0x670090
    static int64_t nzy();  // RVA: 0x6701B0
    static int64_t wcj();  // RVA: 0x6702E0
    static int64_t wck();  // RVA: 0x670300
    static int64_t hgn();  // RVA: 0x670010
    static int64_t gkv();  // RVA: 0x66FFF0
    static int64_t jtu();  // RVA: 0x670100
    static int64_t ffl();  // RVA: 0x66FFB0
};

// Namespace: <global>
class dbb
{
public:
    // Static fields
    // static uint32_t bmoo;
    // static uint32_t bmop;
    // static uint32_t bmoq;
    // static uint32_t bmor;
    // static uint32_t bmos;


    // Methods
    static uint32_t izr(Stream* a, int64_t b, uint32_t c);  // RVA: 0x670620
    static uint32_t wcl(Byte[][] a, int32_t b, uint32_t c);  // RVA: 0x670930
    static uint32_t wcm(Stream* a, int64_t b, uint32_t c);  // RVA: 0x670D60
    static uint32_t fo(Stream* a, int64_t b, uint32_t c);  // RVA: 0x670320
};

// Namespace: <global>
class dbc : public dcy`1
{
public:
    // Static fields
    // static bool bmot;
    // static bool bmou;
    // static float bmov;
    // static float bmow;
    // static float bmox;
    // static float bmoy;
    // static float bmoz;
    // static float bmpa;
    // static bool bmpb;

    uint8_t pad_0000[0x30]; // 0x0000
    int64_t bmpc; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int64_t bmpd; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int64_t bmpe; // 0x0040

    // Methods
    void Update();  // RVA: 0x6711C0
    void wcy();  // RVA: 0x672AC0
    static void ffv();  // RVA: 0x671690
    static float wcp();  // RVA: 0x672410
    static float wcu();  // RVA: 0x6727D0
    static float wcs();  // RVA: 0x672650
    static void eez();  // RVA: 0x671460
    static void wcw(float a);  // RVA: 0x6728A0
    static void wcn();  // RVA: 0x672170
    bool uo();  // RVA: 0x671F60
    static void hey();  // RVA: 0x671930
    bool wcx();  // RVA: 0x6728B0
    static float wcv();  // RVA: 0x672890
    static float wct();  // RVA: 0x672710
    void yd();  // RVA: 0x672DC0
    void lht();  // RVA: 0x671D80
    static float wcq();  // RVA: 0x6724D0
    void wda();  // RVA: 0x672CA0
    static void liy();  // RVA: 0x671E50
    void wcz();  // RVA: 0x672B90
    void oao();  // RVA: 0x671EC0
    void .ctor();  // RVA: 0x671420
    static void wco();  // RVA: 0x6721E0
    static void frs();  // RVA: 0x671700
    void iri();  // RVA: 0x671B60
    void wdb(Scene a, LoadSceneMode b);  // RVA: 0x672D40
    void jyb();  // RVA: 0x671C70
    static float wcr();  // RVA: 0x672590
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
        void .ctor(StorageDataType type, Byte[][] data);  // RVA: 0x6670F0
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbd
{
public:

    // Methods
    static ObscuredPrefsData wdd(a a);  // RVA: 0x563F30
    static Byte[][] wdj(T a);  // RVA: 0x563F30
    static Byte[][] wdh(StorageDataType a, e b);  // RVA: 0x563F30
    static Color32 pp(Byte[][] a);  // RVA: 0x672EC0
    static c wdf(Byte[][] a);  // RVA: 0x563F30
    static Color32 wdc(Byte[][] a);  // RVA: 0x672EF0
    static Color32 edt(Byte[][] a);  // RVA: 0x672E90
    static f wdi(StorageDataType a, Byte[][] b);  // RVA: 0x563F30
    static d wdg(StorageDataType a, Byte[][] b);  // RVA: 0x563F30
    static b wde(ObscuredPrefsData a);  // RVA: 0x563F30
    static T wdk(Byte[][] a);  // RVA: 0x563F30
    static Color32 mlf(Byte[][] a);  // RVA: 0x672EC0
};

// Namespace: <global>
class dbe
{
public:
    // Static fields
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
    // static Type* bmqj;


    // Methods
    static StorageDataType wdl();  // RVA: 0x421580
    static void .cctor();  // RVA: 0x672F30
};

namespace CodeStage.AntiCheat.Storage
{

    // Namespace: CodeStage.AntiCheat.Storage
    class UnsupportedDataTypeException : public Exception
    {
    public:
    
        // Methods
        void .ctor(Type* type);  // RVA: 0x667170
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class HashCheckSumModifierDelegate : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6665A0
    Byte[][] Invoke(Il2CppString* input);  // RVA: 0x666440
    IAsyncResult* BeginInvoke(Il2CppString* input, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x666570
    Byte[][] EndInvoke(IAsyncResult* result);  // RVA: 0x666430
};

// Namespace: <global>
class dbf
{
public:
    // Static fields
    // static Il2CppString* bmqk;

    uint8_t pad_0000[0x10]; // 0x0000
    uint32_t bmql; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    uint32_t bmqm; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    HashCheckSumModifierDelegate* bmqn; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool <bmqo>k__BackingField; // 0x0020

    // Methods
    void iiz(HashCheckSumModifierDelegate* a);  // RVA: 0x673930
    void nvz();  // RVA: 0x673810
    void eje(bool a);  // RVA: 0x673820
    void wdu(bool a);  // RVA: 0x673820
    void .ctor(uint32_t a);  // RVA: 0x6737E0
    void wdt(HashCheckSumModifierDelegate* a);  // RVA: 0x673930
    void ert(bool a);  // RVA: 0x673820
    uint32_t wdw(Il2CppString* a);  // RVA: 0x673F50
    void fdz(bool a);  // RVA: 0x673820
    static Il2CppString* wdp();  // RVA: 0x673DB0
    uint32_t kty(Il2CppString* a);  // RVA: 0x673940
    static void ffx();  // RVA: 0x673830
    uint32_t wds();  // RVA: 0x673E00
    void wdv();  // RVA: 0x673810
    static void wdn(Il2CppString* a);  // RVA: 0x673C50
    static Il2CppString* wdm();  // RVA: 0x673BA0
    static void wdo();  // RVA: 0x673CB0
    void wdr(bool a);  // RVA: 0x673DF0
    void dfn();  // RVA: 0x673810
    uint32_t mgs(Il2CppString* a);  // RVA: 0x673A70
    bool wdq();  // RVA: 0x666D40
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
    DeviceLockLevel <bmqp>k__BackingField; // 0x0010
    DeviceLockTamperingSensitivity <bmqq>k__BackingField; // 0x0011

    // Methods
    DeviceLockLevel wdx();  // RVA: 0x667020
    void wdy(DeviceLockLevel a);  // RVA: 0x6740C0
    DeviceLockTamperingSensitivity wdz();  // RVA: 0x6740D0
    void wea(DeviceLockTamperingSensitivity a);  // RVA: 0x6740E0
    void .ctor(DeviceLockLevel a, DeviceLockTamperingSensitivity b);  // RVA: 0x674080
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
        void .ctor();  // RVA: 0x666500
    };

    // Namespace: CodeStage.AntiCheat.Storage
    class PersistentDataPathException : public BackgroundThreadAccessException
    {
    public:
    
        // Methods
        void .ctor();  // RVA: 0x667110
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbh
{
public:
    // Static fields
    // static Il2CppString* bmqr;
    // static Il2CppString* bmqs;
    // static dbf* bmqt;

    uint8_t pad_0000[0x10]; // 0x0000
    Action* bmqu; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Action* bmqv; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbr* <bmqw>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* <bmqx>k__BackingField; // 0x0028

    // Methods
    void hdg();  // RVA: 0x674470
    void wec(Action* a);  // RVA: 0x6780A0
    static void .cctor();  // RVA: 0x6740F0
    ObscuredFileReadResult lia();  // RVA: 0x676720
    void jvi();  // RVA: 0x674470
    bool weg();  // RVA: 0x678280
    ObscuredFileReadResult cae();  // RVA: 0x6743D0
    Il2CppString* gvm(Il2CppString* a);  // RVA: 0x676250
    ObscuredFileHeader heu(Stream* a);  // RVA: 0x674410
    void .ctor(Il2CppString* a);  // RVA: 0x674210
    ObscuredFileWriteResult weo(Byte[][] a);  // RVA: 0x678FA0
    void .ctor(Il2CppString* a, dbr* b);  // RVA: 0x674370
    ObscuredFileWriteResult xn(Byte[][] a);  // RVA: 0x675110
    ObscuredFileHeader wen(Stream* a);  // RVA: 0x674410
    ObscuredFileReadResult wel();  // RVA: 0x6743D0
    ObscuredFileWriteResult wek(Byte[][] a);  // RVA: 0x675110
    void weq(Stream* a, DeviceLockLevel b);  // RVA: 0x6796C0
    void .ctor(dbs* a);  // RVA: 0x674170
    ObscuredFileReadResult kni();  // RVA: 0x6743D0
    void wej();  // RVA: 0x674470
    ObscuredFileHeader csd(Stream* a);  // RVA: 0x674410
    Il2CppString* hge(Il2CppString* a);  // RVA: 0x6764D0
    ObscuredFileReadResult gul();  // RVA: 0x6755E0
    void wep(Stream* a);  // RVA: 0x6795B0
    ObscuredFileReadResult lwu();  // RVA: 0x677390
    Il2CppString* wer(Il2CppString* a);  // RVA: 0x679750
    dbr* wef();  // RVA: 0x63EBD0
    void .ctor();  // RVA: 0x6742B0
    void cxh();  // RVA: 0x674470
    void web(Action* a);  // RVA: 0x678000
    ObscuredFileHeader ciw(Stream* a);  // RVA: 0x674410
    Il2CppString* fmi(Il2CppString* a);  // RVA: 0x675140
    Il2CppString* weh();  // RVA: 0x678290
    static void wei(Il2CppString* a);  // RVA: 0x6782A0
    ObscuredFileReadResult wem();  // RVA: 0x678330
    ObscuredFileWriteResult lcm(Byte[][] a);  // RVA: 0x675110
    Il2CppString* fye(Il2CppString* a);  // RVA: 0x675390
    void wee(Action* a);  // RVA: 0x6781E0
    void mef();  // RVA: 0x674470
    void wed(Action* a);  // RVA: 0x678140
    ObscuredFileReadResult dvd();  // RVA: 0x6744A0
    ObscuredFileWriteResult efu(Byte[][] a);  // RVA: 0x675110
    ObscuredFileHeader mca(Stream* a);  // RVA: 0x674410
};

// Namespace: <global>
class dbi
{
public:
    // Static fields
    // static int32_t bmqy;
    // static int32_t bmqz;
    // static Byte[][] bmra;


    // Methods
    static uint32_t nmj(Stream* a);  // RVA: 0x679F30
    static uint32_t weu(Stream* a);  // RVA: 0x679BC0
    static uint32_t wez(Byte[][] a);  // RVA: 0x67A3E0
    static void wes(Stream* a, Stream* b, dbq* c);  // RVA: 0x67A1B0
    static void wew(Stream* a, uint32_t b);  // RVA: 0x67A300
    static void pm(Stream* a, Stream* b, dbq* c);  // RVA: 0x67A1B0
    static void kqw(Stream* a, Stream* b, dbq* c);  // RVA: 0x679C40
    static void eps(Stream* a, uint32_t b);  // RVA: 0x679A30
    static void wfa(Stream* a, Stream* b, dbq* c);  // RVA: 0x67A400
    static void ojo(Stream* a, Stream* b, dbq* c);  // RVA: 0x67A1B0
    static uint32_t dlk(Byte[][] a);  // RVA: 0x679A10
    static uint32_t ijs(Stream* a);  // RVA: 0x679BC0
    static void nzh(Stream* a, uint32_t b);  // RVA: 0x679F70
    static uint32_t nij(Stream* a);  // RVA: 0x679BC0
    static void kvi(Stream* a, Stream* b, dbq* c);  // RVA: 0x679D40
    static void grx(Stream* a, Stream* b, dbq* c);  // RVA: 0x679B10
    static void wet(Stream* a, Stream* b, dbq* c);  // RVA: 0x67A260
    static uint32_t mit(Byte[][] a);  // RVA: 0x679F10
    static uint32_t wex(Stream* a);  // RVA: 0x679BC0
    static uint32_t lar(Byte[][] a);  // RVA: 0x679DF0
    static uint32_t ixc(Stream* a);  // RVA: 0x679C00
    static void odq(Stream* a, Stream* b, dbq* c);  // RVA: 0x67A050
    static void wey(Stream* a, Stream* b, dbq* c);  // RVA: 0x67A1B0
    static uint32_t wev(Stream* a);  // RVA: 0x67A270
    static void oip(Stream* a, Stream* b, dbq* c);  // RVA: 0x67A100
    static void mfl(Stream* a, Stream* b, dbq* c);  // RVA: 0x679E10
    static uint32_t djd(Stream* a);  // RVA: 0x6799D0
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
        uint8_t get_Byte1();  // RVA: 0x666770
        void set_Byte1(uint8_t value);  // RVA: 0x666810
        uint8_t get_Byte2();  // RVA: 0x6667C0
        void set_Byte2(uint8_t value);  // RVA: 0x666820
        uint8_t get_Byte3();  // RVA: 0x6667D0
        void set_Byte3(uint8_t value);  // RVA: 0x666830
        uint8_t get_Byte4();  // RVA: 0x6667E0
        void set_Byte4(uint8_t value);  // RVA: 0x666840
        uint8_t get_Version();  // RVA: 0x666800
        void set_Version(uint8_t value);  // RVA: 0x666860
        ObscurationMode get_ObscurationMode();  // RVA: 0x6667F0
        void set_ObscurationMode(ObscurationMode value);  // RVA: 0x666850
        bool IsValid();  // RVA: 0x666790
        void wfb(Stream* a);  // RVA: 0x666870
        static void wfc(Stream* a, ObscurationMode b);  // RVA: 0x666930
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
        ObscuredFileErrorCode get_ErrorCode();  // RVA: 0x666770
        Exception* get_Exception();  // RVA: 0x666780
        void .ctor(ObscuredFileErrorCode code);  // RVA: 0x666750
        void .ctor(Exception* exception);  // RVA: 0x666740
        Il2CppString* ToString();  // RVA: 0x666660
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
        bool wfd();  // RVA: 0x666D50
        Byte[][] get_Data();  // RVA: 0x666D20
        bool wfe();  // RVA: 0x666D80
        bool get_DataIsNotGenuine();  // RVA: 0x666D10
        bool get_DataFromAnotherDevice();  // RVA: 0x666D00
        ObscuredFileError get_Error();  // RVA: 0x666D30
        bool get_IsValid();  // RVA: 0x666D40
        void .ctor(Byte[][] data, bool dataIsNotGenuine, bool dataFromAnotherDevice);  // RVA: 0x666CB0
        void .ctor(ObscuredFileError error);  // RVA: 0x666C60
        static ObscuredFileReadResult wff(Exception* a);  // RVA: 0x666D90
        static ObscuredFileReadResult wfg(ObscuredFileErrorCode a);  // RVA: 0x666E10
        Il2CppString* ToString();  // RVA: 0x6669F0
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
        bool wfh();  // RVA: 0x667030
        ObscuredFileError get_Error();  // RVA: 0x667010
        bool get_IsValid();  // RVA: 0x667020
        void .ctor(ObscuredFileErrorCode result);  // RVA: 0x666FC0
        void .ctor(ObscuredFileError error);  // RVA: 0x666F90
        static ObscuredFileWriteResult wfi(Exception* a);  // RVA: 0x667040
        static ObscuredFileWriteResult wfj(ObscuredFileErrorCode a);  // RVA: 0x667090
        Il2CppString* ToString();  // RVA: 0x666E90
    };

} // namespace CodeStage.AntiCheat.Storage

// Namespace: <global>
class dbj
{
public:
    // Static fields
    // static Il2CppString* bmrb;
    // static Il2CppString* bmrc;
    // static Action* bmrd;
    // static Action* bmre;
    // static dbh* bmrf;
    // static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> bmrg;
    // static Il2CppObject* bmrh;
    // static bool <bmri>k__BackingField;
    // static bool <bmrj>k__BackingField;
    // static bool <bmrk>k__BackingField;
    // static ObscuredFileReadResult <bmrl>k__BackingField;
    // static ObscuredFileWriteResult <bmrm>k__BackingField;
    // static dbm* <bmrn>k__BackingField;


    // Methods
    static ObscuredVector2 bay(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x67AB60
    static void whx(dbm* a);  // RVA: 0x6855E0
    static void bav(Il2CppString* a, dbr* b, bool c);  // RVA: 0x67A920
    static ObscuredDouble cdh(Il2CppString* a, ObscuredDouble b);  // RVA: 0x67B560
    static bool wig(Il2CppString* a);  // RVA: 0x686160
    static ObscuredVector2Int whb(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x684990
    static ObscuredDateTime wgk(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x683C10
    static ObscuredShort cvm(Il2CppString* a, ObscuredShort b);  // RVA: 0x67BBD0
    static void bxm(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x67B2F0
    static void wft(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6831E0
    static ObscuredInt myu(Il2CppString* a, ObscuredInt b);  // RVA: 0x681B20
    static void oce(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6824D0
    static ObscuredFloat oph(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6825E0
    static void wia(Il2CppString* a, bool b);  // RVA: 0x685820
    static void wfp(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x682F40
    static void wfs(Il2CppString* a, ObscuredFloat b);  // RVA: 0x683140
    static dbh* wim(Il2CppString* a, dbr* b);  // RVA: 0x686540
    static ObscuredULong hkg(Il2CppString* a, ObscuredULong b);  // RVA: 0x67EE70
    static void wgc(Il2CppString* a, ObscuredUShort b);  // RVA: 0x6836F0
    static void whq(bool a);  // RVA: 0x6852F0
    static void .cctor();  // RVA: 0x67A8A0
    static void whv(ObscuredFileWriteResult a);  // RVA: 0x685510
    static void nwq(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x682150
    static ObscuredBool wgh(Il2CppString* a, ObscuredBool b);  // RVA: 0x683A10
    static void kba(Il2CppString* a, ObscuredBool b);  // RVA: 0x680480
    static ObscuredChar wgj(Il2CppString* a, ObscuredChar b);  // RVA: 0x683B50
    static void wfu(Il2CppString* a, ObscuredInt b);  // RVA: 0x683290
    static void czk();  // RVA: 0x67BD90
    static ObscuredDateTimeOffset hrj(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x67F0E0
    static ObscuredUInt mzs(Il2CppString* a, ObscuredUInt b);  // RVA: 0x681BD0
    static ObscuredString* ieq(Il2CppString* a, ObscuredString* b);  // RVA: 0x67F7B0
    static ObscuredFloat wgp(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6840A0
    static void bff(Il2CppString* a, bool b);  // RVA: 0x67AC30
    static bool bup(Il2CppString* a);  // RVA: 0x67B270
    static ObscuredFileReadResult whs();  // RVA: 0x6853A0
    static void gyp(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x67E8A0
    static c wir(Il2CppString* a, c b);  // RVA: 0x563F30
    static void erf();  // RVA: 0x67CE30
    static ObscuredString* wgw(Il2CppString* a, ObscuredString* b);  // RVA: 0x684610
    static void iha();  // RVA: 0x67F830
    static void ja(Il2CppString* a, ObscuredByte b);  // RVA: 0x67FCA0
    static ObscuredDouble wgo(Il2CppString* a, ObscuredDouble b);  // RVA: 0x683FC0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> cnb();  // RVA: 0x67B700
    static ObscuredVector3 eoi(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x67CD30
    static ObscuredVector3 whc(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x684A50
    static ObscuredVector3Int whd(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x684B50
    static void wga(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6835E0
    static void win();  // RVA: 0x686660
    static void wgf(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6838B0
    static void wge(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x683820
    static dbr* whi();  // RVA: 0x685030
    static bool whj();  // RVA: 0x685080
    static void fwn(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x67D8E0
    static ObscuredDecimal gkz(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x67DE10
    static bool whm();  // RVA: 0x685190
    static ObscuredString* env(Il2CppString* a, ObscuredString* b);  // RVA: 0x67CBC0
    static void who(bool a);  // RVA: 0x685240
    static bool hyw();  // RVA: 0x67F290
    static void gtq(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x67E350
    static ObscuredSByte wgu(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6844D0
    static void wht(ObscuredFileReadResult a);  // RVA: 0x685410
    static ObscuredDecimal mky(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x6815A0
    static void jsb(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6801F0
    static ObscuredVector2 haa(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x67E950
    static ObscuredDecimal iak(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x67F630
    static bool gvu();  // RVA: 0x67E400
    static void lou(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x680CA0
    static void lrh();  // RVA: 0x680E60
    static void wfw(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6833A0
    static bool nvr(Il2CppString* a);  // RVA: 0x682050
    static void wic(Il2CppString* a, dbr* b, bool c);  // RVA: 0x685950
    static void gso(Il2CppString* a, ObscuredGuid b);  // RVA: 0x67E2A0
    static ObscuredDecimal wgm(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x683DC0
    static void p(Il2CppString* a, dbr* b, bool c);  // RVA: 0x6828C0
    static ObscuredQuaternion wgt(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6843D0
    static System.Collections.Generic.ICollection<System.String> wih();  // RVA: 0x6861E0
    static void lqm(Il2CppString* a, ObscuredByte b);  // RVA: 0x680DE0
    static ObscuredULong hrv(Il2CppString* a, ObscuredULong b);  // RVA: 0x67F1D0
    static void eev(Il2CppString* a, ObscuredByte b);  // RVA: 0x67C680
    static void gqp(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x67E010
    static void wfm(Il2CppString* a, ObscuredChar b);  // RVA: 0x682D70
    static void dpi(Il2CppString* a, ObscuredDouble b);  // RVA: 0x67C4B0
    static ObscuredBigInteger bt(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x67AF90
    static ObscuredUInt wgx(Il2CppString* a, ObscuredUInt b);  // RVA: 0x684690
    static void hex(Il2CppString* a, ObscuredGuid b);  // RVA: 0x67EAE0
    static void lpe(Il2CppString* a, ObscuredShort b);  // RVA: 0x680D50
    static void mwt(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x681970
    static void ftz(Il2CppString* a, ObscuredGuid b);  // RVA: 0x67D7C0
    static bool whl();  // RVA: 0x685130
    static void dxs(Il2CppString* a, ObscuredBool b);  // RVA: 0x67C5F0
    static void emz(Il2CppString* a, dbr* b, bool c);  // RVA: 0x67C980
    static void nga(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x681D20
    static bool myc(Il2CppString* a);  // RVA: 0x681AA0
    static void whf(Action* a);  // RVA: 0x684D40
    static void wif(bool a);  // RVA: 0x686080
    static bool Save();  // RVA: 0x67A500
    static ObscuredFileReadResult wit();  // RVA: 0x686D70
    static void whe(Action* a);  // RVA: 0x684C50
    static void npt(Il2CppString* a, ObscuredUInt b);  // RVA: 0x681E90
    static void lts(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x681140
    static void whk(bool a);  // RVA: 0x6850D0
    static void qp(Il2CppString* a, ObscuredDouble b);  // RVA: 0x682BC0
    static void wij();  // RVA: 0x686350
    static ObscuredByte fbl(Il2CppString* a, ObscuredByte b);  // RVA: 0x67D1A0
    static dbh* why();  // RVA: 0x685650
    static void lue();  // RVA: 0x6811F0
    static ObscuredFileReadResult bte();  // RVA: 0x67B090
    static void nrs(Il2CppString* a, ObscuredUShort b);  // RVA: 0x681F10
    static ObscuredVector3 lfc(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x680AB0
    static void wie();  // RVA: 0x685D50
    static ObscuredChar bzz(Il2CppString* a, ObscuredChar b);  // RVA: 0x67B4A0
    static ObscuredULong wgy(Il2CppString* a, ObscuredULong b);  // RVA: 0x684740
    static ObscuredUShort fev(Il2CppString* a, ObscuredUShort b);  // RVA: 0x67D220
    static bool fqu();  // RVA: 0x67D3A0
    static void wfy(Il2CppString* a, ObscuredShort b);  // RVA: 0x6834D0
    static bool whp();  // RVA: 0x6852A0
    static ObscuredChar hkp(Il2CppString* a, ObscuredChar b);  // RVA: 0x67EF30
    static void lyu(Il2CppString* a);  // RVA: 0x6813B0
    static void mnh(bool a);  // RVA: 0x6816A0
    static void elw();  // RVA: 0x67C700
    static ObscuredInt wgr(Il2CppString* a, ObscuredInt b);  // RVA: 0x684260
    static ObscuredByte wgi(Il2CppString* a, ObscuredByte b);  // RVA: 0x683AD0
    static ObscuredFileWriteResult gky();  // RVA: 0x67DC20
    static void ndc(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x681C80
    static void wfk(Il2CppString* a, ObscuredBool b);  // RVA: 0x682C60
    static ObscuredQuaternion fz(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x67DA60
    static ObscuredFileWriteResult wiu(Byte[][] a);  // RVA: 0x686F50
    static bool whn();  // RVA: 0x6851F0
    static void dvx(Il2CppString* a, ObscuredDouble b);  // RVA: 0x67C550
    static void lum(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x681260
    static ObscuredDateTime ngn(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x681DD0
    static void whz(bool a);  // RVA: 0x685760
    static ObscuredVector2 fyy(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x67D990
    static void kpo(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x680A00
    static void wgb(Il2CppString* a, ObscuredULong b);  // RVA: 0x683660
    static void bgr(Il2CppString* a, dbr* b, bool c);  // RVA: 0x67ACC0
    static void wid();  // RVA: 0x685B90
    static ObscuredByte icf(Il2CppString* a, ObscuredByte b);  // RVA: 0x67F730
    static ObscuredByte msb(Il2CppString* a, ObscuredByte b);  // RVA: 0x681840
    static void wfn(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x682E00
    static ObscuredFileWriteResult wiq();  // RVA: 0x686B80
    static ObscuredFileWriteResult otk(Byte[][] a);  // RVA: 0x6826A0
    static ObscuredDateTime grj(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x67E0A0
    static void wfl(Il2CppString* a, ObscuredByte b);  // RVA: 0x682CF0
    static void mpg(bool a);  // RVA: 0x681780
    static ObscuredBigInteger wgn(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x683EC0
    static void ctc(Il2CppString* a, ObscuredShort b);  // RVA: 0x67BB40
    static void wii(Il2CppString* a);  // RVA: 0x686260
    static ObscuredBigInteger byg(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x67B3A0
    static ObscuredBigInteger hgc(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x67EB90
    static void wfx(Il2CppString* a, ObscuredSByte b);  // RVA: 0x683450
    static void eoh(Il2CppString* a);  // RVA: 0x67CC40
    static void ijw(Il2CppString* a, bool b);  // RVA: 0x67FB60
    static void dnp();  // RVA: 0x67C180
    static Il2CppString* whr();  // RVA: 0x685350
    static void fsp(Il2CppString* a, ObscuredInt b);  // RVA: 0x67D740
    static void wfq(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x682FF0
    static void wis(Il2CppString* a, d b);  // RVA: 0x563F30
    static ObscuredInt kgw(Il2CppString* a, ObscuredInt b);  // RVA: 0x680950
    static ObscuredQuaternion md(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x6814A0
    static ObscuredFileWriteResult nys();  // RVA: 0x6822E0
    static void nvf(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x681FA0
    static ObscuredUShort qb(Il2CppString* a, ObscuredUShort b);  // RVA: 0x682B00
    static void nxz(bool a);  // RVA: 0x682200
    static void wgd(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x683780
    static void gsi(Il2CppString* a, ObscuredSByte b);  // RVA: 0x67E220
    static bool lgx(Il2CppString* a);  // RVA: 0x680BB0
    static void wik(Il2CppString* a, a b);  // RVA: 0x563F30
    static ObscuredFileWriteResult whu();  // RVA: 0x6854A0
    static void oez(Il2CppString* a, ObscuredSByte b);  // RVA: 0x682560
    static dbm* whw();  // RVA: 0x685590
    static ObscuredGuid wgq(Il2CppString* a, ObscuredGuid b);  // RVA: 0x684160
    static void etf(Il2CppString* a, ObscuredChar b);  // RVA: 0x67CEA0
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> kfn();  // RVA: 0x680510
    static ObscuredULong gen(Il2CppString* a, ObscuredULong b);  // RVA: 0x67DB60
    static void xr(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x687170
    static void wfv(Il2CppString* a, ObscuredLong b);  // RVA: 0x683310
    static ObscuredVector3 gpk(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x67DF10
    static ObscuredFloat grz(Il2CppString* a, ObscuredFloat b);  // RVA: 0x67E160
    static ObscuredVector3 gyd(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x67E7A0
    static System.Collections.Generic.ICollection<System.String> jdo();  // RVA: 0x67FD20
    static void ila(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x67FBF0
    static ObscuredVector2 wha(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6848C0
    static void mxe(Il2CppString* a, ObscuredULong b);  // RVA: 0x681A10
    static void whg(Action* a);  // RVA: 0x684E30
    static void whh(Action* a);  // RVA: 0x684F30
    static void evk(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x67CF30
    static ObscuredFileWriteResult jwm();  // RVA: 0x680290
    static ObscuredDateTimeOffset wgl(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x683CD0
    static void wfr(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6830A0
    static void lxk(Il2CppString* a, ObscuredDouble b);  // RVA: 0x681310
    static void jdz();  // RVA: 0x67FDA0
    static ObscuredUShort fqi(Il2CppString* a, ObscuredUShort b);  // RVA: 0x67D2E0
    static b wil(Il2CppString* a, b b);  // RVA: 0x563F30
    static ObscuredLong joc(Il2CppString* a, ObscuredLong b);  // RVA: 0x6800C0
    static ObscuredUShort ezs(Il2CppString* a, ObscuredUShort b);  // RVA: 0x67D0E0
    static void wio();  // RVA: 0x6866D0
    static void ltp(Il2CppString* a);  // RVA: 0x681050
    static void hqf(Il2CppString* a);  // RVA: 0x67EFF0
    static ObscuredByte nwg(Il2CppString* a, ObscuredByte b);  // RVA: 0x6820D0
    static void mte(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6818C0
    static ObscuredBool hdb(Il2CppString* a, ObscuredBool b);  // RVA: 0x67EA20
    static void lhx();  // RVA: 0x680C30
    static void wfz(Il2CppString* a, ObscuredString* b);  // RVA: 0x683560
    static ObscuredLong wgs(Il2CppString* a, ObscuredLong b);  // RVA: 0x684310
    static ObscuredBigInteger cwa(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x67BC90
    static void wib(dbr* a, bool b);  // RVA: 0x6858B0
    static dbh* ezc(Il2CppString* a, dbr* b);  // RVA: 0x67CFC0
    static ObscuredShort wgv(Il2CppString* a, ObscuredShort b);  // RVA: 0x684550
    static void jji();  // RVA: 0x680050
    static ObscuredShort czl(Il2CppString* a, ObscuredShort b);  // RVA: 0x67C0C0
    static void wgg(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x683960
    static ObscuredFloat cek(Il2CppString* a, ObscuredFloat b);  // RVA: 0x67B640
    static void emw(Il2CppString* a, ObscuredShort b);  // RVA: 0x67C8F0
    static ObscuredUShort wgz(Il2CppString* a, ObscuredUShort b);  // RVA: 0x684800
    static ObscuredULong jig(Il2CppString* a, ObscuredULong b);  // RVA: 0x67FF90
    static void fvz();  // RVA: 0x67D870
    static void bqg(Il2CppString* a, ObscuredULong b);  // RVA: 0x67AF00
    static void jqh();  // RVA: 0x680180
    static void wfo(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x682E90
    static ObscuredFileReadResult hja();  // RVA: 0x67EC90
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wip();  // RVA: 0x686740
};

// Namespace: <global>
class dbk
{
public:
    // Static fields
    // static bool bmro;


    // Methods
    static void wix(bool a);  // RVA: 0x687220
    static void wiy(bool a);  // RVA: 0x687230
    static void eso(bool a);  // RVA: 0x687230
    static void wja();  // RVA: 0x6878E0
    static void wiz(bool a);  // RVA: 0x6876A0
    static void wiv();  // RVA: 0x687240
    static void dti(bool a);  // RVA: 0x687220
    static void mxy(bool a);  // RVA: 0x687220
    static void eum(bool a);  // RVA: 0x687230
    static void ifz(bool a);  // RVA: 0x687230
    static bool wiw();  // RVA: 0x687680
    static void jtc(bool a);  // RVA: 0x687220
};

// Namespace: <global>
class dbl
{
public:

    // Methods
    static Byte[][] ns(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbm* b);  // RVA: 0x687B50
    static dbo* fky(dbm* a);  // RVA: 0x687A40
    static dbo* wjf(dbm* a);  // RVA: 0x687A40
    static dbo* bmr(dbm* a);  // RVA: 0x687A40
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> mma(Byte[][] a, dbm* b);  // RVA: 0x687AE0
    static Byte[][] nud(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbm* b);  // RVA: 0x687BC0
    static b wjc(ObscuredPrefsData a, dbm* b);  // RVA: 0x563F30
    static Byte[][] wjd(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a, dbm* b);  // RVA: 0x687C30
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> dik(Byte[][] a, dbm* b);  // RVA: 0x687A70
    static dbo* lro(dbm* a);  // RVA: 0x687A40
    static ObscuredPrefsData wjb(a a, dbm* b);  // RVA: 0x563F30
    static System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wje(Byte[][] a, dbm* b);  // RVA: 0x687CA0
    static dbo* iey(dbm* a);  // RVA: 0x687A40
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
    ACTkSerializationKind <bmrp>k__BackingField; // 0x0010

    // Methods
    ACTkSerializationKind wjg();  // RVA: 0x666240
    void .ctor(ACTkSerializationKind a);  // RVA: 0x6737E0
};

// Namespace: <global>
class dbn
{
public:
    // Static fields
    // static uint8_t bmrq;
    // static dbn* bmrr;


    // Methods
    static dbo* hmj();  // RVA: 0x687FD0
    static dbo* wjh();  // RVA: 0x688210
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wjn(BinaryReader* a);  // RVA: 0x688AA0
    static dbo* hcc();  // RVA: 0x687F40
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> ljf(BinaryReader* a);  // RVA: 0x688060
    void wjm(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x688170
    b wjj(ObscuredPrefsData a);  // RVA: 0x563F30
    void .ctor();  // RVA: 0x6284D0
    static dbo* dku();  // RVA: 0x687D10
    System.ValueTuple<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> fyz(BinaryReader* a);  // RVA: 0x687E30
    void loe(BinaryWriter* a, Il2CppString* b, ObscuredPrefsData c);  // RVA: 0x688170
    Byte[][] wjk(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x6882A0
    ObscuredPrefsData wji(a a);  // RVA: 0x563F30
    static dbo* dzg();  // RVA: 0x687DA0
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wjl(Byte[][] a);  // RVA: 0x688690
};

// Namespace: <global>
class dbo
{
public:

    // Methods
    ObscuredPrefsData wji(a a);  // RVA: 0x563F30
    b wjj(ObscuredPrefsData a);  // RVA: 0x563F30
    Byte[][] wjk(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x4196F0
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wjl(Byte[][] a);  // RVA: 0x4196F0
};

// Namespace: <global>
class dbp
{
public:
    // Static fields
    // static dbp* bmrs;


    // Methods
    static dbo* wjo();  // RVA: 0x688C30
    void .ctor();  // RVA: 0x6284D0
    Byte[][] wjk(System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> a);  // RVA: 0x688BB0
    System.Collections.Generic.Dictionary<System.String,CodeStage.AntiCheat.Storage.ObscuredPrefsData> wjl(Byte[][] a);  // RVA: 0x688BF0
    b wjj(ObscuredPrefsData a);  // RVA: 0x563F30
    ObscuredPrefsData wji(a a);  // RVA: 0x563F30
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
    ObscurationMode <bmrt>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Byte[][] <bmru>k__BackingField; // 0x0018

    // Methods
    ObscurationMode wjp();  // RVA: 0x667020
    Byte[][] wjq();  // RVA: 0x688DE0
    void .ctor(Il2CppString* a);  // RVA: 0x688CC0
    void .ctor(Byte[][] a);  // RVA: 0x688D90
};

// Namespace: <global>
class dbr
{
public:

    // Methods
    ObscuredFileLocation wjr();  // RVA: 0x421500
    dbq* wjs();  // RVA: 0x41C500
    dbg* wjt();  // RVA: 0x41C500
    bool wju();  // RVA: 0x421500
    bool wjv();  // RVA: 0x421500
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
    ObscuredFileLocation <bmrv>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    dbq* <bmrw>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbg* <bmrx>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    bool <bmry>k__BackingField; // 0x0028
    bool <bmrz>k__BackingField; // 0x0029

    // Methods
    ObscuredFileLocation wjr();  // RVA: 0x667020
    void wjw(ObscuredFileLocation a);  // RVA: 0x6740C0
    dbq* wjs();  // RVA: 0x688DE0
    void wjx(dbq* a);  // RVA: 0x673930
    dbg* wjt();  // RVA: 0x63EBD0
    void wjy(dbg* a);  // RVA: 0x63EBE0
    bool wju();  // RVA: 0x63EBF0
    void wjz(bool a);  // RVA: 0x63EC00
    bool wjv();  // RVA: 0x6890D0
    void wka(bool a);  // RVA: 0x6890E0
    void .ctor();  // RVA: 0x688DF0
    void .ctor(ObscuredFileLocation a);  // RVA: 0x688FF0
    void .ctor(dbg* a);  // RVA: 0x688F40
    void .ctor(dbq* a, dbg* b, ObscuredFileLocation c, bool d, bool e);  // RVA: 0x688EC0
};

// Namespace: <global>
class dbt
{
public:
    // Static fields
    // static Char[][] bmsa;
    // static Il2CppString* bmsb;
    // static Il2CppString* bmsc;
    // static Il2CppString* bmsd;
    // static uint8_t bmse;
    // static bool bmsf;
    // static bool bmsg;
    // static Il2CppString* bmsh;
    // static Il2CppString* bmsi;
    // static dbf* bmsj;
    // static Action* bmsk;
    // static Action* bmsl;
    // static Action* bmsm;
    // static Action* bmsn;
    // static bool bmso;
    // static dbg* <bmsp>k__BackingField;


    // Methods
    static b wnj(Il2CppString* a, Il2CppString* b, b c, Il2CppString* d);  // RVA: 0x563F30
    static Byte[][] jlr(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x68E5C0
    static void wlw(Il2CppString* a, ObscuredLong b);  // RVA: 0x692270
    static void bvv(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x689690
    static void wkf(Il2CppString* a, float b);  // RVA: 0x6908B0
    static void kqf(Il2CppString* a, ObscuredSByte b);  // RVA: 0x68EF90
    static ObscuredVector3 wnd(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x6939B0
    static Il2CppString* wnt();  // RVA: 0x695A60
    static void bxf();  // RVA: 0x689740
    static bool hvf(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x68D100
    static ObscuredFloat ggs(Il2CppString* a, ObscuredFloat b);  // RVA: 0x68C050
    static Il2CppString* bar(Il2CppString* a, Il2CppString* b);  // RVA: 0x689280
    static void wkd(Il2CppString* a, Il2CppString* b);  // RVA: 0x6907D0
    static void wot(Il2CppString* a, c b);  // RVA: 0x563F30
    static Vector2 wky(Il2CppString* a, Vector2 b);  // RVA: 0x6913A0
    static Color32 wlh(Il2CppString* a, Color32 b);  // RVA: 0x691970
    static void wkr(Il2CppString* a, bool b);  // RVA: 0x690E30
    static Byte[][] opd(Il2CppString* a);  // RVA: 0x68FE60
    static bool wok();  // RVA: 0x6967C0
    static float wkg(Il2CppString* a, float b);  // RVA: 0x690920
    static dbg* wof();  // RVA: 0x696510
    static ObscuredDouble ful(Il2CppString* a, ObscuredDouble b);  // RVA: 0x68BE40
    static Il2CppString* gxd(Il2CppString* a, Il2CppString* b);  // RVA: 0x689280
    static ObscuredSByte hjj(Il2CppString* a, ObscuredSByte b);  // RVA: 0x68CAE0
    static void cim();  // RVA: 0x689BD0
    static void wls(Il2CppString* a, ObscuredDouble b);  // RVA: 0x692000
    static Il2CppString* mvj(Il2CppString* a, Il2CppString* b);  // RVA: 0x689280
    static ObscuredBool wmi(Il2CppString* a, ObscuredBool b);  // RVA: 0x692970
    static ObscuredSByte wmv(Il2CppString* a, ObscuredSByte b);  // RVA: 0x693430
    static void kwn(Il2CppString* a, Il2CppString* b);  // RVA: 0x68F220
    static ObscuredBool mph(Il2CppString* a, ObscuredBool b);  // RVA: 0x68F690
    static ObscuredDateTime wml(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x692B70
    static void woz();  // RVA: 0x696D00
    static void wmc(Il2CppString* a, ObscuredULong b);  // RVA: 0x6925C0
    static void dez();  // RVA: 0x68A8A0
    static void cgb(Il2CppString* a, ObscuredByte b);  // RVA: 0x689A30
    static void wlv(Il2CppString* a, ObscuredInt b);  // RVA: 0x6921F0
    static void wlm(Il2CppString* a, ObscuredByte b);  // RVA: 0x691C50
    static void jh(Il2CppString* a, ObscuredGuid b);  // RVA: 0x68DE10
    static void msm(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x68F810
    static Il2CppString* gyo(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x68C110
    static Il2CppString* wni(Il2CppString* a, a b);  // RVA: 0x563F30
    static ObscuredUInt cqj(Il2CppString* a, ObscuredUInt b);  // RVA: 0x689DE0
    static void dg(Il2CppString* a, ObscuredLong b);  // RVA: 0x68AA30
    static ObscuredDouble wmp(Il2CppString* a, ObscuredDouble b);  // RVA: 0x692F20
    static Il2CppString* wke(Il2CppString* a, Il2CppString* b);  // RVA: 0x690840
    static void klo(Il2CppString* a, Il2CppString* b);  // RVA: 0x68DCB0
    static void bjx(Il2CppString* a, float b);  // RVA: 0x6895C0
    static bool bzu(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x689860
    static void jbg();  // RVA: 0x68DD00
    static uint64_t wkq(Il2CppString* a, uint64_t b);  // RVA: 0x690DC0
    static void wlo(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x691D60
    static void wos();  // RVA: 0x696C10
    static ObscuredULong fxz(Il2CppString* a, ObscuredULong b);  // RVA: 0x68BF90
    static Vector2 wkx(Il2CppString* a);  // RVA: 0x6912C0
    static void hhl(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x68C6E0
    static void woq(Il2CppString* a);  // RVA: 0x696AD0
    static void wkb(Il2CppString* a, int32_t b);  // RVA: 0x6906F0
    static ObscuredULong evs(Il2CppString* a, ObscuredULong b);  // RVA: 0x68B640
    static ObscuredByte dcy(Il2CppString* a, ObscuredByte b);  // RVA: 0x68A820
    static void wkp(Il2CppString* a, uint64_t b);  // RVA: 0x690D50
    static bool bmd(Il2CppString* a, Il2CppString* b);  // RVA: 0x689630
    static ObscuredGuid wmr(Il2CppString* a, ObscuredGuid b);  // RVA: 0x6930C0
    static void cfc(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6899B0
    static ObscuredDecimal wmn(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x692D20
    static e wov(Il2CppString* a, e b);  // RVA: 0x563F30
    static ObscuredBigInteger wmo(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x692E20
    static void jxp(Il2CppString* a, ObscuredUInt b);  // RVA: 0x68E850
    static Color32 wlg(Il2CppString* a);  // RVA: 0x6918D0
    static ObscuredVector2 wnb(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x693820
    static void imn(Il2CppString* a, ObscuredUShort b);  // RVA: 0x68D4E0
    static uint32_t wki(Il2CppString* a, uint32_t b);  // RVA: 0x690A00
    static Il2CppString* ixa(Il2CppString* a, Il2CppString* b);  // RVA: 0x68DAC0
    static void hjs(Il2CppString* a, ObscuredChar b);  // RVA: 0x68CB60
    static void wol(bool a);  // RVA: 0x696850
    static ObscuredUInt wmy(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6935F0
    static void wlr(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x691F50
    static void ofe(Il2CppString* a, ObscuredLong b);  // RVA: 0x68FCB0
    static void hcw(Il2CppString* a, ObscuredInt b);  // RVA: 0x68C5C0
    static bool ofy(Il2CppString* a);  // RVA: 0x68FD40
    static void mvs(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68F8C0
    static ObscuredVector3Int wne(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x693AB0
    static ObscuredShort wmw(Il2CppString* a, ObscuredShort b);  // RVA: 0x6934B0
    static Il2CppString* wng(Il2CppString* a);  // RVA: 0x693E30
    static void iig(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68D440
    static void wmg(Il2CppString* a, ObscuredVector3 b);  // RVA: 0x692810
    static void wlx(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x692300
    static ObscuredGuid meo(Il2CppString* a, ObscuredGuid b);  // RVA: 0x68F460
    static ObscuredChar mbo(Il2CppString* a, ObscuredChar b);  // RVA: 0x68F3A0
    static ObscuredDateTimeOffset coo(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x689CF0
    static void mpf(Il2CppString* a, Il2CppString* b);  // RVA: 0x68DCB0
    static Il2CppString* wno(Il2CppString* a, Il2CppString* b);  // RVA: 0x694AF0
    static bool wnp(Il2CppString* a, Il2CppString* b);  // RVA: 0x694C70
    static void wlf(Il2CppString* a, Color32 b);  // RVA: 0x691860
    static void ecg(Il2CppString* a);  // RVA: 0x68B1B0
    static void woe(Action* a);  // RVA: 0x696410
    static bool otb(Il2CppString* a, Il2CppString* b);  // RVA: 0x690420
    static bool hny(Il2CppString* a, Il2CppString* b);  // RVA: 0x68CC70
    static void ctg(Il2CppString* a, ObscuredUShort b);  // RVA: 0x689F20
    static ObscuredFloat wmq(Il2CppString* a, ObscuredFloat b);  // RVA: 0x693000
    static void wnx(Action* a);  // RVA: 0x695D10
    static void woh(DeviceLockLevel a);  // RVA: 0x6965F0
    static void jen(Il2CppString* a, ObscuredByte b);  // RVA: 0x68DD90
    static void wkh(Il2CppString* a, uint32_t b);  // RVA: 0x690990
    static void wob(Action* a);  // RVA: 0x696110
    static ObscuredULong mpo(Il2CppString* a, ObscuredULong b);  // RVA: 0x68F750
    static ObscuredUInt etb(Il2CppString* a, ObscuredUInt b);  // RVA: 0x68B4F0
    static ObscuredVector2 dr(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68AE20
    static Byte[][] wkv(uint8_t a, int32_t b);  // RVA: 0x6911D0
    static Il2CppString* ori(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x68FFF0
    static void ngp(Il2CppString* a, ObscuredGuid b);  // RVA: 0x68FB70
    static void woa(Action* a);  // RVA: 0x696010
    static void wnz(Action* a);  // RVA: 0x695F10
    static Byte[][] wku(Il2CppString* a, uint8_t b, int32_t c);  // RVA: 0x690F80
    static Byte[][] jhi(Il2CppString* a);  // RVA: 0x68DEC0
    static void ids(Il2CppString* a, int32_t b);  // RVA: 0x68D350
    static Il2CppString* woy(Il2CppString* a, Il2CppString* b);  // RVA: 0x689280
    static Vector3 wlb(Il2CppString* a, Vector3 b);  // RVA: 0x6915A0
    static void wnv(Il2CppString* a);  // RVA: 0x695AC0
    static void jji();  // RVA: 0x68E110
    static void wod(Action* a);  // RVA: 0x696310
    static ObscuredFloat kjk(Il2CppString* a, ObscuredFloat b);  // RVA: 0x68ED40
    static void Save();  // RVA: 0x6890F0
    static Byte[][] daz(Il2CppString* a, Il2CppString* b);  // RVA: 0x68A0B0
    static Vector3 wla(Il2CppString* a);  // RVA: 0x691490
    static Byte[][] wnn(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x694A20
    static void wow(Il2CppString* a, Il2CppString* b);  // RVA: 0x68DCB0
    static void ndq(Il2CppString* a, float b);  // RVA: 0x68FB00
    static void won(Il2CppString* a, Il2CppString* b);  // RVA: 0x6968F0
    static void wkj(Il2CppString* a, double b);  // RVA: 0x690A70
    static void dcd();  // RVA: 0x68A700
    static void .cctor();  // RVA: 0x689190
    static ObscuredULong wmz(Il2CppString* a, ObscuredULong b);  // RVA: 0x6936A0
    static void wkn(Il2CppString* a, int64_t b);  // RVA: 0x690C70
    static bool woo(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x696950
    static void fqo(Il2CppString* a, Il2CppString* b);  // RVA: 0x68BBD0
    static void fws(Il2CppString* a, Il2CppString* b);  // RVA: 0x68BF20
    static void wlt(Il2CppString* a, ObscuredFloat b);  // RVA: 0x6920A0
    static int64_t wko(Il2CppString* a, int64_t b);  // RVA: 0x690CE0
    static void wkl(Il2CppString* a, Decimal b);  // RVA: 0x690B50
    static void dfr(Il2CppString* a, Il2CppString* b);  // RVA: 0x68A9C0
    static ObscuredVector2 dyw(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68B060
    static float ixo(Il2CppString* a, float b);  // RVA: 0x68DC40
    static void cuk(Il2CppString* a, float b);  // RVA: 0x68A040
    static void woj(bool a);  // RVA: 0x696720
    static void wln(Il2CppString* a, ObscuredChar b);  // RVA: 0x691CD0
    static void wpa();  // RVA: 0x696E20
    static ObscuredInt wms(Il2CppString* a, ObscuredInt b);  // RVA: 0x6931C0
    static ObscuredChar wmk(Il2CppString* a, ObscuredChar b);  // RVA: 0x692AB0
    static void wll(Il2CppString* a, ObscuredBool b);  // RVA: 0x691BC0
    static void cbp(Il2CppString* a, ObscuredChar b);  // RVA: 0x689920
    static Quaternion wld(Il2CppString* a);  // RVA: 0x6916D0
    static bool wop(Il2CppString* a);  // RVA: 0x696A10
    static ObscuredUInt kwk(Il2CppString* a, ObscuredUInt b);  // RVA: 0x68F170
    static void wkt(Il2CppString* a, Byte[][] b);  // RVA: 0x690F10
    static void wns(Il2CppString* a);  // RVA: 0x6959F0
    static void cgr(Il2CppString* a, ObscuredDouble b);  // RVA: 0x689AB0
    static void mnt(Il2CppString* a, ObscuredLong b);  // RVA: 0x68F600
    static void sb(Il2CppString* a, ObscuredFloat b);  // RVA: 0x690650
    static DeviceLockLevel wog();  // RVA: 0x696560
    static void hsd(Il2CppString* a, ObscuredDouble b);  // RVA: 0x68D060
    static void esj(Il2CppString* a, ObscuredByte b);  // RVA: 0x68B470
    static bool jkx(Il2CppString* a, Il2CppString* b);  // RVA: 0x68E1B0
    static Byte[][] wnr(Il2CppString* a);  // RVA: 0x695860
    static void ch(Il2CppString* a, ObscuredInt b);  // RVA: 0x689B50
    static void dsf(Il2CppString* a, ObscuredInt b);  // RVA: 0x68AEF0
    static Il2CppString* wnu();  // RVA: 0x695AB0
    static void wme(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x6926E0
    static bool ohy(Il2CppString* a, Il2CppString* b);  // RVA: 0x68FE00
    static ObscuredDouble bju(Il2CppString* a, ObscuredDouble b);  // RVA: 0x6894E0
    static void wly(Il2CppString* a, ObscuredSByte b);  // RVA: 0x6923B0
    static void naz();  // RVA: 0x68FA70
    static void dvw(Il2CppString* a, float b);  // RVA: 0x68AF70
    static void qp(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x690500
    static void bfc(Il2CppString* a, ObscuredString* b);  // RVA: 0x689350
    static void mfm(Il2CppString* a, ObscuredVector2 b);  // RVA: 0x68F560
    static dbf* wnw();  // RVA: 0x695B20
    static void wny(Action* a);  // RVA: 0x695E10
    static ObscuredUInt bcd(Il2CppString* a, ObscuredUInt b);  // RVA: 0x6892A0
    static void ctr(Il2CppString* a, ObscuredChar b);  // RVA: 0x689FB0
    static void cry(Il2CppString* a, ObscuredULong b);  // RVA: 0x689E90
    static Byte[][] wnq(Byte[][] a, int32_t b, Il2CppString* c);  // RVA: 0x695770
    static void yz(Il2CppString* a, int32_t b);  // RVA: 0x696F40
    static ObscuredByte wmj(Il2CppString* a, ObscuredByte b);  // RVA: 0x692A30
    static ObscuredBool jig(Il2CppString* a, ObscuredBool b);  // RVA: 0x68E050
    static bool kjd(Il2CppString* a, Il2CppString* b);  // RVA: 0x68E9F0
    static int32_t wkc(Il2CppString* a, int32_t b);  // RVA: 0x690760
    static void dlz(Il2CppString* a, ObscuredUInt b);  // RVA: 0x68AB20
    static ObscuredDateTimeOffset wmm(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x692C30
    static void wkz(Il2CppString* a, Vector3 b);  // RVA: 0x691410
    static void kdq();  // RVA: 0x68E8D0
    static void bim(Il2CppString* a, ObscuredUInt b);  // RVA: 0x689460
    static Il2CppString* wnl(Il2CppString* a, Byte[][] b, StorageDataType c);  // RVA: 0x694030
    static ObscuredDateTimeOffset fox(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x68BAE0
    static Byte[][] wnm(Il2CppString* a, Il2CppString* b);  // RVA: 0x694450
    static ObscuredBigInteger iab(Il2CppString* a, ObscuredBigInteger b);  // RVA: 0x68D1C0
    static ObscuredDouble fgg(Il2CppString* a, ObscuredDouble b);  // RVA: 0x68BA00
    static void wmb(Il2CppString* a, ObscuredUInt b);  // RVA: 0x692540
    static void juk();  // RVA: 0x68E790
    static double wkk(Il2CppString* a, double b);  // RVA: 0x690AE0
    static void wma(Il2CppString* a, ObscuredString* b);  // RVA: 0x6924C0
    static void hov(Il2CppString* a, ObscuredFloat b);  // RVA: 0x68CFC0
    static ObscuredInt rz(Il2CppString* a, ObscuredInt b);  // RVA: 0x6905A0
    static Byte[][] kps(Byte[][] a, int32_t b, Char[][] c);  // RVA: 0x68EEC0
    static Char[][] wnf(Il2CppString* a, Il2CppString* b);  // RVA: 0x693BB0
    static ObscuredULong ipk(Il2CppString* a, ObscuredULong b);  // RVA: 0x68D570
    static bool hic(Il2CppString* a, Il2CppString* b);  // RVA: 0x68C770
    static ObscuredShort eyl(Il2CppString* a, ObscuredShort b);  // RVA: 0x68B940
    static bool ejq(Il2CppString* a, Il2CppString* b);  // RVA: 0x68B230
    static void dyr(Il2CppString* a);  // RVA: 0x68AFE0
    static void wli(Il2CppString* a, Rect b);  // RVA: 0x6919E0
    static ObscuredLong wmt(Il2CppString* a, ObscuredLong b);  // RVA: 0x693270
    static void mb(Il2CppString* a, ObscuredSByte b);  // RVA: 0x68F320
    static ObscuredUShort wna(Il2CppString* a, ObscuredUShort b);  // RVA: 0x693760
    static void wlu(Il2CppString* a, ObscuredGuid b);  // RVA: 0x692140
    static void wom();  // RVA: 0x673CB0
    static void idk(Il2CppString* a, ObscuredULong b);  // RVA: 0x68D2C0
    static ObscuredSByte iwl(Il2CppString* a, ObscuredSByte b);  // RVA: 0x68DA40
    static void wmh(Il2CppString* a, ObscuredVector3Int b);  // RVA: 0x6928C0
    static d wou(Il2CppString* a, d b);  // RVA: 0x563F30
    static void wlq(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x691EA0
    static void bfu(Il2CppString* a, ObscuredBool b);  // RVA: 0x6893D0
    static ObscuredVector2Int kox(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x68EE00
    static Char[][] doc(Il2CppString* a, Il2CppString* b);  // RVA: 0x68ABA0
    static void wor();  // RVA: 0x696B50
    static void myb(Il2CppString* a, ObscuredShort b);  // RVA: 0x68F960
    static StorageDataType wnh(Il2CppString* a);  // RVA: 0x693EF0
    static ObscuredSByte irl(Il2CppString* a, ObscuredSByte b);  // RVA: 0x68D7B0
    static bool woi();  // RVA: 0x696690
    static Il2CppString* itm(Il2CppString* a, Il2CppString* b);  // RVA: 0x68D8C0
    static void woc(Action* a);  // RVA: 0x696210
    static ObscuredString* ebe(Il2CppString* a, ObscuredString* b);  // RVA: 0x68B130
    static void jth(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x68E700
    static Il2CppString* jqm(Il2CppString* a, Il2CppString* b);  // RVA: 0x68E690
    static ObscuredQuaternion wmu(Il2CppString* a, ObscuredQuaternion b);  // RVA: 0x693330
    static bool err(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x68B3B0
    static bool wox(Il2CppString* a, Il2CppString* b);  // RVA: 0x696CA0
    static ObscuredString* wmx(Il2CppString* a, ObscuredString* b);  // RVA: 0x693570
    static ObscuredString* hbt(Il2CppString* a, ObscuredString* b);  // RVA: 0x68C540
    static Rect wlj(Il2CppString* a);  // RVA: 0x691A60
    static void wmd(Il2CppString* a, ObscuredUShort b);  // RVA: 0x692650
    static void dlf(Il2CppString* a, Il2CppString* b);  // RVA: 0x68AAC0
    static Byte[][] eya(Il2CppString* a);  // RVA: 0x68B7B0
    static bool kup(Il2CppString* a, Il2CppString* b, Il2CppString* c);  // RVA: 0x68F0B0
    static ObscuredVector2Int wnc(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x6938F0
    static Byte[][] fsn(Il2CppString* a);  // RVA: 0x68BCB0
    static void kzq(Il2CppString* a, ObscuredDateTime b);  // RVA: 0x68F290
    static ObscuredString* pk(Il2CppString* a, ObscuredString* b);  // RVA: 0x690480
    static Decimal wkm(Il2CppString* a, Decimal defaultValue);  // RVA: 0x690BD0
    static void wkw(Il2CppString* a, Vector2 b);  // RVA: 0x691250
    static void wlz(Il2CppString* a, ObscuredShort b);  // RVA: 0x692430
    static void nth();  // RVA: 0x68FC20
    static void hnh(Il2CppString* a, ObscuredByte b);  // RVA: 0x68CBF0
    static void iyo(Il2CppString* a, Il2CppString* b);  // RVA: 0x68DCB0
    static bool wks(Il2CppString* a, bool b);  // RVA: 0x690EA0
    static void irm(Il2CppString* a, ObscuredChar b);  // RVA: 0x68D830
    static void eve(Il2CppString* a, ObscuredFloat b);  // RVA: 0x68B5A0
    static void ru(Il2CppString* a, Il2CppString* b);  // RVA: 0x68DCB0
    static Rect wlk(Il2CppString* a, Rect b);  // RVA: 0x691B20
    static ObscuredUShort dca(Il2CppString* a, ObscuredUShort b);  // RVA: 0x68A640
    static Il2CppString* ipr(Il2CppString* a, Il2CppString* b);  // RVA: 0x68D630
    static void wlc(Il2CppString* a, Quaternion b);  // RVA: 0x691650
    static Byte[][] wnk(Il2CppString* a, Il2CppString* b, uint8_t c, int32_t d);  // RVA: 0x693F90
    static void krf();  // RVA: 0x68F010
    static void mza(Il2CppString* a, ObscuredSByte b);  // RVA: 0x68F9F0
    static void wlp(Il2CppString* a, ObscuredDateTimeOffset b);  // RVA: 0x691DF0
    static void wmf(Il2CppString* a, ObscuredVector2Int b);  // RVA: 0x692780
    static void ihf(Il2CppString* a, ObscuredUInt b);  // RVA: 0x68D3C0
    static void eku();  // RVA: 0x68B290
    static Quaternion wle(Il2CppString* a, Quaternion b);  // RVA: 0x6917C0
    static ObscuredString* frh(Il2CppString* a, ObscuredString* b);  // RVA: 0x68BC30
    static void hem();  // RVA: 0x68C640
    static void ewm(Il2CppString* a, ObscuredDecimal b);  // RVA: 0x68B700
};

// Namespace: <global>
class dbu
{
public:

    // Methods
    int32_t wpb();  // RVA: 0x420530
    void wpc();  // RVA: 0x42E0A0
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
        static ObscuredBigInteger op_Implicit(BigInteger value);  // RVA: 0x698CF0
        static ObscuredBigInteger op_Implicit(uint8_t value);  // RVA: 0x6990C0
        static ObscuredBigInteger op_Implicit(int8_t value);  // RVA: 0x698EE0
        static ObscuredBigInteger op_Implicit(int16_t value);  // RVA: 0x698C60
        static ObscuredBigInteger op_Implicit(uint16_t value);  // RVA: 0x699150
        static ObscuredBigInteger op_Implicit(int32_t value);  // RVA: 0x698B40
        static ObscuredBigInteger op_Implicit(uint32_t value);  // RVA: 0x698BD0
        static ObscuredBigInteger op_Implicit(int64_t value);  // RVA: 0x698FA0
        static ObscuredBigInteger op_Implicit(uint64_t value);  // RVA: 0x698E50
        static ObscuredBigInteger op_Implicit(float value);  // RVA: 0x698D30
        static ObscuredBigInteger op_Implicit(double value);  // RVA: 0x698DC0
        static ObscuredBigInteger op_Implicit(Decimal value);  // RVA: 0x699030
        static BigInteger op_Implicit(ObscuredBigInteger value);  // RVA: 0x698F70
        static uint8_t wpd(ObscuredBigInteger a);  // RVA: 0x699240
        static int8_t wpe(ObscuredBigInteger a);  // RVA: 0x6992B0
        static int16_t wpf(ObscuredBigInteger a);  // RVA: 0x699320
        static uint16_t wpg(ObscuredBigInteger a);  // RVA: 0x699390
        static int32_t wph(ObscuredBigInteger a);  // RVA: 0x699400
        static uint32_t wpi(ObscuredBigInteger a);  // RVA: 0x699470
        static int64_t wpj(ObscuredBigInteger a);  // RVA: 0x6994E0
        static uint64_t wpk(ObscuredBigInteger a);  // RVA: 0x699550
        static float wpl(ObscuredBigInteger a);  // RVA: 0x6995C0
        static double wpm(ObscuredBigInteger a);  // RVA: 0x699630
        static Decimal wpn(ObscuredBigInteger a);  // RVA: 0x6996A0
        static ObscuredBigInteger wpo(ObscuredBigInteger a, int32_t b);  // RVA: 0x699730
        static ObscuredBigInteger wpp(ObscuredBigInteger a, int32_t b);  // RVA: 0x699830
        static ObscuredBigInteger wpq(ObscuredBigInteger a);  // RVA: 0x699930
        static ObscuredBigInteger wpr(ObscuredBigInteger a);  // RVA: 0x699A20
        static ObscuredBigInteger wps(ObscuredBigInteger a);  // RVA: 0x699B10
        static ObscuredBigInteger wpt(ObscuredBigInteger a, int64_t b);  // RVA: 0x699C00
        static ObscuredBigInteger wpu(ObscuredBigInteger a, int64_t b);  // RVA: 0x699D30
        static ObscuredBigInteger wpv(ObscuredBigInteger a);  // RVA: 0x699E70
        static ObscuredBigInteger wpw(ObscuredBigInteger a);  // RVA: 0x69A010
        static bool wpx(ObscuredBigInteger a, int64_t b);  // RVA: 0x69A1B0
        static bool wpy(ObscuredBigInteger a, int64_t b);  // RVA: 0x69A270
        static bool wpz(ObscuredBigInteger a, int64_t b);  // RVA: 0x69A330
        static bool wqa(ObscuredBigInteger a, int64_t b);  // RVA: 0x69A3D0
        static bool wqb(ObscuredBigInteger a, int64_t b);  // RVA: 0x69A470
        static bool wqc(ObscuredBigInteger a, int64_t b);  // RVA: 0x69A510
        static bool wqd(ObscuredBigInteger a, uint64_t b);  // RVA: 0x69A5B0
        static bool wqe(ObscuredBigInteger a, uint64_t b);  // RVA: 0x69A670
        static bool wqf(ObscuredBigInteger a, uint64_t b);  // RVA: 0x69A730
        static bool wqg(ObscuredBigInteger a, uint64_t b);  // RVA: 0x69A7D0
        static bool wqh(ObscuredBigInteger a, uint64_t b);  // RVA: 0x69A870
        static bool wqi(ObscuredBigInteger a, uint64_t b);  // RVA: 0x69A910
        static bool wqj(int64_t a, ObscuredBigInteger b);  // RVA: 0x69A9B0
        static bool wqk(int64_t a, ObscuredBigInteger b);  // RVA: 0x69AA50
        static bool wql(int64_t a, ObscuredBigInteger b);  // RVA: 0x69AAF0
        static bool wqm(int64_t a, ObscuredBigInteger b);  // RVA: 0x69AB90
        static bool wqn(int64_t a, ObscuredBigInteger b);  // RVA: 0x69AC30
        static bool wqo(int64_t a, ObscuredBigInteger b);  // RVA: 0x69ACD0
        static bool wqp(uint64_t a, ObscuredBigInteger b);  // RVA: 0x69AD70
        static bool wqq(uint64_t a, ObscuredBigInteger b);  // RVA: 0x69AE10
        static bool wqr(uint64_t a, ObscuredBigInteger b);  // RVA: 0x69AEB0
        static bool wqs(uint64_t a, ObscuredBigInteger b);  // RVA: 0x69AF50
        static bool wqt(uint64_t a, ObscuredBigInteger b);  // RVA: 0x69AFF0
        static bool wqu(uint64_t a, ObscuredBigInteger b);  // RVA: 0x69B090
        static ObscuredBigInteger wqv(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x69B130
        static ObscuredBigInteger wqw(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x69B270
        static ObscuredBigInteger wqx(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x69B3B0
        static ObscuredBigInteger wqy(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x69B4F0
        static ObscuredBigInteger wqz(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x69B630
        static ObscuredBigInteger wra(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x69B770
        static ObscuredBigInteger wrb(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x69B8B0
        static ObscuredBigInteger wrc(ObscuredBigInteger a, ObscuredBigInteger b);  // RVA: 0x69B9F0
        static ObscuredBigInteger wrd(ObscuredBigInteger a, int32_t b);  // RVA: 0x69BB30
        int32_t GetHashCode();  // RVA: 0x6987C0
        Il2CppString* ToString();  // RVA: 0x698890
        Il2CppString* wre(Il2CppString* a);  // RVA: 0x69BC20
        Il2CppString* wrf(IFormatProvider* a);  // RVA: 0x69BCA0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x698900
        bool Equals(Il2CppObject* other);  // RVA: 0x698500
        bool Equals(BigInteger other);  // RVA: 0x698470
        bool Equals(ObscuredBigInteger obj);  // RVA: 0x698690
        int32_t CompareTo(ObscuredBigInteger other);  // RVA: 0x698330
        int32_t CompareTo(BigInteger other);  // RVA: 0x6983E0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6982B0
        int32_t wrg(int64_t a);  // RVA: 0x69BD20
        int32_t wrh(uint64_t a);  // RVA: 0x69BDA0
        Byte[][] wri();  // RVA: 0x69BE20
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x698830
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(BigInteger value);  // RVA: 0x6989B0
        static BigInteger wrj(BigInteger a, uint32_t b);  // RVA: 0x69BE90
        static BigInteger wrk(BigInteger a, uint32_t b);  // RVA: 0x69BFF0
        static ObscuredBigInteger wrl(BigInteger a, uint32_t b);  // RVA: 0x69C050
        static uint32_t wrm();  // RVA: 0x69C120
        BigInteger wrn(uint32_t a);  // RVA: 0x69C130
        void wro(BigInteger a, uint32_t b);  // RVA: 0x69C210
        BigInteger wrp();  // RVA: 0x698F70
        void wpc();  // RVA: 0x6991F0
        static bool wrq(BigInteger a, int32_t b);  // RVA: 0x69C2D0
        void wrr(BigInteger a);  // RVA: 0x69C2F0
        BigInteger wrs();  // RVA: 0x69C3D0
        bool wrt();  // RVA: 0x69C5F0
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
    bool Equals(BigIntegerContents other);  // RVA: 0x697EA0
    bool Equals(Il2CppObject* obj);  // RVA: 0x697F20
    int32_t GetHashCode();  // RVA: 0x698000
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
        SerializableBigInteger wru(uint32_t a);  // RVA: 0x6B6E40
        BigInteger wrv(uint32_t a);  // RVA: 0x6B6EE0
        SerializableBigInteger wrw(uint32_t a);  // RVA: 0x6B6E40
        static BigInteger op_Implicit(SerializableBigInteger value);  // RVA: 0x6B6DF0
        bool Equals(SerializableBigInteger other);  // RVA: 0x6B6C50
        bool Equals(Il2CppObject* obj);  // RVA: 0x6B6CC0
        int32_t GetHashCode();  // RVA: 0x6B6DA0
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
        static ObscuredBool op_Implicit(bool value);  // RVA: 0x69CB10
        static bool op_Implicit(ObscuredBool value);  // RVA: 0x69CB90
        int32_t GetHashCode();  // RVA: 0x69C9D0
        Il2CppString* ToString();  // RVA: 0x69CA60
        bool Equals(Il2CppObject* other);  // RVA: 0x69C770
        bool Equals(ObscuredBool obj);  // RVA: 0x69C960
        bool Equals(bool other);  // RVA: 0x69C910
        int32_t CompareTo(ObscuredBool other);  // RVA: 0x69C670
        int32_t CompareTo(bool other);  // RVA: 0x69C6D0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x69C720
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x69CA10
        int32_t wpb();  // RVA: 0x6991E0
        void wrx(bool a);  // RVA: 0x69CC00
        bool wry();  // RVA: 0x666D00
        void .ctor(bool value);  // RVA: 0x69CAA0
        static int32_t wrz(bool a, uint8_t b);  // RVA: 0x69CC10
        static bool wsa(int32_t a, uint8_t b);  // RVA: 0x69CC30
        static ObscuredBool wsb(int32_t a, uint8_t b);  // RVA: 0x69CC50
        static uint8_t wsc();  // RVA: 0x69CCC0
        int32_t wsd(uint8_t a);  // RVA: 0x69CCD0
        void wse(int32_t a, uint8_t b);  // RVA: 0x69CD70
        bool wsf();  // RVA: 0x69CDD0
        void wpc();  // RVA: 0x69CBA0
        static bool wsg(bool a, int32_t b);  // RVA: 0x69CDE0
        void wsh(bool a);  // RVA: 0x69CDF0
        bool wsi();  // RVA: 0x69CE30
        bool wsj();  // RVA: 0x69CF70
        static void wsk(uint8_t a);  // RVA: 0x635AE0
        void wsl();  // RVA: 0x635AE0
        static bool wsm(int32_t a, uint8_t b);  // RVA: 0x69CF90
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
        static ObscuredByte op_Implicit(uint8_t value);  // RVA: 0x69D370
        static uint8_t op_Implicit(ObscuredByte value);  // RVA: 0x69D3D0
        static ObscuredByte wsn(ObscuredByte a);  // RVA: 0x69D430
        static ObscuredByte wso(ObscuredByte a);  // RVA: 0x69D490
        static ObscuredByte wsp(ObscuredByte a, int32_t b);  // RVA: 0x69D4F0
        int32_t GetHashCode();  // RVA: 0x69D220
        Il2CppString* ToString();  // RVA: 0x69D2A0
        Il2CppString* wsq(Il2CppString* a);  // RVA: 0x69D550
        Il2CppString* wsr(IFormatProvider* a);  // RVA: 0x69D580
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x69D2D0
        bool Equals(Il2CppObject* other);  // RVA: 0x69D070
        bool Equals(ObscuredByte obj);  // RVA: 0x69D1C0
        bool Equals(uint8_t other);  // RVA: 0x69D040
        int32_t CompareTo(ObscuredByte other);  // RVA: 0x69CFA0
        int32_t CompareTo(uint8_t other);  // RVA: 0x69D010
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x69CFE0
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x69D250
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(uint8_t value);  // RVA: 0x69D310
        static uint8_t wss(uint8_t a, uint8_t b);  // RVA: 0x69D5B0
        static void wst(Byte[][] a, uint8_t b);  // RVA: 0x69D5C0
        static uint8_t wsu(uint8_t a, uint8_t b);  // RVA: 0x69D620
        static void wsv(Byte[][] a, uint8_t b);  // RVA: 0x69D630
        static ObscuredByte wsw(uint8_t a, uint8_t b);  // RVA: 0x69D690
        static uint8_t wsx();  // RVA: 0x69CCC0
        uint8_t wsy(uint8_t a);  // RVA: 0x69D6E0
        void wsz(uint8_t a, uint8_t b);  // RVA: 0x69D760
        uint8_t wta();  // RVA: 0x69D7B0
        void wpc();  // RVA: 0x69D3F0
        static bool wtb(uint8_t a, int32_t b);  // RVA: 0x69D7C0
        void wtc(uint8_t a);  // RVA: 0x69D7D0
        uint8_t wtd();  // RVA: 0x69D800
        bool wte();  // RVA: 0x69D900
        static void wtf(uint8_t a);  // RVA: 0x635AE0
        void wtg();  // RVA: 0x635AE0
        static uint8_t wth(uint8_t a, uint8_t b);  // RVA: 0x69D920
        static void wti(Byte[][] a, uint8_t b);  // RVA: 0x69D960
        static uint8_t wtj(uint8_t a, uint8_t b);  // RVA: 0x69D9A0
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
        static ObscuredChar op_Implicit(wchar_t value);  // RVA: 0x69DE40
        static wchar_t op_Implicit(ObscuredChar value);  // RVA: 0x69DE30
        static ObscuredChar wtk(ObscuredChar a);  // RVA: 0x69DEF0
        static ObscuredChar wtl(ObscuredChar a);  // RVA: 0x69DF80
        static ObscuredChar wtm(ObscuredChar a, int32_t b);  // RVA: 0x69E010
        int32_t GetHashCode();  // RVA: 0x69DD50
        Il2CppString* ToString();  // RVA: 0x69DD90
        Il2CppString* wtn(IFormatProvider* a);  // RVA: 0x69E090
        bool Equals(Il2CppObject* other);  // RVA: 0x69DB00
        bool Equals(ObscuredChar other);  // RVA: 0x69DCC0
        bool Equals(wchar_t other);  // RVA: 0x69DAB0
        int32_t CompareTo(ObscuredChar other);  // RVA: 0x69D9B0
        int32_t CompareTo(wchar_t other);  // RVA: 0x69DA10
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x69DA60
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(wchar_t value);  // RVA: 0x69DDD0
        static wchar_t wto(wchar_t a, wchar_t b);  // RVA: 0x69E0E0
        static wchar_t wtp(wchar_t a, wchar_t b);  // RVA: 0x69E0F0
        static ObscuredChar wtq(wchar_t a, wchar_t b);  // RVA: 0x69E100
        static wchar_t wtr();  // RVA: 0x69E160
        wchar_t wts(wchar_t a);  // RVA: 0x69E170
        void wtt(wchar_t a, wchar_t b);  // RVA: 0x69E220
        wchar_t wtu();  // RVA: 0x69E270
        void wpc();  // RVA: 0x69DEA0
        static bool wtv(wchar_t a, int32_t b);  // RVA: 0x69E280
        void wtw(wchar_t a);  // RVA: 0x69E290
        wchar_t wtx();  // RVA: 0x69E2C0
        bool wty();  // RVA: 0x69E400
        static void wtz(wchar_t a);  // RVA: 0x635AE0
        void wua();  // RVA: 0x635AE0
        static wchar_t wub(wchar_t a, wchar_t b);  // RVA: 0x69E450
        static wchar_t wuc(wchar_t a, wchar_t b);  // RVA: 0x69E450
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
        int64_t wud();  // RVA: 0x6A2910
        static ObscuredDateTime op_Implicit(DateTime value);  // RVA: 0x6A2830
        static DateTime op_Implicit(ObscuredDateTime value);  // RVA: 0x6A2860
        int32_t GetHashCode();  // RVA: 0x6A2400
        Il2CppString* ToString();  // RVA: 0x6A26E0
        Il2CppString* wue(Il2CppString* a);  // RVA: 0x6A29C0
        TypeCode GetTypeCode();  // RVA: 0x6A24B0
        bool wuf(IFormatProvider* a);  // RVA: 0x6A2A80
        wchar_t wug(IFormatProvider* a);  // RVA: 0x6A2AC0
        int8_t wuh(IFormatProvider* a);  // RVA: 0x6A2B00
        uint8_t wui(IFormatProvider* a);  // RVA: 0x6A2B40
        int16_t wuj(IFormatProvider* a);  // RVA: 0x6A2B80
        uint16_t wuk(IFormatProvider* a);  // RVA: 0x6A2BC0
        int32_t wul(IFormatProvider* a);  // RVA: 0x6A2C00
        uint32_t wum(IFormatProvider* a);  // RVA: 0x6A2C40
        int64_t wun(IFormatProvider* a);  // RVA: 0x6A2C80
        uint64_t wuo(IFormatProvider* a);  // RVA: 0x6A2CC0
        float wup(IFormatProvider* a);  // RVA: 0x6A2D00
        double wuq(IFormatProvider* a);  // RVA: 0x6A2D40
        Decimal wur(IFormatProvider* a);  // RVA: 0x6A2D80
        DateTime wus(IFormatProvider* a);  // RVA: 0x6A2DC0
        Il2CppObject* wut(Type* a, IFormatProvider* b);  // RVA: 0x6A2E30
        Il2CppString* ToString(IFormatProvider* provider);  // RVA: 0x6A2550
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6A2610
        bool Equals(Il2CppObject* other);  // RVA: 0x6A21E0
        bool Equals(ObscuredDateTime other);  // RVA: 0x6A2180
        bool Equals(DateTime other);  // RVA: 0x6A2340
        int32_t CompareTo(ObscuredDateTime other);  // RVA: 0x6A1FC0
        int32_t CompareTo(DateTime other);  // RVA: 0x6A1F00
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A20C0
        static DateTime wuu(ObscuredDateTime a, TimeSpan b);  // RVA: 0x6A3030
        static DateTime wuv(ObscuredDateTime a, TimeSpan b);  // RVA: 0x6A30F0
        static TimeSpan wuw(ObscuredDateTime a, DateTime b);  // RVA: 0x6A31B0
        static TimeSpan wux(DateTime a, ObscuredDateTime b);  // RVA: 0x6A3270
        static bool wuy(ObscuredDateTime a, DateTime b);  // RVA: 0x6A3330
        static bool wuz(DateTime a, ObscuredDateTime b);  // RVA: 0x6A33F0
        static bool wva(ObscuredDateTime a, DateTime b);  // RVA: 0x6A34B0
        static bool wvb(DateTime a, ObscuredDateTime b);  // RVA: 0x6A3570
        static bool wvc(ObscuredDateTime a, DateTime b);  // RVA: 0x6A3630
        static bool wvd(DateTime a, ObscuredDateTime b);  // RVA: 0x6A36F0
        static bool wve(ObscuredDateTime a, DateTime b);  // RVA: 0x6A37B0
        static bool wvf(DateTime a, ObscuredDateTime b);  // RVA: 0x6A3870
        static bool wvg(ObscuredDateTime a, DateTime b);  // RVA: 0x6A3930
        static bool wvh(DateTime a, ObscuredDateTime b);  // RVA: 0x6A39F0
        static bool wvi(ObscuredDateTime a, DateTime b);  // RVA: 0x6A3AB0
        static bool wvj(DateTime a, ObscuredDateTime b);  // RVA: 0x6A3B70
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6A24C0
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(DateTime value);  // RVA: 0x6A2790
        static int64_t wvk(DateTime a, int64_t b);  // RVA: 0x6A3C30
        static DateTime wvl(int64_t a, int64_t b);  // RVA: 0x6A3C90
        static ObscuredDateTime wvm(int64_t a, int64_t b);  // RVA: 0x6A3D80
        static int64_t wvn();  // RVA: 0x6A1960
        int64_t wvo(int64_t a);  // RVA: 0x6A3DB0
        void wvp(int64_t a, int64_t b);  // RVA: 0x6A3EB0
        DateTime wvq();  // RVA: 0x6A3F60
        void wpc();  // RVA: 0x6A28C0
        static bool wvr(DateTime a, int32_t b);  // RVA: 0x6A3FC0
        static bool wvs(int64_t a, int32_t b);  // RVA: 0x6A1C50
        void wvt(int64_t a);  // RVA: 0x6A1C60
        static int64_t wvu(int64_t a, int64_t b);  // RVA: 0x6A1C90
        static int64_t wvv(int64_t a, int64_t b);  // RVA: 0x6A1CA0
        DateTime wvw();  // RVA: 0x6A2860
        int64_t wvx();  // RVA: 0x6A4020
        bool wvy();  // RVA: 0x6A1EE0
        static DateTime wvz(int64_t a, int64_t b);  // RVA: 0x6A41B0
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
        int64_t wwa();  // RVA: 0x69F000
        DateTime wwb();  // RVA: 0x69F0D0
        DateTime wwc();  // RVA: 0x69F1A0
        int32_t wwd();  // RVA: 0x69F270
        DayOfWeek wwe();  // RVA: 0x69F340
        int32_t wwf();  // RVA: 0x69F410
        int32_t wwg();  // RVA: 0x69F4E0
        int32_t wwh();  // RVA: 0x69F5B0
        int32_t wwi();  // RVA: 0x69F680
        int32_t wwj();  // RVA: 0x69F750
        TimeSpan wwk();  // RVA: 0x69F820
        int32_t wwl();  // RVA: 0x69F8F0
        TimeSpan wwm();  // RVA: 0x69F9C0
        DateTime wwn();  // RVA: 0x69FA90
        int32_t wwo();  // RVA: 0x69FB60
        static ObscuredDateTimeOffset op_Implicit(DateTimeOffset value);  // RVA: 0x69EE60
        static DateTimeOffset op_Implicit(ObscuredDateTimeOffset value);  // RVA: 0x69EF10
        int32_t GetHashCode();  // RVA: 0x69EA80
        Il2CppString* ToString();  // RVA: 0x69ECF0
        Il2CppString* wwp(Il2CppString* a);  // RVA: 0x69FC30
        Il2CppString* wwq(IFormatProvider* a);  // RVA: 0x69FD10
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x69EC00
        bool Equals(Il2CppObject* other);  // RVA: 0x69E8C0
        bool Equals(ObscuredDateTimeOffset other);  // RVA: 0x69EA20
        bool Equals(DateTimeOffset other);  // RVA: 0x69E7D0
        int32_t CompareTo(ObscuredDateTimeOffset other);  // RVA: 0x69E550
        int32_t CompareTo(DateTimeOffset other);  // RVA: 0x69E460
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x69E6B0
        static DateTimeOffset wwr(ObscuredDateTimeOffset a, TimeSpan b);  // RVA: 0x69FDF0
        static DateTimeOffset wws(ObscuredDateTimeOffset a, TimeSpan b);  // RVA: 0x69FEF0
        static TimeSpan wwt(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x69FFF0
        static TimeSpan wwu(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A00E0
        static TimeSpan wwv(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A01D0
        static bool www(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6A0350
        static bool wwx(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A0440
        static bool wwy(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A0530
        static bool wwz(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6A06B0
        static bool wxa(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A07A0
        static bool wxb(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A0890
        static bool wxc(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6A0A10
        static bool wxd(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A0B00
        static bool wxe(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A0BF0
        static bool wxf(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6A0D70
        static bool wxg(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A0E60
        static bool wxh(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A0F50
        static bool wxi(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6A10D0
        static bool wxj(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A11C0
        static bool wxk(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A12B0
        static bool wxl(ObscuredDateTimeOffset a, DateTimeOffset b);  // RVA: 0x6A1430
        static bool wxm(DateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A1520
        static bool wxn(ObscuredDateTimeOffset a, ObscuredDateTimeOffset b);  // RVA: 0x6A1610
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x69EB50
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(DateTimeOffset value);  // RVA: 0x69EDC0
        static int64_t wxo(DateTimeOffset a, int64_t b);  // RVA: 0x6A1790
        static DateTimeOffset wxp(int64_t a, int64_t b);  // RVA: 0x6A17F0
        static ObscuredDateTimeOffset wxq(int64_t a, int64_t b);  // RVA: 0x6A1930
        static int64_t wxr();  // RVA: 0x6A1960
        int64_t wxs(int64_t a);  // RVA: 0x6A1970
        void wxt(int64_t a, int64_t b);  // RVA: 0x6A1A80
        DateTimeOffset wxu();  // RVA: 0x6A1B50
        void wpc();  // RVA: 0x69EFB0
        static bool wxv(DateTimeOffset a, int32_t b);  // RVA: 0x6A1BE0
        static bool wxw(int64_t a, int32_t b);  // RVA: 0x6A1C50
        void wxx(int64_t a);  // RVA: 0x6A1C60
        static int64_t wxy(int64_t a, int64_t b);  // RVA: 0x6A1C90
        static int64_t wxz(int64_t a, int64_t b);  // RVA: 0x6A1CA0
        DateTimeOffset wya();  // RVA: 0x6A1CB0
        int64_t wyb();  // RVA: 0x6A1D40
        bool wyc();  // RVA: 0x6A1EE0
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
        static ObscuredDecimal op_Implicit(Decimal value);  // RVA: 0x6A49E0
        static Decimal op_Implicit(ObscuredDecimal value);  // RVA: 0x6A4A20
        static ObscuredDecimal wyd(ObscuredFloat a);  // RVA: 0x6A4AC0
        static ObscuredDecimal wye(ObscuredDecimal a);  // RVA: 0x6A4C10
        static ObscuredDecimal wyf(ObscuredDecimal a);  // RVA: 0x6A4D80
        static ObscuredDecimal wyg(ObscuredDecimal a, Decimal b);  // RVA: 0x6A4EF0
        int32_t GetHashCode();  // RVA: 0x6A4720
        Il2CppString* ToString();  // RVA: 0x6A4810
        Il2CppString* wyh(Il2CppString* a);  // RVA: 0x6A4FF0
        Il2CppString* wyi(IFormatProvider* a);  // RVA: 0x6A5070
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6A4880
        bool Equals(Il2CppObject* other);  // RVA: 0x6A4400
        bool Equals(ObscuredDecimal other);  // RVA: 0x6A4590
        bool Equals(Decimal other);  // RVA: 0x6A4690
        int32_t CompareTo(ObscuredDecimal other);  // RVA: 0x6A4240
        int32_t CompareTo(Decimal other);  // RVA: 0x6A4370
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A42F0
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6A4790
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(Decimal value);  // RVA: 0x6A4910
        static Decimal wyj(Decimal a, int64_t b);  // RVA: 0x698050
        static Decimal wyk(Decimal a, int64_t b);  // RVA: 0x698050
        static ObscuredDecimal wyl(Decimal a, int64_t b);  // RVA: 0x6A50F0
        static int64_t wym();  // RVA: 0x6A1960
        Decimal wyn(int64_t a);  // RVA: 0x6A5170
        void wyo(Decimal a, int64_t b);  // RVA: 0x6A52F0
        Decimal wyp();  // RVA: 0x6A4A20
        void wpc();  // RVA: 0x6A4A50
        static bool wyq(Decimal a, int32_t b);  // RVA: 0x6A5360
        void wyr(Decimal a);  // RVA: 0x6A5380
        static ACTkByte16 wys(Decimal a, int64_t b);  // RVA: 0x698050
        Decimal wyt();  // RVA: 0x6A53D0
        bool wyu();  // RVA: 0x6A56D0
        static void wyv(int64_t a);  // RVA: 0x635AE0
        void wyw();  // RVA: 0x635AE0
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
        static Decimal wyx(Decimal a, int64_t b);  // RVA: 0x698050
        static ACTkByte16 wyy(Decimal a, int64_t b);  // RVA: 0x698050
        static Decimal wyz(ACTkByte16 a, int64_t b);  // RVA: 0x698050
        static Decimal wza(ACTkByte16 a);  // RVA: 0x667010
        static ACTkByte16 wzb(Decimal a);  // RVA: 0x667010
        static DecimalLongBytesUnion wzc(Decimal a);  // RVA: 0x667010
        static DecimalLongBytesUnion wzd(ACTkByte16 a);  // RVA: 0x667010
        DecimalLongBytesUnion wze(int64_t a);  // RVA: 0x698080
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
    static int64_t wzf(int64_t a, uint8_t b, uint8_t c);  // RVA: 0x6980A0
    static int64_t wzg(double a, int64_t b);  // RVA: 0x6980E0
    static double wzh(int64_t a, int64_t b);  // RVA: 0x698110
    static DoubleLongBytesUnion wzi(double a);  // RVA: 0x698140
    static DoubleLongBytesUnion wzj(int64_t a);  // RVA: 0x698150
    DoubleLongBytesUnion wzk(int64_t a);  // RVA: 0x698160
    DoubleLongBytesUnion wzl(int64_t a);  // RVA: 0x698180
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
        static ObscuredDouble op_Implicit(double value);  // RVA: 0x6A5C00
        static double op_Implicit(ObscuredDouble value);  // RVA: 0x6A5BF0
        static ObscuredDouble wzm(ObscuredFloat a);  // RVA: 0x6A5C90
        static ObscuredDouble wzn(ObscuredDouble a);  // RVA: 0x6A5D50
        static ObscuredDouble wzo(ObscuredDouble a);  // RVA: 0x6A5E10
        static ObscuredDouble wzp(ObscuredDouble a, double b);  // RVA: 0x6A5ED0
        int32_t GetHashCode();  // RVA: 0x6A5A30
        Il2CppString* ToString();  // RVA: 0x6A5B40
        Il2CppString* wzq(Il2CppString* a);  // RVA: 0x6A5F80
        Il2CppString* wzr(IFormatProvider* a);  // RVA: 0x6A5FC0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6A5AF0
        bool Equals(Il2CppObject* other);  // RVA: 0x6A57E0
        bool Equals(ObscuredDouble other);  // RVA: 0x6A5990
        bool Equals(double other);  // RVA: 0x6A59F0
        int32_t CompareTo(ObscuredDouble other);  // RVA: 0x6A57A0
        int32_t CompareTo(double other);  // RVA: 0x6A5720
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A5760
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6A5A80
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(double value);  // RVA: 0x6A5B70
        static int64_t wzs(double a, int64_t b);  // RVA: 0x6980E0
        static double wzt(int64_t a, int64_t b);  // RVA: 0x698110
        static int64_t wzu(int64_t a, uint8_t b, uint8_t c);  // RVA: 0x6980A0
        static ObscuredDouble wzv(int64_t a, int64_t b);  // RVA: 0x6A6000
        static int64_t wzw();  // RVA: 0x6A1960
        int64_t wzx(int64_t a);  // RVA: 0x6A6090
        void wzy(int64_t a, int64_t b);  // RVA: 0x6A6150
        double wzz();  // RVA: 0x6A61D0
        void wpc();  // RVA: 0x6A5C30
        static bool xaa(double a, int32_t b);  // RVA: 0x6A61E0
        void xab(double a);  // RVA: 0x6A61F0
        static bool xac(double a, double b);  // RVA: 0x6A6250
        double xad();  // RVA: 0x6A6310
        bool xae();  // RVA: 0x6A1EE0
        static void xaf(int64_t a);  // RVA: 0x635AE0
        void xag();  // RVA: 0x635AE0
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
    static int32_t xah(int32_t a, uint8_t b, uint8_t c);  // RVA: 0x6981B0
    static int32_t xai(float a, int32_t b);  // RVA: 0x6981E0
    static float xaj(int32_t a, int32_t b);  // RVA: 0x698210
    static FloatIntBytesUnion xak(float a);  // RVA: 0x698240
    static FloatIntBytesUnion xal(int32_t a);  // RVA: 0x698250
    FloatIntBytesUnion xam(int32_t a);  // RVA: 0x698260
    FloatIntBytesUnion xan(int32_t a);  // RVA: 0x698280
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
        static ObscuredFloat op_Implicit(float value);  // RVA: 0x6A69D0
        static float op_Implicit(ObscuredFloat value);  // RVA: 0x6A69C0
        static ObscuredFloat xao(ObscuredFloat a);  // RVA: 0x6A6A60
        static ObscuredFloat xap(ObscuredFloat a);  // RVA: 0x6A6B00
        static ObscuredFloat xaq(ObscuredFloat a, int32_t b);  // RVA: 0x6A6BA0
        int32_t GetHashCode();  // RVA: 0x6A6830
        Il2CppString* ToString();  // RVA: 0x6A6910
        Il2CppString* xar(Il2CppString* a);  // RVA: 0x6A6C40
        Il2CppString* xas(IFormatProvider* a);  // RVA: 0x6A6C80
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6A68C0
        bool Equals(Il2CppObject* other);  // RVA: 0x6A6620
        bool Equals(ObscuredFloat other);  // RVA: 0x6A67D0
        bool Equals(float other);  // RVA: 0x6A6790
        int32_t CompareTo(ObscuredFloat other);  // RVA: 0x6A65E0
        int32_t CompareTo(float other);  // RVA: 0x6A65A0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A6560
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6A6860
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(float value);  // RVA: 0x6A6940
        static int32_t xat(float a, int32_t b);  // RVA: 0x6981E0
        static float xau(int32_t a, int32_t b);  // RVA: 0x698210
        static ObscuredFloat xav(int32_t a, int32_t b);  // RVA: 0x6A6CC0
        static int32_t xaw();  // RVA: 0x69C120
        int32_t xax(int32_t a);  // RVA: 0x6A6D40
        void xay(int32_t a, int32_t b);  // RVA: 0x6A6DE0
        float xaz();  // RVA: 0x6A6E50
        void wpc();  // RVA: 0x6A6A00
        static bool xba(float a, int32_t b);  // RVA: 0x6A6E60
        void xbb(float a);  // RVA: 0x6A6E70
        static bool xbc(float a, float b);  // RVA: 0x6A6EC0
        float xbd();  // RVA: 0x6A6F80
        bool xbe();  // RVA: 0x6A7180
        static void xbf(int32_t a);  // RVA: 0x635AE0
        void xbg();  // RVA: 0x635AE0
        static int32_t xbh(int32_t a, uint8_t b, uint8_t c);  // RVA: 0x6981B0
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
        static ObscuredGuid op_Implicit(Guid value);  // RVA: 0x6A7720
        static Guid op_Implicit(ObscuredGuid value);  // RVA: 0x6A76F0
        int32_t GetHashCode();  // RVA: 0x6A74E0
        Il2CppString* ToString();  // RVA: 0x6A75E0
        Il2CppString* xbi(Il2CppString* a);  // RVA: 0x6A7830
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6A7590
        bool Equals(Il2CppObject* other);  // RVA: 0x6A7390
        bool Equals(ObscuredGuid other);  // RVA: 0x6A72E0
        bool Equals(Guid other);  // RVA: 0x6A7290
        int32_t CompareTo(ObscuredGuid other);  // RVA: 0x6A7230
        int32_t CompareTo(Guid other);  // RVA: 0x6A71A0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A71F0
        static bool xbj(ObscuredGuid a, Guid b);  // RVA: 0x6A7870
        static bool xbk(Guid a, ObscuredGuid b);  // RVA: 0x6A78D0
        static bool xbl(ObscuredGuid a, ObscuredGuid b);  // RVA: 0x6A7930
        static bool xbm(ObscuredGuid a, Guid b);  // RVA: 0x6A79D0
        static bool xbn(Guid a, ObscuredGuid b);  // RVA: 0x6A7A30
        static bool xbo(ObscuredGuid a, ObscuredGuid b);  // RVA: 0x6A7A90
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6A7520
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(Guid value);  // RVA: 0x6A7620
        static void xbp(Guid a, int64_t b, int64_t c, int64_t d);  // RVA: 0x6A7B30
        static Guid xbq(int64_t a, int64_t b, int64_t c);  // RVA: 0x6A7BB0
        static ObscuredGuid xbr(int64_t a, int64_t b, int64_t c);  // RVA: 0x6A7DA0
        static int64_t xbs();  // RVA: 0x6A1960
        static int32_t xbt(int64_t a, int64_t b);  // RVA: 0x6A7DD0
        void xbu(int64_t a, int64_t b, int64_t c);  // RVA: 0x6A7E10
        void xbv(int64_t a, int64_t b, int64_t c);  // RVA: 0x6A7F70
        Guid xbw();  // RVA: 0x6A76F0
        void wpc();  // RVA: 0x6A7760
        static bool xbx(Guid a, int32_t b);  // RVA: 0x6A8030
        static bool xby(System.ReadOnlySpan<System.Byte> a, int32_t b);  // RVA: 0x6A80F0
        void xbz(Guid a);  // RVA: 0x6A81E0
        static int64_t xca(int64_t a, int64_t b);  // RVA: 0x6A1C90
        static int64_t xcb(int64_t a, int64_t b);  // RVA: 0x6A1CA0
        Guid xcc();  // RVA: 0x6A8280
        static bool xcd(Byte[][] a, Byte[][] b);  // RVA: 0x6A8610
        bool xce();  // RVA: 0x6A8680
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
        static ObscuredInt op_Implicit(int32_t value);  // RVA: 0x6A8B80
        static int32_t op_Implicit(ObscuredInt value);  // RVA: 0x6A8C90
        static ObscuredFloat op_Implicit(ObscuredInt value);  // RVA: 0x6A8AE0
        static ObscuredDouble op_Implicit(ObscuredInt value);  // RVA: 0x6A8BE0
        static ObscuredUInt op_Explicit(ObscuredInt value);  // RVA: 0x6A8A70
        static ObscuredInt xcf(ObscuredInt a);  // RVA: 0x6A8CE0
        static ObscuredInt xcg(ObscuredInt a);  // RVA: 0x6A8D50
        static ObscuredInt xch(ObscuredInt a, int32_t b);  // RVA: 0x6A8DC0
        int32_t GetHashCode();  // RVA: 0x6A8920
        Il2CppString* ToString();  // RVA: 0x6A89F0
        Il2CppString* xci(Il2CppString* a);  // RVA: 0x6A8E30
        Il2CppString* xcj(IFormatProvider* a);  // RVA: 0x6A8E70
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6A89A0
        bool Equals(Il2CppObject* other);  // RVA: 0x6A8780
        bool Equals(ObscuredInt other);  // RVA: 0x6A88C0
        bool Equals(int32_t other);  // RVA: 0x6A8750
        int32_t CompareTo(ObscuredInt other);  // RVA: 0x6A8710
        int32_t CompareTo(int32_t other);  // RVA: 0x6A86A0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A86D0
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6A8950
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(int32_t value);  // RVA: 0x6A8A20
        static int32_t xck(int32_t a, int32_t b);  // RVA: 0x6A8EB0
        static int32_t xcl(int32_t a, int32_t b);  // RVA: 0x6A8EC0
        static ObscuredInt xcm(int32_t a, int32_t b);  // RVA: 0x6A8ED0
        static int32_t xcn();  // RVA: 0x69C120
        int32_t xco(int32_t a);  // RVA: 0x6A8F20
        void xcp(int32_t a, int32_t b);  // RVA: 0x6A8F90
        int32_t xcq();  // RVA: 0x6A8FD0
        void wpc();  // RVA: 0x6A8CA0
        static bool xcr(int32_t a, int32_t b);  // RVA: 0x6A8FE0
        void xcs(int32_t a);  // RVA: 0x6A8FF0
        int32_t xct();  // RVA: 0x6A9020
        bool xcu();  // RVA: 0x6A7180
        static void xcv(int32_t a);  // RVA: 0x635AE0
        void xcw();  // RVA: 0x635AE0
        static int32_t xcx(int32_t a, int32_t b);  // RVA: 0x6A9110
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
        static ObscuredLong op_Implicit(int64_t value);  // RVA: 0x6A9530
        static int64_t op_Implicit(ObscuredLong value);  // RVA: 0x6A9590
        static ObscuredLong xcy(ObscuredLong a);  // RVA: 0x6A95E0
        static ObscuredLong xcz(ObscuredLong a);  // RVA: 0x6A9670
        static ObscuredLong xda(ObscuredLong a, int32_t b);  // RVA: 0x6A9700
        int32_t GetHashCode();  // RVA: 0x6A93D0
        Il2CppString* ToString();  // RVA: 0x6A9450
        Il2CppString* xdb(Il2CppString* a);  // RVA: 0x6A9770
        Il2CppString* xdc(IFormatProvider* a);  // RVA: 0x6A97B0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6A9480
        bool Equals(Il2CppObject* other);  // RVA: 0x6A9280
        bool Equals(ObscuredLong other);  // RVA: 0x6A91E0
        bool Equals(int64_t other);  // RVA: 0x6A9240
        int32_t CompareTo(ObscuredLong other);  // RVA: 0x6A9160
        int32_t CompareTo(int64_t other);  // RVA: 0x6A91A0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6A9120
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6A9400
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(int64_t value);  // RVA: 0x6A94D0
        static int64_t xdd(int64_t a, int64_t b);  // RVA: 0x6A1C90
        static int64_t xde(int64_t a, int64_t b);  // RVA: 0x6A1CA0
        static ObscuredLong xdf(int64_t a, int64_t b);  // RVA: 0x6A97F0
        static int64_t xdg();  // RVA: 0x6A1960
        int64_t xdh(int64_t a);  // RVA: 0x6A9840
        void xdi(int64_t a, int64_t b);  // RVA: 0x6A98D0
        int64_t xdj();  // RVA: 0x6A9920
        void wpc();  // RVA: 0x6A95A0
        static bool xdk(int64_t a, int32_t b);  // RVA: 0x6A1C50
        void xdl(int64_t a);  // RVA: 0x6A1C60
        int64_t xdm();  // RVA: 0x6A9930
        bool xdn();  // RVA: 0x6A1EE0
        static void xdo(int64_t a);  // RVA: 0x635AE0
        void xdp();  // RVA: 0x635AE0
        static int64_t xdq(int64_t a, int64_t b);  // RVA: 0x6A9A50
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
    bool Equals(RawEncryptedQuaternion other);  // RVA: 0x6B6910
    bool Equals(Il2CppObject* obj);  // RVA: 0x6B6940
    int32_t GetHashCode();  // RVA: 0x6B69F0
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
        static ObscuredQuaternion op_Implicit(Quaternion value);  // RVA: 0x6AA260
        static Quaternion op_Implicit(ObscuredQuaternion value);  // RVA: 0x6AA230
        static ObscuredQuaternion xdr(ObscuredQuaternion a, ObscuredQuaternion b);  // RVA: 0x6AA3C0
        static ObscuredQuaternion xds(ObscuredQuaternion a, Quaternion b);  // RVA: 0x6AA5C0
        bool Equals(Il2CppObject* other);  // RVA: 0x6A9BA0
        bool Equals(ObscuredQuaternion other);  // RVA: 0x6A9A60
        bool Equals(Quaternion other);  // RVA: 0x6A9D40
        int32_t GetHashCode();  // RVA: 0x6A9DF0
        Il2CppString* ToString();  // RVA: 0x6A9FC0
        Il2CppString* xdt(Il2CppString* a);  // RVA: 0x6AA7A0
        void xdu();  // RVA: 0x6AA7F0
        Quaternion xdv();  // RVA: 0x6AA910
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6A9E80
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(Quaternion value);  // RVA: 0x6AA000
        void .ctor(float x, float y, float z, float w);  // RVA: 0x6AA100
        float xdw();  // RVA: 0x6AA950
        void xdx(float a);  // RVA: 0x6AA970
        float xdy();  // RVA: 0x6AAA10
        void xdz(float a);  // RVA: 0x6AAA30
        float xea();  // RVA: 0x6AAAD0
        void xeb(float a);  // RVA: 0x6AAAF0
        float xec();  // RVA: 0x6AAB90
        void xed(float a);  // RVA: 0x6AABB0
        float get_Item(int32_t index);  // RVA: 0x6AA140
        void set_Item(int32_t index, float value);  // RVA: 0x6AA2A0
        static RawEncryptedQuaternion xee(Quaternion a, int32_t b);  // RVA: 0x6AAC50
        static RawEncryptedQuaternion xef(float a, float b, float c, float d, int32_t e);  // RVA: 0x6AAD10
        static Quaternion xeg(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x6AADD0
        static ObscuredQuaternion xeh(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x6AAE70
        static int32_t xei();  // RVA: 0x69C120
        static bool xej(Quaternion a, Quaternion b);  // RVA: 0x6AAEB0
        RawEncryptedQuaternion xek(int32_t a);  // RVA: 0x6AAFD0
        void xel(RawEncryptedQuaternion a, int32_t b);  // RVA: 0x6AB080
        Quaternion xem();  // RVA: 0x6AA230
        void wpc();  // RVA: 0x6AA370
        static bool xen(Quaternion a, int32_t b);  // RVA: 0x6AB1A0
        void xeo(Quaternion a);  // RVA: 0x6AB1C0
        Quaternion xep();  // RVA: 0x6AB2A0
        bool xeq();  // RVA: 0x6AB600
        static void xer(int32_t a);  // RVA: 0x635AE0
        void xes();  // RVA: 0x635AE0
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
        static ObscuredSByte op_Implicit(int8_t value);  // RVA: 0x6AB9B0
        static int8_t op_Implicit(ObscuredSByte value);  // RVA: 0x6ABA10
        static ObscuredSByte xet(ObscuredSByte a);  // RVA: 0x6ABA70
        static ObscuredSByte xeu(ObscuredSByte a);  // RVA: 0x6ABAD0
        static ObscuredSByte xev(ObscuredSByte a, int32_t b);  // RVA: 0x6ABB30
        int32_t GetHashCode();  // RVA: 0x6AB8B0
        Il2CppString* ToString();  // RVA: 0x6AB8E0
        Il2CppString* xew(Il2CppString* a);  // RVA: 0x6ABB90
        Il2CppString* xex(IFormatProvider* a);  // RVA: 0x6ABBC0
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6AB910
        bool Equals(Il2CppObject* other);  // RVA: 0x6AB760
        bool Equals(ObscuredSByte obj);  // RVA: 0x6AB700
        bool Equals(int8_t other);  // RVA: 0x6AB6D0
        int32_t CompareTo(ObscuredSByte other);  // RVA: 0x6AB690
        int32_t CompareTo(int8_t other);  // RVA: 0x6AB660
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AB630
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x69D250
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(int8_t value);  // RVA: 0x6AB950
        static int8_t xey(int8_t a, int8_t b);  // RVA: 0x69D5B0
        static int8_t xez(int8_t a, int8_t b);  // RVA: 0x69D620
        static ObscuredSByte xfa(int8_t a, int8_t b);  // RVA: 0x6ABBF0
        static int8_t xfb();  // RVA: 0x6ABC40
        int8_t xfc(int8_t a);  // RVA: 0x6ABC50
        void xfd(int8_t a, int8_t b);  // RVA: 0x6ABCD0
        int8_t xfe();  // RVA: 0x6ABD20
        void wpc();  // RVA: 0x6ABA30
        static bool xff(int8_t a, int32_t b);  // RVA: 0x6ABD30
        void xfg(int8_t a);  // RVA: 0x6ABD40
        int8_t xfh();  // RVA: 0x6ABD70
        bool xfi();  // RVA: 0x69D900
        static void xfj(int8_t a);  // RVA: 0x635AE0
        void xfk();  // RVA: 0x635AE0
        static int8_t xfl(int8_t a, int8_t b);  // RVA: 0x69D9A0
        static int8_t xfm(int8_t a, int8_t b);  // RVA: 0x69D9A0
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
        static ObscuredShort op_Implicit(int16_t value);  // RVA: 0x6AC2B0
        static int16_t op_Implicit(ObscuredShort value);  // RVA: 0x6AC2A0
        static ObscuredShort xfn(ObscuredShort a);  // RVA: 0x6AC360
        static ObscuredShort xfo(ObscuredShort a);  // RVA: 0x6AC3F0
        static ObscuredShort xfp(ObscuredShort a, int32_t b);  // RVA: 0x6AC480
        int32_t GetHashCode();  // RVA: 0x6AC140
        Il2CppString* ToString();  // RVA: 0x6AC1C0
        Il2CppString* xfq(Il2CppString* a);  // RVA: 0x6AC500
        Il2CppString* xfr(IFormatProvider* a);  // RVA: 0x6AC540
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6AC1F0
        bool Equals(Il2CppObject* other);  // RVA: 0x6ABFD0
        bool Equals(ObscuredShort obj);  // RVA: 0x6ABF30
        bool Equals(int16_t other);  // RVA: 0x6ABF90
        int32_t CompareTo(ObscuredShort other);  // RVA: 0x6ABEF0
        int32_t CompareTo(int16_t other);  // RVA: 0x6ABEB0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6ABE70
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6AC170
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(int16_t value);  // RVA: 0x6AC240
        static int16_t xfs(int16_t a, int16_t b);  // RVA: 0x69E0E0
        static int16_t xft(int16_t a, int16_t b);  // RVA: 0x69E0F0
        static ObscuredShort xfu(int16_t a, int16_t b);  // RVA: 0x6AC580
        static int16_t xfv();  // RVA: 0x6AC5E0
        int16_t xfw(int16_t a);  // RVA: 0x6AC5F0
        void xfx(int16_t a, int16_t b);  // RVA: 0x6AC680
        int16_t xfy();  // RVA: 0x6AC6D0
        void wpc();  // RVA: 0x6AC310
        static bool xfz(int16_t a, int32_t b);  // RVA: 0x6AC6E0
        void xga(int16_t a);  // RVA: 0x6AC6F0
        int16_t xgb();  // RVA: 0x6AC720
        bool xgc();  // RVA: 0x6AC840
        static void xgd(int16_t a);  // RVA: 0x635AE0
        void xge();  // RVA: 0x635AE0
        static int16_t xgf(int16_t a, int16_t b);  // RVA: 0x69E450
        static int16_t xgg(int16_t a, int16_t b);  // RVA: 0x69E450
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
        Il2CppString* bmsq; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Il2CppString* currentCryptoKey; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Byte[][] hiddenValue; // 0x0038
    
        // Methods
        int32_t xgh();  // RVA: 0x6ACFF0
        wchar_t get_Item(int32_t index);  // RVA: 0x6ACE70
        static ObscuredString* op_Implicit(Il2CppString* value);  // RVA: 0x6ACEF0
        static Il2CppString* op_Implicit(ObscuredString* value);  // RVA: 0x6ACF60
        static bool xgi(ObscuredString* a, ObscuredString* b);  // RVA: 0x6AD010
        static bool xgj(ObscuredString* a, ObscuredString* b);  // RVA: 0x6AD150
        Il2CppString* xgk(int32_t a);  // RVA: 0x6AD170
        Il2CppString* xgl(int32_t a, int32_t b);  // RVA: 0x6AD1D0
        bool xgm(Il2CppString* a, StringComparison b);  // RVA: 0x6AD220
        bool xgn(Il2CppString* a, StringComparison b);  // RVA: 0x6AD270
        int32_t GetHashCode();  // RVA: 0x6ACB80
        Il2CppString* ToString();  // RVA: 0x6ACD00
        static bool xgo(ObscuredString* a);  // RVA: 0x6AD2C0
        static bool xgp(ObscuredString* a);  // RVA: 0x6AD310
        bool Equals(Il2CppObject* other);  // RVA: 0x6ACAA0
        bool Equals(ObscuredString* obj);  // RVA: 0x6AC990
        bool xgq(ObscuredString* a, StringComparison b);  // RVA: 0x6AD410
        bool Equals(Il2CppString* other);  // RVA: 0x6AC950
        int32_t CompareTo(ObscuredString* other);  // RVA: 0x6AC860
        int32_t CompareTo(Il2CppString* other);  // RVA: 0x6AC910
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AC8D0
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6ACBC0
        int32_t wpb();  // RVA: 0x666240
        void .ctor();  // RVA: 0x6ACD20
        void .ctor(Il2CppString* value);  // RVA: 0x6ACD60
        static Char[][] xgr();  // RVA: 0x6AD490
        static Char[][] xgs(Il2CppString* a, Il2CppString* b);  // RVA: 0x6AD4F0
        static Char[][] xgt(Il2CppString* a, Char[][] b);  // RVA: 0x6AD550
        static Char[][] xgu(Char[][] a, Char[][] b);  // RVA: 0x6AD580
        static Il2CppString* xgv(Char[][] a, Il2CppString* b);  // RVA: 0x6AD590
        static Il2CppString* xgw(Char[][] a, Char[][] b);  // RVA: 0x6AD5E0
        static ObscuredString* xgx(Char[][] a, Char[][] b);  // RVA: 0x6AD610
        static Char[][] xgy();  // RVA: 0x6AD6A0
        static void xgz(Char[][] a);  // RVA: 0x6AD700
        Char[][] xha(Char[][] a);  // RVA: 0x6AD710
        void xhb(Char[][] a, Char[][] b);  // RVA: 0x6AD7F0
        Il2CppString* xhc();  // RVA: 0x6ACD00
        Char[][] xhd();  // RVA: 0x6AD880
        void wpc();  // RVA: 0x6ACF90
        static bool xhe(Char[][] a, int32_t b);  // RVA: 0x6AD890
        void xhf(Char[][] a);  // RVA: 0x6AD8A0
        static Char[][] xhg(Char[][] a, Char[][] b);  // RVA: 0x6AD8F0
        static wchar_t xhh(Char[][] a, Char[][] b, int32_t c);  // RVA: 0x6ADA60
        static bool xhi(ObscuredString* a);  // RVA: 0x6AD310
        Il2CppString* xhj();  // RVA: 0x6ACD00
        Char[][] xhk();  // RVA: 0x6ADAB0
        bool xhl();  // RVA: 0x6ADDD0
        bool xhm(Char[][] a, Il2CppString* b);  // RVA: 0x6ADE00
        static void xhn(Il2CppString* a);  // RVA: 0x635AE0
        void xho();  // RVA: 0x635AE0
        static Il2CppString* xhp(Il2CppString* a);  // RVA: 0x6ADF60
        static Il2CppString* xhq(Il2CppString* a, Il2CppString* b);  // RVA: 0x6ADFA0
        Il2CppString* xhr();  // RVA: 0x6ADFB0
        void xhs(Il2CppString* a);  // RVA: 0x635AE0
        static ObscuredString* xht(Il2CppString* a, Il2CppString* b);  // RVA: 0x6ADFF0
        void xhu(Il2CppString* a, Il2CppString* b);  // RVA: 0x6AE150
        static Char[][] xhv(Char[][] a);  // RVA: 0x6AE260
        static Il2CppString* xhw(Il2CppString* a, Il2CppString* b);  // RVA: 0x6AE280
        static Il2CppString* xhx(Byte[][] a);  // RVA: 0x6AE450
        static Byte[][] xhy(Il2CppString* a);  // RVA: 0x6AE4E0
        static bool xhz(Char[][] a, Char[][] b);  // RVA: 0x6AE570
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
        static ObscuredUInt op_Implicit(uint32_t value);  // RVA: 0x6A8B80
        static uint32_t op_Implicit(ObscuredUInt value);  // RVA: 0x6AE920
        static ObscuredInt xia(ObscuredUInt a);  // RVA: 0x6AE970
        static ObscuredUInt xib(ObscuredUInt a);  // RVA: 0x6AE9E0
        static ObscuredUInt xic(ObscuredUInt a);  // RVA: 0x6AEA50
        static ObscuredUInt xid(ObscuredUInt a, int32_t b);  // RVA: 0x6AEAC0
        int32_t GetHashCode();  // RVA: 0x6AE870
        Il2CppString* ToString();  // RVA: 0x6AE8A0
        Il2CppString* xie(Il2CppString* a);  // RVA: 0x6AEB30
        Il2CppString* xif(IFormatProvider* a);  // RVA: 0x6AEB70
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6AE8D0
        bool Equals(Il2CppObject* other);  // RVA: 0x6AE6D0
        bool Equals(ObscuredUInt obj);  // RVA: 0x6AE810
        bool Equals(uint32_t other);  // RVA: 0x6AE6A0
        int32_t CompareTo(ObscuredUInt other);  // RVA: 0x6AE630
        int32_t CompareTo(uint32_t other);  // RVA: 0x6AE670
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AE5F0
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6A8950
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(uint32_t value);  // RVA: 0x6A8A20
        static uint32_t xig(uint32_t a, uint32_t b);  // RVA: 0x6A8EB0
        static uint32_t xih(uint32_t a, uint32_t b);  // RVA: 0x6A8EC0
        static ObscuredUInt xii(uint32_t a, uint32_t b);  // RVA: 0x6A8ED0
        static uint32_t xij();  // RVA: 0x69C120
        uint32_t xik(uint32_t a);  // RVA: 0x6A8F20
        void xil(uint32_t a, uint32_t b);  // RVA: 0x6A8F90
        uint32_t xim();  // RVA: 0x6AEBB0
        void wpc();  // RVA: 0x6AE930
        static bool xin(uint32_t a, int32_t b);  // RVA: 0x6A8FE0
        void xio(uint32_t a);  // RVA: 0x6A8FF0
        uint32_t xip();  // RVA: 0x6AEBC0
        bool xiq();  // RVA: 0x6A7180
        static void xir(uint32_t a);  // RVA: 0x635AE0
        void xis();  // RVA: 0x635AE0
        static uint32_t xit(uint32_t a, uint32_t b);  // RVA: 0x6A9110
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
        static ObscuredULong op_Implicit(uint64_t value);  // RVA: 0x6AF080
        static uint64_t op_Implicit(ObscuredULong value);  // RVA: 0x6AF070
        static ObscuredULong xiu(ObscuredULong a);  // RVA: 0x6AF120
        static ObscuredULong xiv(ObscuredULong a);  // RVA: 0x6AF1B0
        static ObscuredULong xiw(ObscuredULong a, bool b);  // RVA: 0x6AF240
        int32_t GetHashCode();  // RVA: 0x6AEF60
        Il2CppString* ToString();  // RVA: 0x6AEFE0
        Il2CppString* xix(Il2CppString* a);  // RVA: 0x6AF2C0
        Il2CppString* xiy(IFormatProvider* a);  // RVA: 0x6AF300
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6AEF90
        bool Equals(Il2CppObject* other);  // RVA: 0x6AED70
        bool Equals(ObscuredULong obj);  // RVA: 0x6AEF00
        bool Equals(uint64_t other);  // RVA: 0x6AEEC0
        int32_t CompareTo(ObscuredULong other);  // RVA: 0x6AED30
        int32_t CompareTo(uint64_t other);  // RVA: 0x6AECB0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AECF0
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6A9400
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(uint64_t value);  // RVA: 0x6AF010
        static uint64_t xiz(uint64_t a, uint64_t b);  // RVA: 0x6A1C90
        static uint64_t xja(uint64_t a, uint64_t b);  // RVA: 0x6A1CA0
        static ObscuredULong xjb(uint64_t a, uint64_t b);  // RVA: 0x6AF340
        static uint64_t xjc();  // RVA: 0x6A1960
        uint64_t xjd(uint64_t a);  // RVA: 0x6AF390
        void xje(uint64_t a, uint64_t b);  // RVA: 0x6AF420
        uint64_t xjf();  // RVA: 0x6AF470
        void wpc();  // RVA: 0x6AF0E0
        static bool xjg(uint64_t a, int32_t b);  // RVA: 0x6AF480
        void xjh(uint64_t a);  // RVA: 0x6AF490
        uint64_t xji();  // RVA: 0x6AF4C0
        bool xjj();  // RVA: 0x6A1EE0
        static void xjk(uint64_t a);  // RVA: 0x635AE0
        void xjl();  // RVA: 0x635AE0
        static uint64_t xjm(uint64_t a, uint64_t b);  // RVA: 0x6A9A50
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
        static ObscuredUShort op_Implicit(uint16_t value);  // RVA: 0x6AF9D0
        static uint16_t op_Implicit(ObscuredUShort value);  // RVA: 0x6AF9C0
        static ObscuredUShort xjn(ObscuredUShort a);  // RVA: 0x6AFA80
        static ObscuredUShort xjo(ObscuredUShort a);  // RVA: 0x6AFB10
        static ObscuredUShort xjp(ObscuredUShort a, int32_t b);  // RVA: 0x6AFBA0
        int32_t GetHashCode();  // RVA: 0x6AF8B0
        Il2CppString* ToString();  // RVA: 0x6AF8E0
        Il2CppString* xjq(Il2CppString* a);  // RVA: 0x6AFC20
        Il2CppString* xjr(IFormatProvider* a);  // RVA: 0x6AFC60
        Il2CppString* ToString(Il2CppString* format, IFormatProvider* provider);  // RVA: 0x6AF910
        bool Equals(Il2CppObject* other);  // RVA: 0x6AF740
        bool Equals(ObscuredUShort obj);  // RVA: 0x6AF6A0
        bool Equals(uint16_t other);  // RVA: 0x6AF700
        int32_t CompareTo(ObscuredUShort other);  // RVA: 0x6AF660
        int32_t CompareTo(uint16_t other);  // RVA: 0x6AF5E0
        int32_t CompareTo(Il2CppObject* obj);  // RVA: 0x6AF620
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6AC170
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(uint16_t value);  // RVA: 0x6AF960
        static uint16_t xjs(uint16_t a, uint16_t b);  // RVA: 0x69E0E0
        static uint16_t xjt(uint16_t a, uint16_t b);  // RVA: 0x69E0F0
        static ObscuredUShort xju(uint16_t a, uint16_t b);  // RVA: 0x69E100
        static uint16_t xjv();  // RVA: 0x6AFCA0
        uint16_t xjw(uint16_t a);  // RVA: 0x6AFCB0
        void xjx(uint16_t a, uint16_t b);  // RVA: 0x69E220
        uint16_t xjy();  // RVA: 0x6AFD30
        void wpc();  // RVA: 0x6AFA30
        static bool xjz(uint16_t a, int32_t b);  // RVA: 0x69E280
        void xka(uint16_t a);  // RVA: 0x69E290
        uint16_t xkb();  // RVA: 0x6AFD40
        bool xkc();  // RVA: 0x6AC840
        static void xkd(uint16_t a);  // RVA: 0x635AE0
        void xke();  // RVA: 0x635AE0
        static uint16_t xkf(uint16_t a, uint16_t b);  // RVA: 0x69E450
        static uint16_t xkg(uint16_t a, uint16_t b);  // RVA: 0x69E450
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
    bool Equals(RawEncryptedVector2 other);  // RVA: 0x6B6AA0
    bool Equals(Il2CppObject* obj);  // RVA: 0x6B6AD0
    int32_t GetHashCode();  // RVA: 0x6B6AC0
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
        static ObscuredVector2 op_Implicit(Vector2 value);  // RVA: 0x6B1910
        static Vector2 op_Implicit(ObscuredVector2 value);  // RVA: 0x6B1900
        static Vector3 op_Implicit(ObscuredVector2 value);  // RVA: 0x6B1940
        static ObscuredVector2 xkh(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6B1AB0
        static ObscuredVector2 xki(Vector2 a, ObscuredVector2 b);  // RVA: 0x6B1B40
        static ObscuredVector2 xkj(ObscuredVector2 a, Vector2 b);  // RVA: 0x6B1BC0
        static ObscuredVector2 xkk(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6B1C40
        static ObscuredVector2 xkl(Vector2 a, ObscuredVector2 b);  // RVA: 0x6B1CD0
        static ObscuredVector2 xkm(ObscuredVector2 a, Vector2 b);  // RVA: 0x6B1D50
        static ObscuredVector2 xkn(ObscuredVector2 a);  // RVA: 0x6B1DD0
        static ObscuredVector2 xko(ObscuredVector2 a, float b);  // RVA: 0x6B1E50
        static ObscuredVector2 xkp(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6B1ED0
        static ObscuredVector2 xkq(float a, ObscuredVector2 b);  // RVA: 0x6B1F60
        static ObscuredVector2 xkr(ObscuredVector2 a, float b);  // RVA: 0x6B1FE0
        static bool xks(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6B2060
        static bool xkt(Vector2 a, ObscuredVector2 b);  // RVA: 0x6B20C0
        static bool xku(ObscuredVector2 a, Vector2 b);  // RVA: 0x6B2120
        static bool xkv(ObscuredVector2 a, ObscuredVector2 b);  // RVA: 0x6B2170
        static bool xkw(Vector2 a, ObscuredVector2 b);  // RVA: 0x6B21D0
        static bool xkx(ObscuredVector2 a, Vector2 b);  // RVA: 0x6B2230
        bool Equals(Il2CppObject* other);  // RVA: 0x6B14B0
        bool Equals(ObscuredVector2 other);  // RVA: 0x6B13D0
        bool Equals(Vector2 other);  // RVA: 0x6B1460
        int32_t GetHashCode();  // RVA: 0x6B1690
        Il2CppString* ToString();  // RVA: 0x6B1740
        Il2CppString* xky(Il2CppString* a);  // RVA: 0x6B2280
        void xkz();  // RVA: 0x6B22C0
        Vector2 xla();  // RVA: 0x6B2390
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6B16D0
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(Vector2 value);  // RVA: 0x6B1780
        void .ctor(float x, float y);  // RVA: 0x6B1770
        float xlb();  // RVA: 0x6B23D0
        void xlc(float a);  // RVA: 0x6B23F0
        float xld();  // RVA: 0x6B2460
        void xle(float a);  // RVA: 0x6B2480
        float get_Item(int32_t index);  // RVA: 0x6B1850
        void set_Item(int32_t index, float value);  // RVA: 0x6B1980
        static RawEncryptedVector2 xlf(Vector2 a, int32_t b);  // RVA: 0x6B24F0
        static RawEncryptedVector2 xlg(float a, float b, int32_t c);  // RVA: 0x6B2550
        static Vector2 xlh(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6B25B0
        static ObscuredVector2 xli(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6B2610
        static int32_t xlj();  // RVA: 0x69C120
        static bool xlk(Vector2 a, Vector2 b);  // RVA: 0x6B2640
        static bool xll(float a, float b);  // RVA: 0x6B2690
        RawEncryptedVector2 xlm(int32_t a);  // RVA: 0x6B2750
        void xln(RawEncryptedVector2 a, int32_t b);  // RVA: 0x6B27D0
        Vector2 xlo();  // RVA: 0x6B2880
        void wpc();  // RVA: 0x6B1A70
        static bool xlp(Vector2 a, int32_t b);  // RVA: 0x6B2890
        void xlq(Vector2 a);  // RVA: 0x6B28A0
        Vector2 xlr();  // RVA: 0x6B2930
        bool xls();  // RVA: 0x6B1390
        static void xlt(int32_t a);  // RVA: 0x635AE0
        void xlu();  // RVA: 0x635AE0
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
    bool Equals(RawEncryptedVector2Int other);  // RVA: 0x6B6AA0
    bool Equals(Il2CppObject* obj);  // RVA: 0x6B6A10
    int32_t GetHashCode();  // RVA: 0x6B6AC0
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
        static ObscuredVector2Int op_Implicit(Vector2Int value);  // RVA: 0x6B0510
        static Vector2Int op_Implicit(ObscuredVector2Int value);  // RVA: 0x6B0590
        static Vector3Int op_Explicit(ObscuredVector2Int v);  // RVA: 0x6B0490
        static Vector2 op_Implicit(ObscuredVector2Int value);  // RVA: 0x6B04E0
        static ObscuredVector2Int xlv(ObscuredVector2Int a);  // RVA: 0x6B06A0
        static ObscuredVector2Int xlw(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B0710
        static ObscuredVector2Int xlx(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6B07A0
        static ObscuredVector2Int xly(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B0820
        static ObscuredVector2Int xlz(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6B08B0
        static ObscuredVector2Int xma(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6B0930
        static ObscuredVector2Int xmb(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6B09B0
        static ObscuredVector2Int xmc(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B0A30
        static ObscuredVector2Int xmd(Vector2Int a, ObscuredVector2Int b);  // RVA: 0x6B0AC0
        static ObscuredVector2Int xme(ObscuredVector2Int a, Vector2Int b);  // RVA: 0x6B0B40
        static ObscuredVector2Int xmf(int32_t a, ObscuredVector2Int b);  // RVA: 0x6B0BC0
        static ObscuredVector2Int xmg(ObscuredVector2Int a, int32_t b);  // RVA: 0x6B0C40
        static ObscuredVector2Int xmh(ObscuredVector2Int a, int32_t b);  // RVA: 0x6B0CC0
        static bool xmi(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B0D40
        static bool xmj(ObscuredVector2Int a, ObscuredVector2Int b);  // RVA: 0x6B0DC0
        bool Equals(Il2CppObject* other);  // RVA: 0x6AFE90
        bool Equals(ObscuredVector2Int other);  // RVA: 0x6B0010
        bool Equals(Vector2Int other);  // RVA: 0x6AFE50
        int32_t GetHashCode();  // RVA: 0x6B00A0
        Il2CppString* ToString();  // RVA: 0x6B0140
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6B00D0
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(Vector2Int value);  // RVA: 0x6B0380
        void .ctor(int32_t x, int32_t y);  // RVA: 0x6B02F0
        int32_t xmk();  // RVA: 0x6B0E50
        void xml(int32_t a);  // RVA: 0x6B0E60
        int32_t xmm();  // RVA: 0x6B0F00
        void xmn(int32_t a);  // RVA: 0x6B0F20
        int32_t get_Item(int32_t index);  // RVA: 0x6B03F0
        void set_Item(int32_t index, int32_t value);  // RVA: 0x6B05A0
        static RawEncryptedVector2Int xmo(Vector2Int a, int32_t b);  // RVA: 0x6B0FC0
        static RawEncryptedVector2Int xmp(int32_t a, int32_t b, int32_t c);  // RVA: 0x6B0FE0
        static Vector2Int xmq(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6B1000
        static ObscuredVector2Int xmr(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6B1020
        static int32_t xms();  // RVA: 0x69C120
        RawEncryptedVector2Int xmt(int32_t a);  // RVA: 0x6B1090
        void xmu(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6B1130
        Vector2Int xmv();  // RVA: 0x6B1190
        void wpc();  // RVA: 0x6B0640
        static bool xmw(Vector2Int a, int32_t b);  // RVA: 0x6B11A0
        void xmx(Vector2Int a);  // RVA: 0x6B11B0
        Vector2Int xmy();  // RVA: 0x6B1200
        bool xmz();  // RVA: 0x6B1390
        static void xna(int32_t a);  // RVA: 0x635AE0
        void xnb();  // RVA: 0x635AE0
        static Vector2Int xnc(RawEncryptedVector2Int a, int32_t b);  // RVA: 0x6B13B0
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
    bool Equals(RawEncryptedVector3 other);  // RVA: 0x6B6B60
    bool Equals(Il2CppObject* obj);  // RVA: 0x6B6B80
    int32_t GetHashCode();  // RVA: 0x6B6C30
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
        static ObscuredVector3 op_Implicit(Vector3 value);  // RVA: 0x6B50C0
        static Vector3 op_Implicit(ObscuredVector3 value);  // RVA: 0x6B5100
        static ObscuredVector3 xnd(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6B5240
        static ObscuredVector3 xne(Vector3 a, ObscuredVector3 b);  // RVA: 0x6B5300
        static ObscuredVector3 xnf(ObscuredVector3 a, Vector3 b);  // RVA: 0x6B53A0
        static ObscuredVector3 xng(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6B5450
        static ObscuredVector3 xnh(Vector3 a, ObscuredVector3 b);  // RVA: 0x6B5510
        static ObscuredVector3 xni(ObscuredVector3 a, Vector3 b);  // RVA: 0x6B55B0
        static ObscuredVector3 xnj(ObscuredVector3 a);  // RVA: 0x6B5660
        static ObscuredVector3 xnk(ObscuredVector3 a, float b);  // RVA: 0x6B56E0
        static ObscuredVector3 xnl(float a, ObscuredVector3 b);  // RVA: 0x6B5770
        static ObscuredVector3 xnm(ObscuredVector3 a, float b);  // RVA: 0x6B5800
        static bool xnn(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6B5890
        static bool xno(Vector3 a, ObscuredVector3 b);  // RVA: 0x6B5930
        static bool xnp(ObscuredVector3 a, Vector3 b);  // RVA: 0x6B59A0
        static bool xnq(ObscuredVector3 a, ObscuredVector3 b);  // RVA: 0x6B5A20
        static bool xnr(Vector3 a, ObscuredVector3 b);  // RVA: 0x6B5AC0
        static bool xns(ObscuredVector3 a, Vector3 b);  // RVA: 0x6B5B30
        bool Equals(Il2CppObject* other);  // RVA: 0x6B4B50
        bool Equals(ObscuredVector3 other);  // RVA: 0x6B4A60
        bool Equals(Vector3 other);  // RVA: 0x6B4CB0
        int32_t GetHashCode();  // RVA: 0x6B4D10
        Il2CppString* ToString();  // RVA: 0x6B4E70
        Il2CppString* xnt(Il2CppString* a);  // RVA: 0x6B5BA0
        void xnu();  // RVA: 0x6B5BF0
        Vector3 xnv();  // RVA: 0x6B5D70
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6B4D90
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(Vector3 value);  // RVA: 0x6B4EF0
        void .ctor(float x, float y, float z);  // RVA: 0x6B4EC0
        float xnw();  // RVA: 0x6B5EA0
        void xnx(float a);  // RVA: 0x6B5EC0
        float xny();  // RVA: 0x6B5F40
        void xnz(float a);  // RVA: 0x6B5F60
        float xoa();  // RVA: 0x6B5FE0
        void xob(float a);  // RVA: 0x6B6000
        float get_Item(int32_t index);  // RVA: 0x6B4FF0
        void set_Item(int32_t index, float value);  // RVA: 0x6B5130
        static RawEncryptedVector3 xoc(Vector3 a, int32_t b);  // RVA: 0x6B6090
        static RawEncryptedVector3 xod(float a, float b, float c, int32_t d);  // RVA: 0x6B6130
        static Vector3 xoe(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6B61D0
        static ObscuredVector3 xof(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6B6260
        static int32_t xog();  // RVA: 0x69C120
        static bool xoh(Vector3 a, Vector3 b);  // RVA: 0x6B62A0
        static bool xoi(float a, float b);  // RVA: 0x6B6310
        RawEncryptedVector3 xoj(int32_t a);  // RVA: 0x6B63D0
        void xok(RawEncryptedVector3 a, int32_t b);  // RVA: 0x6B6480
        Vector3 xol();  // RVA: 0x6B5100
        void wpc();  // RVA: 0x6B51E0
        static bool xom(Vector3 a, int32_t b);  // RVA: 0x6B6580
        void xon(Vector3 a);  // RVA: 0x6B65B0
        Vector3 xoo();  // RVA: 0x6B6680
        bool xop();  // RVA: 0x6B4A10
        static void xoq(int32_t a);  // RVA: 0x635AE0
        void xor();  // RVA: 0x635AE0
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
    bool Equals(RawEncryptedVector3Int other);  // RVA: 0x6B6B60
    bool Equals(Il2CppObject* obj);  // RVA: 0x6BDCC0
    int32_t GetHashCode();  // RVA: 0x6B6C30
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
        static ObscuredVector3Int op_Implicit(Vector3Int value);  // RVA: 0x6B31B0
        static Vector3Int op_Implicit(ObscuredVector3Int value);  // RVA: 0x6B31F0
        static Vector2Int xos(ObscuredVector3Int a);  // RVA: 0x6B3370
        static Vector3 op_Implicit(ObscuredVector3Int value);  // RVA: 0x6B3150
        static ObscuredVector3Int xot(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6B33B0
        static ObscuredVector3Int xou(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6B34C0
        static ObscuredVector3Int xov(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6B35D0
        static ObscuredVector3Int xow(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6B36D0
        static ObscuredVector3Int xox(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6B37E0
        static ObscuredVector3Int xoy(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6B38F0
        static ObscuredVector3Int xoz(ObscuredVector3Int a, int32_t b);  // RVA: 0x6B39F0
        static ObscuredVector3Int xpa(int32_t a, ObscuredVector3Int b);  // RVA: 0x6B3B00
        static ObscuredVector3Int xpb(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6B3C10
        static ObscuredVector3Int xpc(ObscuredVector3Int a, int32_t b);  // RVA: 0x6B3CC0
        static bool xpd(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6B3D50
        static bool xpe(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6B3DE0
        static bool xpf(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6B3E50
        static bool xpg(ObscuredVector3Int a, ObscuredVector3Int b);  // RVA: 0x6B3EB0
        static bool xph(Vector3Int a, ObscuredVector3Int b);  // RVA: 0x6B3F40
        static bool xpi(ObscuredVector3Int a, Vector3Int b);  // RVA: 0x6B3FB0
        bool Equals(Il2CppObject* other);  // RVA: 0x6B2C30
        bool Equals(ObscuredVector3Int other);  // RVA: 0x6B2B50
        bool Equals(Vector3Int other);  // RVA: 0x6B2D80
        int32_t GetHashCode();  // RVA: 0x6B2DF0
        Il2CppString* ToString();  // RVA: 0x6B2F20
        Il2CppString* xpj(Il2CppString* a);  // RVA: 0x6B4020
        void OnBeforeSerialize();  // RVA: 0x635AE0
        void OnAfterDeserialize();  // RVA: 0x6B2E90
        int32_t wpb();  // RVA: 0x6991E0
        void .ctor(Vector3Int value);  // RVA: 0x6B2F60
        void .ctor(int32_t x, int32_t y, int32_t z);  // RVA: 0x6B3030
        int32_t xpk();  // RVA: 0x6B4070
        void xpl(int32_t a);  // RVA: 0x6B40A0
        int32_t xpm();  // RVA: 0x6B4190
        void xpn(int32_t a);  // RVA: 0x6B41C0
        int32_t xpo();  // RVA: 0x6B42B0
        void xpp(int32_t a);  // RVA: 0x6B42D0
        int32_t get_Item(int32_t index);  // RVA: 0x6B3060
        void set_Item(int32_t index, int32_t value);  // RVA: 0x6B3220
        static RawEncryptedVector3Int xpq(Vector3Int a, int32_t b);  // RVA: 0x6B43C0
        static RawEncryptedVector3Int xpr(int32_t a, int32_t b, int32_t c, int32_t d);  // RVA: 0x6B4400
        static Vector3Int xps(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6B4430
        static ObscuredVector3Int xpt(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6B4460
        static int32_t xpu();  // RVA: 0x69C120
        RawEncryptedVector3Int xpv(int32_t a);  // RVA: 0x6B4520
        void xpw(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6B4630
        Vector3Int xpx();  // RVA: 0x6B31F0
        void wpc();  // RVA: 0x6B32D0
        static bool xpy(Vector3Int a, int32_t b);  // RVA: 0x6B46E0
        void xpz(Vector3Int a);  // RVA: 0x6B4710
        Vector3Int xqa();  // RVA: 0x6B4790
        bool xqb();  // RVA: 0x6B4A10
        static void xqc(int32_t a);  // RVA: 0x635AE0
        void xqd();  // RVA: 0x635AE0
        static Vector3Int xqe(RawEncryptedVector3Int a, int32_t b);  // RVA: 0x6B4A40
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
    static void .cctor();  // RVA: 0x6C3EE0
    void .ctor();  // RVA: 0x6284D0
    void xqf(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4030
    void xqg(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4120
    void xqh(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C41C0
    void xqi(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4250
    void xqj(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C42F0
    void xqk(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4390
    void xql(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4450
    void xqm(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4510
    void xqn(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C45C0
    void xqo(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4660
    void xqp(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4720
    void xqq(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C47C0
    void xqr(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4860
    void xqs(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4AB0
    void xqt(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4B40
    void xqu(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4BE0
    void xqv(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4C70
    void xqw(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4D10
    void xqx(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4DB0
    void xqy(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C4E50
    void xqz(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C5000
    void xra(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C51A0
    void xrb(JsonWriter* a, Il2CppObject* b);  // RVA: 0x6C53A0
};

namespace CodeStage.AntiCheat.ObscuredTypes.Converters
{

    // Namespace: CodeStage.AntiCheat.ObscuredTypes.Converters
    class ObscuredTypesNewtonsoftConverter : public JsonConverter
    {
    public:
        // Static fields
        // static Il2CppString* bmsr;
        // static Il2CppString* bmss;
        // static Il2CppString* bmst;
        // static Il2CppString* bmsu;
    
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.HashSet<System.Type> bmsv; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        System.Collections.Generic.Dictionary<System.Type,System.Action<Newtonsoft.Json.JsonWriter,System.Object>> bmsw; // 0x0018
    
        // Methods
        void WriteJson(JsonWriter* writer, Il2CppObject* value, JsonSerializer* serializer);  // RVA: 0x6BB580
        static void xrc(JsonWriter* a, Quaternion b);  // RVA: 0x6BD2D0
        static void xrd(JsonWriter* a, Vector2 b);  // RVA: 0x6BD470
        static void xre(JsonWriter* a, Vector2Int b);  // RVA: 0x6BD580
        static void xrf(JsonWriter* a, Vector3 b);  // RVA: 0x6BD690
        static void xrg(JsonWriter* a, Vector3Int b);  // RVA: 0x6BD7F0
        Il2CppObject* ReadJson(JsonReader* reader, Type* objectType, Il2CppObject* existingValue, JsonSerializer* serializer);  // RVA: 0x6B94B0
        bool CanConvert(Type* objectType);  // RVA: 0x6B9450
        void .ctor();  // RVA: 0x6BB860
        static void .cctor();  // RVA: 0x6BB720
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
    static void .cctor();  // RVA: 0x6C3F50
    void .ctor();  // RVA: 0x6284D0
    int32_t xrh(dbz* a, dbz* b);  // RVA: 0x6C5590
};

// Namespace: <global>
class dbw
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmsx>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.IReadOnlyList<dbz> <bmsy>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* <bmsz>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    double <bmta>k__BackingField; // 0x0028

    // Methods
    Il2CppString* xri();  // RVA: 0x6BDBB0
    Il2CppString* iua(dbz[][] a);  // RVA: 0x6CA100
    void yt();  // RVA: 0x6CB910
    void xrm(double a);  // RVA: 0x6CAEE0
    void hjg();  // RVA: 0x6C9BD0
    void .ctor(Il2CppString* a, dbz[][] b);  // RVA: 0x6C99E0
    double xrl();  // RVA: 0x6CAED0
    System.Collections.Generic.IReadOnlyList<dbz> xrj();  // RVA: 0x688DE0
    void xro();  // RVA: 0x6CB070
    Il2CppString* xrp(dbz[][] a);  // RVA: 0x6CB5A0
    bool xrn(Il2CppString* a);  // RVA: 0x6CAEF0
    Il2CppString* xrk();  // RVA: 0x63EBD0
    void npq();  // RVA: 0x6CA470
    void oky();  // RVA: 0x6CA9A0
    void .ctor(Il2CppString* a, dbz[][] b, Il2CppString* c);  // RVA: 0x6C9B60
};

// Namespace: <global>
class dbx
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmtb; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmtc; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dby* bmtd; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x6737E0
    void xrq();  // RVA: 0x635AE0
    bool MoveNext();  // RVA: 0x6CBE40
    Il2CppObject* xrr();  // RVA: 0x688DE0
    void xrs();  // RVA: 0x6CBF40
    Il2CppObject* xrt();  // RVA: 0x688DE0
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
    void MoveNext();  // RVA: 0x6C27E0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6C2A80
};

// Namespace: <global>
class dby : public dcy`1
{
public:
    // Static fields
    // static int32_t bmte;
    // static HashGeneratorResultHandler* bmtf;

    uint8_t pad_0000[0x30]; // 0x0000
    dcd* <bmtg>k__BackingField; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    WaitForSeconds* bmth; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    dcg* bmti; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    SemaphoreSlim* bmtj; // 0x0048

    // Methods
    IEnumerator* xsh();  // RVA: 0x6CCAA0
    dce* vk(int32_t a);  // RVA: 0x6CC2E0
    static System.Threading.Tasks.Task<dcd> xsb(int32_t a);  // RVA: 0x6CC6C0
    static dce* xrz();  // RVA: 0x6CC640
    System.Threading.Tasks.Task<dcd> xse(int32_t a);  // RVA: 0x6CC780
    static void xrv(HashGeneratorResultHandler* a);  // RVA: 0x6CC560
    static dce* xsa(int32_t a);  // RVA: 0x6CC670
    static dce* cpk();  // RVA: 0x6CC070
    System.Threading.Tasks.Task<dcd> xsf(int32_t a);  // RVA: 0x6CC7D0
    dce* xsd(int32_t a);  // RVA: 0x6CC730
    dce* gkh(int32_t a);  // RVA: 0x6CC0A0
    void OnDestroy();  // RVA: 0x6CBF80
    static dce* jxh();  // RVA: 0x6CC2B0
    dce* xsg(int32_t a);  // RVA: 0x6CC8E0
    static System.Threading.Tasks.Task<dcd> imm(int32_t a);  // RVA: 0x6CC260
    bool xsc();  // RVA: 0x6CC710
    static bool xry();  // RVA: 0x66BAA0
    static void xru(HashGeneratorResultHandler* a);  // RVA: 0x6CC4A0
    static bool ijk();  // RVA: 0x66BAA0
    void .ctor();  // RVA: 0x6CBFF0
    dcd* xrw();  // RVA: 0x6CC620
    void xrx(dcd* a);  // RVA: 0x6CC630
};

// Namespace: <global>
class dbz
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmtk>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* <bmtl>k__BackingField; // 0x0018

    // Methods
    Il2CppString* xsi();  // RVA: 0x6BDBB0
    Il2CppString* xsj();  // RVA: 0x688DE0
    void .ctor(Il2CppString* a, Stream* b, day<dcf> c);  // RVA: 0x6CCBD0
    void .ctor(Il2CppString* a, Il2CppString* b);  // RVA: 0x6CCB80
    Il2CppString* ToString();  // RVA: 0x6CCB10
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> <>9__2_0;


    // Methods
    static void .cctor();  // RVA: 0x6C3FC0
    void .ctor();  // RVA: 0x6284D0
    void xsk(FilesProgress a);  // RVA: 0x635AE0
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    struct FilesProgress
    {
    public:
    
        // Methods
        static FilesProgress xsl(float a, Il2CppString* b);  // RVA: 0x6289C0
        static FilesProgress None();  // RVA: 0x6289C0
        static System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> xsm(Il2CppString* a);  // RVA: 0x6B8090
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dca
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool bmtm; // 0x0010
    bool bmtn; // 0x0011
    bool bmto; // 0x0012
    bool bmtp; // 0x0013
    uint8_t pad_0014[0x4]; // 0x0014
    Il2CppString* bmtq; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* bmtr; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bmts; // 0x0028

    // Methods
    bool xsn(Il2CppString* a);  // RVA: 0x6CCF10
    static bool xso(Il2CppString* a, Il2CppString* b, bool c, bool d);  // RVA: 0x6CD2A0
    Il2CppString* ToString();  // RVA: 0x6CCCD0
    void .ctor();  // RVA: 0x6284D0
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
    dca[][] <bmtt>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    dca[][] <bmtu>k__BackingField; // 0x0018

    // Methods
    dca[][] xsp();  // RVA: 0x6BDBB0
    dcb* xst(dcb* a);  // RVA: 0x6CD480
    void .ctor(dca[][] a, dca[][] b);  // RVA: 0x6CCB80
    dca[][] xsq();  // RVA: 0x688DE0
    bool mwq(Il2CppString* a);  // RVA: 0x6CD3F0
    bool xss(Il2CppString* a);  // RVA: 0x6CD3F0
    bool xsu(Il2CppString* a, dca[][] b);  // RVA: 0x6CD550
    bool xsr(Il2CppString* a);  // RVA: 0x6CD370
    bool fex(Il2CppString* a);  // RVA: 0x6CD370
    bool mbv(Il2CppString* a);  // RVA: 0x6CD370
    a[][] xsv(a[][] a, a[][] b);  // RVA: 0x42D0B0
    bool imn(Il2CppString* a);  // RVA: 0x6CD3F0
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
        FilterGroup get_DefaultGroup();  // RVA: 0x6B81C0
        void set_DefaultGroup(FilterGroup value);  // RVA: 0x6B81D0
        void .ctor();  // RVA: 0x6B81B0
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dcc
{
public:

    // Methods
    static dcb* ipj(bool a);  // RVA: 0x6CE260
    static dcb* goc(bool a);  // RVA: 0x6CE120
    static dcb* nwv(bool a);  // RVA: 0x6CE300
    static dcb* xta(bool a);  // RVA: 0x6CEC60
    static dcb* xtc(bool a);  // RVA: 0x6CEEB0
    static dcb* xtb(bool a);  // RVA: 0x6CE2B0
    static dcb* xsz(bool a);  // RVA: 0x6CE970
    static dcb* xtd(bool a);  // RVA: 0x6CF230
    static dcb* co(bool a);  // RVA: 0x6CD850
    static dcb* xte(bool a);  // RVA: 0x6CE260
    static dcb* xsy(bool a);  // RVA: 0x6CE830
    static dcb* xsx(bool a);  // RVA: 0x6CE6F0
    static FilteringSettings* xsw();  // RVA: 0x6CE6C0
    static dcb* evq(bool a);  // RVA: 0x6CDB40
    static dcb* pj(bool a);  // RVA: 0x6CE580
    static dcb* kaa(bool a);  // RVA: 0x6CE2B0
    static dcb* fee(bool a);  // RVA: 0x6CDE30
    static dcb* cli(bool a);  // RVA: 0x6CD710
    static dcb* oed(bool a);  // RVA: 0x6CE440
    static dcb* byt(bool a);  // RVA: 0x6CD5D0
};

// Namespace: <global>
class dcd
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmtv>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* bmtw; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dbw* bmtx; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x6284D0
    double xtl();  // RVA: 0x6CF8B0
    System.Collections.Generic.IReadOnlyList<dbz> xth();  // RVA: 0x6CF870
    static dcd* xtn(dbw* a);  // RVA: 0x6CF940
    static dcd* gvx(dbw* a);  // RVA: 0x6CF620
    bool cqm(Il2CppString* a);  // RVA: 0x6CF590
    bool fgo(Il2CppString* a);  // RVA: 0x6CF590
    void xtj(Il2CppString* a);  // RVA: 0x6CF890
    static dcd* nlo(Il2CppString* a);  // RVA: 0x6CF7E0
    static dcd* gzg(dbw* a);  // RVA: 0x6CF690
    bool xto(Il2CppString* a);  // RVA: 0x6CF590
    void xtp();  // RVA: 0x6CF9B0
    bool ilk(Il2CppString* a);  // RVA: 0x6CF590
    bool fok(Il2CppString* a);  // RVA: 0x6CF590
    void buv();  // RVA: 0x6CF520
    static dcd* fjg(Il2CppString* a);  // RVA: 0x6CF5B0
    static dcd* xtm(Il2CppString* a);  // RVA: 0x6CF8D0
    Il2CppString* xtf();  // RVA: 0x6CF850
    bool xtk();  // RVA: 0x6CF8A0
    Il2CppString* xtg();  // RVA: 0x6CF850
    static dcd* ked(Il2CppString* a);  // RVA: 0x6CF700
    Il2CppString* xti();  // RVA: 0x6BDBB0
    static dcd* mu(dbw* a);  // RVA: 0x6CF770
};

namespace CodeStage.AntiCheat.Genuine.CodeHash
{

    // Namespace: CodeStage.AntiCheat.Genuine.CodeHash
    class HashGeneratorResultHandler : public MulticastDelegate
    {
    public:
    
        // Methods
        void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6B81E0
        void Invoke(dcd* result);  // RVA: 0x666440
        IAsyncResult* BeginInvoke(dcd* result, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x666570
        void EndInvoke(IAsyncResult* result);  // RVA: 0x666430
    };

} // namespace CodeStage.AntiCheat.Genuine.CodeHash

// Namespace: <global>
class dce
{
public:

    // Methods
    dcd* xrw();  // RVA: 0x41C500
    bool xsc();  // RVA: 0x421500
    dce* xtq(int32_t a);  // RVA: 0x41CB40
    System.Threading.Tasks.Task<dcd> xtr(int32_t a);  // RVA: 0x41CB40
};

// Namespace: <global>
class dcf
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SHA1Managed* bmty; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x6CFA40
    Byte[][] xts(Stream* a);  // RVA: 0x6CFAD0
    Byte[][] xtt(Byte[][] a);  // RVA: 0x6CFAB0
    Byte[][] faq(Byte[][] a);  // RVA: 0x6CFAB0
    void Dispose();  // RVA: 0x6CFA20
    Byte[][] fpp(Byte[][] a);  // RVA: 0x6CFAB0
};

// Namespace: <global>
class dcg
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dcd* <bmtz>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool <bmua>k__BackingField; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    int32_t bmub; // 0x001C

    // Methods
    dcd* xtu();  // RVA: 0x6BDBB0
    void xtv(dcd* a);  // RVA: 0x6CF890
    bool xtw();  // RVA: 0x6CFB30
    void xtx(bool a);  // RVA: 0x6CFB40
    void .ctor(int32_t a);  // RVA: 0x6CFB00
    void Execute();  // RVA: 0x6CFAF0
    void xty(dcd* a);  // RVA: 0x6CFB50
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<dcf> <>9__1_0;


    // Methods
    static void .cctor();  // RVA: 0x6C3E70
    void .ctor();  // RVA: 0x6284D0
    dcf* xtz();  // RVA: 0x6C55D0
};

// Namespace: <global>
class dch
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dcb* bmuc; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Concurrent.ConcurrentBag<dbz> bmud; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    day<dcf> bmue; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bmuf; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t bmug; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> bmuh; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t bmui; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t bmuj; // 0x0044

    // Methods
    void oqf(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6D0B00
    void lpz(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6D00A0
    void xua(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6D1030
    void .ctor();  // RVA: 0x6284D0
    void ofp(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6D05D0
    void hp(Il2CppString* a, ParallelLoopState* b);  // RVA: 0x6CFB70
};

// Namespace: <global>
class dci
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    dcj* bmuk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* bmul; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    dcb* bmum; // 0x0020

    // Methods
    void ikl();  // RVA: 0x6D1560
    void xub();  // RVA: 0x6D1560
    void .ctor();  // RVA: 0x6284D0
};

// Namespace: <global>
class dcj : public dcg
{
public:
    // Static fields
    // static Il2CppObject* bmun;


    // Methods
    void .ctor(int32_t a);  // RVA: 0x6CFB00
    void hwk(Il2CppString* a, dcb* b);  // RVA: 0x6D1F90
    static dbw* mju(Il2CppString* a, dcb* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6D2750
    static dbw* iwc(Il2CppString* a, dcb* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6D2120
    static void .cctor();  // RVA: 0x6D18E0
    void xud(Il2CppString* a, dcb* b);  // RVA: 0x6D3530
    void dxe(Il2CppString* a, dcb* b);  // RVA: 0x6D1960
    void Execute();  // RVA: 0x6D1590
    static dbw* goq(Il2CppString* a, dcb* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6D1AF0
    static dbw* xuc(Il2CppString* a, dcb* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6D3090
    void jtc(Il2CppString* a, dcb* b);  // RVA: 0x6D25C0
    static dbw* mll(Il2CppString* a, dcb* b, int32_t c, System.IProgress<CodeStage.AntiCheat.Genuine.CodeHash.FilesProgress> d);  // RVA: 0x6D2BF0
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
    Il2CppString* <bmuo>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    AndroidAppSource <bmup>k__BackingField; // 0x0018

    // Methods
    AndroidAppSource ikv(Il2CppString* a);  // RVA: 0x6D3A40
    AndroidAppSource xuf();  // RVA: 0x6B81C0
    AndroidAppSource kka(Il2CppString* a);  // RVA: 0x6D3BE0
    AndroidAppSource hcg(Il2CppString* a);  // RVA: 0x6D38A0
    AndroidAppSource xug(Il2CppString* a);  // RVA: 0x6D3F20
    Il2CppString* xue();  // RVA: 0x6BDBB0
    void .ctor(Il2CppString* a);  // RVA: 0x6D36C0
    AndroidAppSource sl(Il2CppString* a);  // RVA: 0x6D3D80
};

// Namespace: <global>
class dcl
{
public:

    // Methods
    static dck* xuh();  // RVA: 0x6D40F0
    static bool ldb();  // RVA: 0x6D40C0
    static bool xui();  // RVA: 0x6D40C0
    static bool ncp();  // RVA: 0x6D40C0
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class ACTkDetectorBase`1 : public dcy`1
    {
    public:
        // Static fields
        // static Il2CppString* bmuq;
    
        bool autoStart; // 0x0000
        bool autoDispose; // 0x0000
        Action* bmur; // 0x0000
        bool <bmus>k__BackingField; // 0x0000
        UnityEvent* detectionEvent; // 0x0000
        bool detectionEventHasListener; // 0x0000
        bool <bmut>k__BackingField; // 0x0000
        bool <bmuu>k__BackingField; // 0x0000
        dcm* <bmuv>k__BackingField; // 0x0000
    
        // Methods
        void xuj(Action* a);  // RVA: 0x418860
        void xuk(Action* a);  // RVA: 0x418860
        bool xul();  // RVA: 0x421500
        void xum(bool a);  // RVA: 0x41C5B0
        bool xun();  // RVA: 0x421500
        void xuo(bool a);  // RVA: 0x41C5B0
        bool xup();  // RVA: 0x421500
        void xuq(bool a);  // RVA: 0x41C5B0
        dcm* xur();  // RVA: 0x41C500
        void xus(dcm* a);  // RVA: 0x418860
        void Start();  // RVA: 0x42E0A0
        void OnEnable();  // RVA: 0x42E0A0
        void OnDisable();  // RVA: 0x42E0A0
        void OnApplicationQuit();  // RVA: 0x42E0A0
        void OnDestroy();  // RVA: 0x42E0A0
        void xut(dcm* a);  // RVA: 0x418860
        void xuu();  // RVA: 0x42E0A0
        bool xuv();  // RVA: 0x421500
        void xuw();  // RVA: 0x42E0A0
        void xux();  // RVA: 0x42E0A0
        bool xuy();  // RVA: 0x421500
        bool xuz();  // RVA: 0x421500
        void xva();  // RVA: 0x42E0A0
        void .ctor();  // RVA: 0x42E0A0
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcm
{
public:

    // Methods
    Il2CppString* xvb();  // RVA: 0x41C500
};

// Namespace: <global>
class dcn
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* <bmuw>k__BackingField; // 0x0010

    // Methods
    Il2CppString* xvc();  // RVA: 0x6BDBB0
    void .ctor(Il2CppString* a);  // RVA: 0x6D41D0
    Il2CppString* xvb();  // RVA: 0x6D4170
    Il2CppString* ToString();  // RVA: 0x6D4170
};

// Namespace: <global>
class InjectionDetectedEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6B8310
    void Invoke(Il2CppString* reason);  // RVA: 0x666440
    IAsyncResult* BeginInvoke(Il2CppString* reason, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x666570
    void EndInvoke(IAsyncResult* result);  // RVA: 0x666430
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class InjectionDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmux;
    
    
        // Methods
        dcn* xvd();  // RVA: 0x6B8490
        static InjectionDetector* xve();  // RVA: 0x6B8510
        static void xvf();  // RVA: 0x6B8590
        static void xvg(System.Action<System.String> a);  // RVA: 0x6B8610
        static void xvh();  // RVA: 0x6B8690
        static void xvi();  // RVA: 0x6B8710
        void xva();  // RVA: 0x6B8410
        void .ctor();  // RVA: 0x6B83D0
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dco
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Type* <bmuy>k__BackingField; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool <bmuz>k__BackingField; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppObject* <bmva>k__BackingField; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppObject* <bmvb>k__BackingField; // 0x0028

    // Methods
    Type* xvj();  // RVA: 0x6BDBB0
    bool xvk();  // RVA: 0x6CFB30
    Il2CppObject* xvl();  // RVA: 0x63EBD0
    Il2CppObject* xvm();  // RVA: 0x678290
    void .ctor(Type* a, bool b, Il2CppObject* c, Il2CppObject* d);  // RVA: 0x6D4310
    Il2CppString* xvb();  // RVA: 0x6D4210
    Il2CppString* ToString();  // RVA: 0x6D4210
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class ObscuredCheatingDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmvc;
    
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
        dco* xvn();  // RVA: 0x6B8810
        static ObscuredCheatingDetector* xvo();  // RVA: 0x6B8890
        static ObscuredCheatingDetector* xvp();  // RVA: 0x6B88C0
        static ObscuredCheatingDetector* xvq(Action* a);  // RVA: 0x6B8A10
        static void xvr();  // RVA: 0x6B8A60
        static void xvs();  // RVA: 0x6B8B70
        static bool xvt();  // RVA: 0x6B8C80
        static bool xvu();  // RVA: 0x6B8D80
        void .ctor();  // RVA: 0x6B8790
        void xvv();  // RVA: 0x6B8EF0
        void xvw(dbu* a, Il2CppObject* b, Il2CppObject* c);  // RVA: 0x6B9080
        void xvx(dbu* a, bool b, Il2CppObject* c, Il2CppObject* d);  // RVA: 0x6B9160
        ObscuredCheatingDetector* xvy(Action* a);  // RVA: 0x6B9250
        void xva();  // RVA: 0x6B8800
        static void xvz(b a, bool b, c c, bool d, a e, d f);  // RVA: 0x563F30
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcp
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool <bmvd>k__BackingField; // 0x0010
    bool <bmve>k__BackingField; // 0x0011
    bool <bmvf>k__BackingField; // 0x0012
    bool <bmvg>k__BackingField; // 0x0013
    bool <bmvh>k__BackingField; // 0x0014

    // Methods
    bool xwa();  // RVA: 0x667020
    bool xwb();  // RVA: 0x6740D0
    bool xwc();  // RVA: 0x6D45A0
    bool xwd();  // RVA: 0x6D45B0
    bool xwe();  // RVA: 0x6D45C0
    void .ctor(bool a, bool b, bool c, bool d, bool e);  // RVA: 0x6D43A0
    Il2CppString* xvb();  // RVA: 0x6D4400
    Il2CppString* ToString();  // RVA: 0x6D4390
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class SpeedHackDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmvi;
    
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
        uint8_t bmvj; // 0x0076
        uint8_t pad_0077[0x1]; // 0x0077
        int32_t bmvk; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        int64_t bmvl; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        int64_t bmvm; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        int64_t bmvn; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        int64_t bmvo; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        bool bmvp; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float bmvq; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        bool bmvr; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        double bmvs; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        bool bmvt; // 0x00B8
    
        // Methods
        dcp* xwf();  // RVA: 0x6BE310
        int32_t get_TimeJumpThreshold();  // RVA: 0x6BE220
        void set_TimeJumpThreshold(int32_t value);  // RVA: 0x6BE250
        bool get_UseDsp();  // RVA: 0x6BE230
        void set_UseDsp(bool value);  // RVA: 0x6BE260
        bool get_WatchTimeScale();  // RVA: 0x6BE240
        void set_WatchTimeScale(bool value);  // RVA: 0x6BE270
        static SpeedHackDetector* xwg();  // RVA: 0x6BE390
        static SpeedHackDetector* xwh();  // RVA: 0x6BE3C0
        static SpeedHackDetector* xwi(Action* a);  // RVA: 0x6BE630
        static SpeedHackDetector* xwj(Action* a, float b);  // RVA: 0x6BE750
        static SpeedHackDetector* xwk(Action* a, float b, uint8_t c);  // RVA: 0x6BE840
        static SpeedHackDetector* xwl(Action* a, float b, uint8_t c, int32_t d);  // RVA: 0x6BE900
        static void xwm();  // RVA: 0x6BE990
        static void xwn();  // RVA: 0x6BEAA0
        static void xwo(float a);  // RVA: 0x6BEBB0
        static void xwp(float a);  // RVA: 0x6BED10
        static void xwq();  // RVA: 0x6BEE50
        static void xwr();  // RVA: 0x6BEF80
        void xws();  // RVA: 0x6BF0A0
        void .ctor();  // RVA: 0x6BE1A0
        void OnApplicationPause(bool pause);  // RVA: 0x6BDD70
        void Update();  // RVA: 0x6BDE00
        SpeedHackDetector* xwt(Action* a, float b, uint8_t c, int32_t d);  // RVA: 0x6BF190
        void xva();  // RVA: 0x6BE2E0
        void xuw();  // RVA: 0x6BE280
        bool xwu(int64_t a, int64_t b, int64_t c);  // RVA: 0x6BF400
        void xwv(float a);  // RVA: 0x6BF4C0
        bool xww();  // RVA: 0x6BF510
        void xwx(float a);  // RVA: 0x6BF5B0
        void xwy();  // RVA: 0x6BF5F0
        void xwz();  // RVA: 0x6BF610
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcq
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    CheckResult <bmvu>k__BackingField; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    ErrorKind <bmvv>k__BackingField; // 0x0014

    // Methods
    CheckResult xxa();  // RVA: 0x666240
    ErrorKind xxb();  // RVA: 0x6D4720
    void .ctor(CheckResult a, ErrorKind b);  // RVA: 0x6D46E0
    Il2CppString* xvb();  // RVA: 0x6D45D0
    Il2CppString* ToString();  // RVA: 0x6D45D0
};

// Namespace: <global>
class OnlineTimeCallback : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6BDA00
    void Invoke(OnlineTimeResult result);  // RVA: 0x6BD9C0
    IAsyncResult* BeginInvoke(OnlineTimeResult result, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6BD940
    void EndInvoke(IAsyncResult* result);  // RVA: 0x666430
};

// Namespace: <global>
class TimeCheatingDetectorEventHandler : public MulticastDelegate
{
public:

    // Methods
    void .ctor(Il2CppObject* object, intptr_t method);  // RVA: 0x6BF710
    void Invoke(CheckResult result, ErrorKind error);  // RVA: 0x6BF700
    IAsyncResult* BeginInvoke(CheckResult result, ErrorKind error, AsyncCallback* callback, Il2CppObject* object);  // RVA: 0x6BF660
    void EndInvoke(IAsyncResult* result);  // RVA: 0x666430
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
    bool xxc();  // RVA: 0x666770
    Il2CppString* xxd();  // RVA: 0x666780
    int64_t xxe();  // RVA: 0x6BDBB0
    double xxf();  // RVA: 0x6BDBC0
    DateTime xxg();  // RVA: 0x63EBD0
    OnlineTimeResult xxh(double a, DateTime b);  // RVA: 0x6BDBD0
    OnlineTimeResult xxi(Il2CppString* a, int64_t b);  // RVA: 0x6BDC50
    Il2CppString* ToString();  // RVA: 0x6BDAB0
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
    int32_t bmvw; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmvx; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TimeCheatingDetector* bmvy; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x6737E0
    void xxj();  // RVA: 0x635AE0
    bool MoveNext();  // RVA: 0x6D4730
    Il2CppObject* xxk();  // RVA: 0x688DE0
    void xxl();  // RVA: 0x6D4B50
    Il2CppObject* xxm();  // RVA: 0x688DE0
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
    void MoveNext();  // RVA: 0x6C21A0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6C2430
};

// Namespace: <global>
class dcs
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmvz; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmwa; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TimeCheatingDetector* bmwb; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x6737E0
    void xxn();  // RVA: 0x635AE0
    bool MoveNext();  // RVA: 0x6D4B90
    Il2CppObject* xxo();  // RVA: 0x688DE0
    void xxp();  // RVA: 0x6D4CA0
    Il2CppObject* xxq();  // RVA: 0x688DE0
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
    void MoveNext();  // RVA: 0x6C2460
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6C2770
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
    void MoveNext();  // RVA: 0x6C2AF0
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6C33E0
};

// Namespace: <global>
class dct
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmwc; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmwd; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* bmwe; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    OnlineTimeCallback* bmwf; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    RequestMethod bmwg; // 0x0030

    // Methods
    void .ctor(int32_t a);  // RVA: 0x6737E0
    void xxr();  // RVA: 0x635AE0
    bool MoveNext();  // RVA: 0x6D4CE0
    Il2CppObject* xxs();  // RVA: 0x688DE0
    void xxt();  // RVA: 0x6D4D90
    Il2CppObject* xxu();  // RVA: 0x688DE0
};

// Namespace: <global>
class dcu
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmwh; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmwi; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Uri* bmwj; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RequestMethod bmwk; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    OnlineTimeCallback* bmwl; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    OnlineTimeResult bmwm; // 0x0038
    uint8_t pad_0039[0x27]; // 0x0039
    UnityWebRequest* bmwn; // 0x0060

    // Methods
    void xxv();  // RVA: 0x6D5200
    Il2CppObject* xxz();  // RVA: 0x688DE0
    void xxw();  // RVA: 0x6D5290
    Il2CppObject* xxx();  // RVA: 0x688DE0
    void omw();  // RVA: 0x6D51B0
    void .ctor(int32_t a);  // RVA: 0x6737E0
    bool MoveNext();  // RVA: 0x6D4DD0
    void kab();  // RVA: 0x6D5110
    void xxy();  // RVA: 0x6D52E0
    void kwd();  // RVA: 0x6D5160
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
    void MoveNext();  // RVA: 0x6C3410
    void SetStateMachine(IAsyncStateMachine* stateMachine);  // RVA: 0x6C3E00
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class TimeCheatingDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static Il2CppString* ComponentName;
        // static Il2CppString* bmwo;
        // static int32_t bmwp;
        // static WaitForEndOfFrame* bmwq;
        // static System.Lazy<dat> <bmwr>k__BackingField;
        // static bool bmws;
    
        uint8_t pad_0000[0x60]; // 0x0000
        TimeCheatingDetectorEventHandler* bmwt; // 0x0060
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
        ErrorKind <bmwu>k__BackingField; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        CheckResult <bmwv>k__BackingField; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        OnlineTimeResult <bmww>k__BackingField; // 0x0090
        uint8_t pad_0091[0x27]; // 0x0091
        bool <bmwx>k__BackingField; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Il2CppString* bmwy; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Uri* bmwz; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        TimeCheatingDetectorEventHandler* bmxa; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        float bmxb; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        bool bmxc; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        double bmxd; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> bmxe; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Action* bmxf; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        int32_t threshold; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Il2CppString* timeServer; // 0x0100
    
        // Methods
        dcq* xya();  // RVA: 0x6BFC80
        static System.Lazy<dat> xyb();  // RVA: 0x6BFD00
        void xyc(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6BFD50
        void xyd(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6BFDF0
        Il2CppString* xye();  // RVA: 0x6BFE90
        void xyf(Il2CppString* a);  // RVA: 0x6BFEA0
        ErrorKind xyg();  // RVA: 0x6BFF60
        void xyh(ErrorKind a);  // RVA: 0x6BFF70
        CheckResult xyi();  // RVA: 0x6BFF80
        void xyj(CheckResult a);  // RVA: 0x6BFF90
        OnlineTimeResult xyk();  // RVA: 0x6BFFA0
        void xyl(OnlineTimeResult a);  // RVA: 0x6BFFD0
        bool xym();  // RVA: 0x6C0000
        void xyn(bool a);  // RVA: 0x6C0010
        void OnApplicationPause(bool pauseStatus);  // RVA: 0x6BF7C0
        void Update();  // RVA: 0x6BF840
        static TimeCheatingDetector* xyo();  // RVA: 0x6C0020
        static TimeCheatingDetector* xyp(TimeCheatingDetectorEventHandler* a);  // RVA: 0x6C0050
        static TimeCheatingDetector* xyq(float a, TimeCheatingDetectorEventHandler* b);  // RVA: 0x6C0240
        static void xyr();  // RVA: 0x6C02A0
        static void xys();  // RVA: 0x6C03B0
        static IEnumerator* xyt(Il2CppString* a, OnlineTimeCallback* b, RequestMethod c);  // RVA: 0x6C04C0
        static IEnumerator* xyu(Uri* a, OnlineTimeCallback* b, RequestMethod c);  // RVA: 0x6C0560
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyv(Il2CppString* a, RequestMethod b);  // RVA: 0x6C0600
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyw(Il2CppString* a, CancellationToken b, RequestMethod c);  // RVA: 0x6C06D0
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyx(Uri* a, RequestMethod b);  // RVA: 0x6C0750
        static System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyy(Uri* a, CancellationToken b, RequestMethod c);  // RVA: 0x6C07E0
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xyz(Il2CppString* a, RequestMethod b);  // RVA: 0x6C0930
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xza(Il2CppString* a, CancellationToken b, RequestMethod c);  // RVA: 0x6C0A00
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xzb(Uri* a, RequestMethod b);  // RVA: 0x6C0A80
        static UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.OnlineTimeResult> xzc(Uri* a, CancellationToken b, RequestMethod c);  // RVA: 0x6C0B10
        static dat* xzd();  // RVA: 0x6C0C20
        static UnityWebRequest* xze(Uri* a, RequestMethod b);  // RVA: 0x6C0C70
        static void xzf(UnityWebRequest* a, OnlineTimeResult b);  // RVA: 0x6C0EB0
        static Uri* xzg(Il2CppString* a);  // RVA: 0x6C1180
        static bool xzh(Il2CppString* a, DateTime b);  // RVA: 0x6C1250
        void xzi();  // RVA: 0x6C15C0
        bool xzj();  // RVA: 0x6C1670
        IEnumerator* xzk();  // RVA: 0x6C1700
        System.Threading.Tasks.Task<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> xzl();  // RVA: 0x6C1770
        UnityEngine.Awaitable<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.CheckResult> xzm();  // RVA: 0x6C1860
        bool xzn();  // RVA: 0x6C1920
        TimeCheatingDetector* xzo(float a, TimeCheatingDetectorEventHandler* b);  // RVA: 0x6C1A50
        bool xzp(TimeCheatingDetector* a);  // RVA: 0x6C1BA0
        void xva();  // RVA: 0x6BFC70
        bool xuv();  // RVA: 0x6BFB50
        void xux();  // RVA: 0x6BFC20
        void xuw();  // RVA: 0x6BFBB0
        IEnumerator* xzq();  // RVA: 0x6C1C70
        void xzr();  // RVA: 0x6C1CE0
        void xzs(OnlineTimeResult a);  // RVA: 0x6C1E20
        void xzt(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x6C1EB0
        void xzu(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x6C1F70
        void xzv(Action* a);  // RVA: 0x6C2030
        void xzw(Action* a);  // RVA: 0x6C20E0
        static double xzx(Il2CppString* a);  // RVA: 0x6C2190
        static void xzy(System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> a);  // RVA: 0x635AE0
        static void xzz(Action* a, int32_t b);  // RVA: 0x635AE0
        static void yaa(Action* a, System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> b, int32_t c);  // RVA: 0x635AE0
        static void yab(float a, Action* b, System.Action<CodeStage.AntiCheat.Detectors.TimeCheatingDetector.ErrorKind> c, Action* d);  // RVA: 0x635AE0
        void .ctor();  // RVA: 0x6BFA30
        static void .cctor();  // RVA: 0x6BF910
    };

} // namespace CodeStage.AntiCheat.Detectors

// Namespace: <global>
class dcv
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool <bmxg>k__BackingField; // 0x0010
    bool <bmxh>k__BackingField; // 0x0011
    bool <bmxi>k__BackingField; // 0x0012
    bool <bmxj>k__BackingField; // 0x0013

    // Methods
    bool yac();  // RVA: 0x667020
    bool yad();  // RVA: 0x6740D0
    bool yae();  // RVA: 0x6D45A0
    bool yaf();  // RVA: 0x6D45B0
    void .ctor(bool a, bool b, bool c, bool d);  // RVA: 0x6D5490
    Il2CppString* xvb();  // RVA: 0x6D5320
    Il2CppString* ToString();  // RVA: 0x6D5320
};

// Namespace: <global>
class dcw
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmxk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmxl; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    WallHackDetector* bmxm; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RenderTexture* bmxn; // 0x0028

    // Methods
    void .ctor(int32_t a);  // RVA: 0x6737E0
    void yag();  // RVA: 0x635AE0
    bool MoveNext();  // RVA: 0x6E9BF0
    Il2CppObject* yah();  // RVA: 0x688DE0
    void yai();  // RVA: 0x6EA220
    Il2CppObject* yaj();  // RVA: 0x688DE0
};

// Namespace: <global>
class dcx
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t bmxo; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* bmxp; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    WallHackDetector* bmxq; // 0x0020

    // Methods
    void .ctor(int32_t a);  // RVA: 0x6737E0
    void yak();  // RVA: 0x635AE0
    bool MoveNext();  // RVA: 0x6EA260
    Il2CppObject* yal();  // RVA: 0x688DE0
    void yam();  // RVA: 0x6EA320
    Il2CppObject* yan();  // RVA: 0x688DE0
};

namespace CodeStage.AntiCheat.Detectors
{

    // Namespace: CodeStage.AntiCheat.Detectors
    class WallHackDetector : public ACTkDetectorBase`1
    {
    public:
        // Static fields
        // static int32_t bmxv;
        // static float bmxx;
        // static int32_t bmxw;
        // static int32_t bmxu;
        // static Il2CppString* bmxt;
        // static Il2CppString* bmxs;
        // static Il2CppString* bmxr;
        // static Il2CppString* ComponentName;
    
        uint8_t pad_0000[0x60]; // 0x0000
        Vector3 bmxy; // 0x0060
        uint8_t pad_0061[0xF]; // 0x0061
        WaitForEndOfFrame* bmxz; // 0x0070
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
        GameObject* bmya; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        GameObject* bmyb; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* bmyc; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Camera* bmyd; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        MeshRenderer* bmye; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        MeshRenderer* bmyf; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Color bmyg; // 0x00C8
        uint8_t pad_00C9[0xF]; // 0x00C9
        Color bmyh; // 0x00D8
        uint8_t pad_00D9[0xF]; // 0x00D9
        Shader* bmyi; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Material* bmyj; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        Texture2D* bmyk; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Texture2D* bmyl; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        RenderTexture* bmym; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        int32_t bmyn; // 0x0110
        uint8_t pad_0111[0x3]; // 0x0111
        int32_t bmyo; // 0x0114
        uint8_t pad_0115[0x3]; // 0x0115
        Rigidbody* bmyp; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        CharacterController* bmyq; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        float bmyr; // 0x0128
        uint8_t pad_0129[0x3]; // 0x0129
        uint8_t bmys; // 0x012C
        uint8_t bmyt; // 0x012D
        uint8_t bmyu; // 0x012E
        uint8_t bmyv; // 0x012F
        bool bmyw; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        RaycastHit[][] bmyx; // 0x0138
    
        // Methods
        dcv* yao();  // RVA: 0x6C67B0
        bool yap();  // RVA: 0x6C6830
        void yaq(bool a);  // RVA: 0x6C6840
        bool yar();  // RVA: 0x6C6910
        void yas(bool a);  // RVA: 0x6C6920
        bool yat();  // RVA: 0x6C69F0
        void yau(bool a);  // RVA: 0x6C6A00
        bool yav();  // RVA: 0x6C6AD0
        void yaw(bool a);  // RVA: 0x6C6AE0
        static WallHackDetector* yax();  // RVA: 0x6C6BB0
        static WallHackDetector* yay();  // RVA: 0x6C6BE0
        static WallHackDetector* yaz(Action* a);  // RVA: 0x6C6E10
        static WallHackDetector* yba(Action* a, Vector3 b);  // RVA: 0x6C6F10
        static WallHackDetector* ybb(Action* a, Vector3 b, uint8_t c);  // RVA: 0x6C6FD0
        static void ybc();  // RVA: 0x6C7060
        static void ybd();  // RVA: 0x6C7170
        void ybe();  // RVA: 0x6C7280
        void .ctor();  // RVA: 0x6C6440
        void OnDestroy();  // RVA: 0x6C5760
        void FixedUpdate();  // RVA: 0x6C5670
        void Update();  // RVA: 0x6C62C0
        WallHackDetector* ybf(Action* a, Vector3 b, uint8_t c);  // RVA: 0x6C7360
        void xva();  // RVA: 0x6C6770
        void xux();  // RVA: 0x6C65E0
        bool xuy();  // RVA: 0x6C66E0
        void xuw();  // RVA: 0x6C6570
        void ybg();  // RVA: 0x6C7600
        IEnumerator* ybh();  // RVA: 0x6C8C90
        void StartRigidModule();  // RVA: 0x6C5E40
        void StartControllerModule();  // RVA: 0x6C5BF0
        void ybi();  // RVA: 0x6C8D00
        void ShootWireframeModule();  // RVA: 0x6C5B20
        IEnumerator* ybj();  // RVA: 0x6C8DD0
        bool ybk(Color a, Color b);  // RVA: 0x6C8E40
        void ybl();  // RVA: 0x6C8F30
        void ShootRaycastModule();  // RVA: 0x6C5910
        void ybm();  // RVA: 0x6C8FF0
        void ybn();  // RVA: 0x6C90E0
        void ybo();  // RVA: 0x6C9180
        void ybp();  // RVA: 0x6C9210
        void ybq();  // RVA: 0x6C9270
        void ybr();  // RVA: 0x6C92D0
        void ybs();  // RVA: 0x6C9470
        void ybt();  // RVA: 0x6C9640
        void ybu();  // RVA: 0x6C9700
        bool ybv();  // RVA: 0x6C97C0
        static Color32 ybw();  // RVA: 0x6C98A0
        static bool ybx(Color32 a, Color32 b, int32_t c);  // RVA: 0x6C98F0
    };

} // namespace CodeStage.AntiCheat.Detectors

namespace CodeStage.AntiCheat.Common
{

    // Namespace: CodeStage.AntiCheat.Common
    class ACTk
    {
    public:
        // Static fields
        // static Il2CppString* bmyy;
        // static Il2CppString* bmyz;
        // static Il2CppString* bmza;
        // static Il2CppString* bmzb;
        // static Char[][] bmzc;
        // static Il2CppString* bmzd;
        // static Il2CppString* bmze;
    
    
        // Methods
        static void GetUnityInfo();  // RVA: 0x6D5930
        static void yby(Il2CppString* a, Exception* b);  // RVA: 0x6D5AC0
        static void ybz(Il2CppString* a, Il2CppString* b, Exception* c);  // RVA: 0x6D5BA0
        static Il2CppString* yca(Il2CppString* a, Il2CppString* b, Exception* c);  // RVA: 0x6D5C60
        static Il2CppString* ycb(Exception* a);  // RVA: 0x6D5E70
        static void .cctor();  // RVA: 0x6D5A30
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
        bool Equals(ACTkByte16 other);  // RVA: 0x6D5650
        bool Equals(Il2CppObject* obj);  // RVA: 0x6D54F0
        int32_t GetHashCode();  // RVA: 0x6D56F0
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
        void ycc();  // RVA: 0x6D58B0
        void ycd();  // RVA: 0x6D58C0
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
        void yce();  // RVA: 0x6D58D0
        void ycf();  // RVA: 0x6D5900
    };

    // Namespace: CodeStage.AntiCheat.Common
    class BackgroundThreadAccessException : public Exception
    {
    public:
        uint8_t pad_0000[0x90]; // 0x0000
        Il2CppString* <bmzf>k__BackingField; // 0x0090
    
        // Methods
        Il2CppString* ycg();  // RVA: 0x6D6450
        void .ctor(Il2CppString* apiName);  // RVA: 0x6D6260
    };

    // Namespace: CodeStage.AntiCheat.Common
    class ContainerHolder
    {
    public:
        // Static fields
        // static Il2CppString* bmzg;
        // static GameObject* container;
        // static bool bmzh;
    
    
        // Methods
        static void AfterAssembliesLoaded();  // RVA: 0x6D6460
        static void BeforeSplashScreen();  // RVA: 0x6D6620
        static void BeforeSceneLoad();  // RVA: 0x6D6540
        static void ych(Il2CppString* a);  // RVA: 0x6D6700
        static a yci();  // RVA: 0x563F30
        static void ycj(GameObject* a);  // RVA: 0x6D68E0
    };

} // namespace CodeStage.AntiCheat.Common

// Namespace: <global>
class dcy`1 : public MonoBehaviour
{
public:
    // Static fields
    // static a <bmzl>k__BackingField;

    bool keepAlive; // 0x0000
    int32_t bmzi; // 0x0000
    bool bmzj; // 0x0000
    Scene bmzk; // 0x0000

    // Methods
    static a yck();  // RVA: 0x563F30
    static void ycl(a a);  // RVA: 0x563F30
    static a ycm();  // RVA: 0x563F30
    void Awake();  // RVA: 0x42E0A0
    void Start();  // RVA: 0x42E0A0
    void OnDestroy();  // RVA: 0x42E0A0
    void wdb(Scene a, LoadSceneMode b);
    void ycn(Scene a);
    bool xzp(a a);  // RVA: 0x563F30
    void yco();  // RVA: 0x42E0A0
    void .ctor();  // RVA: 0x42E0A0
};

// Namespace: <global>
class dcz
{
public:
    // Static fields
    // static Il2CppString* bmzm;
    // static Il2CppString* bmzn;
    // static System.Nullable<System.Boolean> bmzo;


    // Methods
    static Il2CppString* jws();  // RVA: 0x6EA740
    static Il2CppString* ycq();  // RVA: 0x6EAB60
    static Il2CppString* ycr();  // RVA: 0x6EAC60
    static bool ycs();  // RVA: 0x6EAD60
    static Il2CppString* jxy();  // RVA: 0x6EA840
    static bool gtn();  // RVA: 0x6EA660
    static bool dgj();  // RVA: 0x6EA360
    static void ycp(bool a);  // RVA: 0x6EAA20
    static Il2CppString* yct();  // RVA: 0x6EAE40
    static bool egl();  // RVA: 0x6EA440
    static bool nbe();  // RVA: 0x6EA940
    static void eqe(bool a);  // RVA: 0x6EA520
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

namespace <PrivateImplementationDetails>{915EEBE3-64A6-451F-9001-4142610D7F79}
{

    // Namespace: <PrivateImplementationDetails>{915EEBE3-64A6-451F-9001-4142610D7F79}
    class a
    {
    public:
        // Static fields
        // static a_ a_;
        // static Byte[][] a__;
        // static String[][] a___;
    
    
        // Methods
        static Il2CppString* a_(int32_t param0, int32_t param1, int32_t param2);  // RVA: 0x6D6BF0
        static Il2CppString* a();  // RVA: 0x6D6CE0
        static Il2CppString* b();  // RVA: 0x6D6D70
        static Il2CppString* c();  // RVA: 0x6D7E50
        static Il2CppString* d();  // RVA: 0x6D8F30
        static Il2CppString* e();  // RVA: 0x6DA010
        static Il2CppString* f();  // RVA: 0x6DB0F0
        static Il2CppString* g();  // RVA: 0x6DC1D0
        static Il2CppString* h();  // RVA: 0x6DD2B0
        static Il2CppString* i();  // RVA: 0x6DE390
        static Il2CppString* j();  // RVA: 0x6DF470
        static Il2CppString* k();  // RVA: 0x6E0550
        static Il2CppString* l();  // RVA: 0x6E1630
        static Il2CppString* m();  // RVA: 0x6E2710
        static Il2CppString* n();  // RVA: 0x6E37F0
        static Il2CppString* o();  // RVA: 0x6E48D0
        static Il2CppString* p();  // RVA: 0x6E59B0
        static Il2CppString* q();  // RVA: 0x6E6A90
        static Il2CppString* r();  // RVA: 0x6E7B70
        static Il2CppString* s();  // RVA: 0x6E8C50
        static Il2CppString* t();  // RVA: 0x6E9790
        static Il2CppString* u();  // RVA: 0x6E9830
        static Il2CppString* v();  // RVA: 0x6E98D0
        static Il2CppString* w();  // RVA: 0x6E9970
        static Il2CppString* x();  // RVA: 0x6E9A10
        static Il2CppString* y();  // RVA: 0x6E9AB0
        static Il2CppString* z();  // RVA: 0x6E9B50
        static Il2CppString* ba();  // RVA: 0x6D6E10
        static Il2CppString* bb();  // RVA: 0x6D6EB0
        static Il2CppString* bc();  // RVA: 0x6D6F50
        static Il2CppString* bd();  // RVA: 0x6D6FF0
        static Il2CppString* be();  // RVA: 0x6D7090
        static Il2CppString* bf();  // RVA: 0x6D7130
        static Il2CppString* bg();  // RVA: 0x6D71D0
        static Il2CppString* bh();  // RVA: 0x6D7270
        static Il2CppString* bi();  // RVA: 0x6D7310
        static Il2CppString* bj();  // RVA: 0x6D73B0
        static Il2CppString* bk();  // RVA: 0x6D7450
        static Il2CppString* bl();  // RVA: 0x6D74F0
        static Il2CppString* bm();  // RVA: 0x6D7590
        static Il2CppString* bn();  // RVA: 0x6D7630
        static Il2CppString* bo();  // RVA: 0x6D76D0
        static Il2CppString* bp();  // RVA: 0x6D7770
        static Il2CppString* bq();  // RVA: 0x6D7810
        static Il2CppString* br();  // RVA: 0x6D78B0
        static Il2CppString* bs();  // RVA: 0x6D7950
        static Il2CppString* bt();  // RVA: 0x6D79F0
        static Il2CppString* bu();  // RVA: 0x6D7A90
        static Il2CppString* bv();  // RVA: 0x6D7B30
        static Il2CppString* bw();  // RVA: 0x6D7BD0
        static Il2CppString* bx();  // RVA: 0x6D7C70
        static Il2CppString* by();  // RVA: 0x6D7D10
        static Il2CppString* bz();  // RVA: 0x6D7DB0
        static Il2CppString* ca();  // RVA: 0x6D7EF0
        static Il2CppString* cb();  // RVA: 0x6D7F90
        static Il2CppString* cc();  // RVA: 0x6D8030
        static Il2CppString* cd();  // RVA: 0x6D80D0
        static Il2CppString* ce();  // RVA: 0x6D8170
        static Il2CppString* cf();  // RVA: 0x6D8210
        static Il2CppString* cg();  // RVA: 0x6D82B0
        static Il2CppString* ch();  // RVA: 0x6D8350
        static Il2CppString* ci();  // RVA: 0x6D83F0
        static Il2CppString* cj();  // RVA: 0x6D8490
        static Il2CppString* ck();  // RVA: 0x6D8530
        static Il2CppString* cl();  // RVA: 0x6D85D0
        static Il2CppString* cm();  // RVA: 0x6D8670
        static Il2CppString* cn();  // RVA: 0x6D8710
        static Il2CppString* co();  // RVA: 0x6D87B0
        static Il2CppString* cp();  // RVA: 0x6D8850
        static Il2CppString* cq();  // RVA: 0x6D88F0
        static Il2CppString* cr();  // RVA: 0x6D8990
        static Il2CppString* cs();  // RVA: 0x6D8A30
        static Il2CppString* ct();  // RVA: 0x6D8AD0
        static Il2CppString* cu();  // RVA: 0x6D8B70
        static Il2CppString* cv();  // RVA: 0x6D8C10
        static Il2CppString* cw();  // RVA: 0x6D8CB0
        static Il2CppString* cx();  // RVA: 0x6D8D50
        static Il2CppString* cy();  // RVA: 0x6D8DF0
        static Il2CppString* cz();  // RVA: 0x6D8E90
        static Il2CppString* da();  // RVA: 0x6D8FD0
        static Il2CppString* db();  // RVA: 0x6D9070
        static Il2CppString* dc();  // RVA: 0x6D9110
        static Il2CppString* dd();  // RVA: 0x6D91B0
        static Il2CppString* de();  // RVA: 0x6D9250
        static Il2CppString* df();  // RVA: 0x6D92F0
        static Il2CppString* dg();  // RVA: 0x6D9390
        static Il2CppString* dh();  // RVA: 0x6D9430
        static Il2CppString* di();  // RVA: 0x6D94D0
        static Il2CppString* dj();  // RVA: 0x6D9570
        static Il2CppString* dk();  // RVA: 0x6D9610
        static Il2CppString* dl();  // RVA: 0x6D96B0
        static Il2CppString* dm();  // RVA: 0x6D9750
        static Il2CppString* dn();  // RVA: 0x6D97F0
        static Il2CppString* do();  // RVA: 0x6D9890
        static Il2CppString* dp();  // RVA: 0x6D9930
        static Il2CppString* dq();  // RVA: 0x6D99D0
        static Il2CppString* dr();  // RVA: 0x6D9A70
        static Il2CppString* ds();  // RVA: 0x6D9B10
        static Il2CppString* dt();  // RVA: 0x6D9BB0
        static Il2CppString* du();  // RVA: 0x6D9C50
        static Il2CppString* dv();  // RVA: 0x6D9CF0
        static Il2CppString* dw();  // RVA: 0x6D9D90
        static Il2CppString* dx();  // RVA: 0x6D9E30
        static Il2CppString* dy();  // RVA: 0x6D9ED0
        static Il2CppString* dz();  // RVA: 0x6D9F70
        static Il2CppString* ea();  // RVA: 0x6DA0B0
        static Il2CppString* eb();  // RVA: 0x6DA150
        static Il2CppString* ec();  // RVA: 0x6DA1F0
        static Il2CppString* ed();  // RVA: 0x6DA290
        static Il2CppString* ee();  // RVA: 0x6DA330
        static Il2CppString* ef();  // RVA: 0x6DA3D0
        static Il2CppString* eg();  // RVA: 0x6DA470
        static Il2CppString* eh();  // RVA: 0x6DA510
        static Il2CppString* ei();  // RVA: 0x6DA5B0
        static Il2CppString* ej();  // RVA: 0x6DA650
        static Il2CppString* ek();  // RVA: 0x6DA6F0
        static Il2CppString* el();  // RVA: 0x6DA790
        static Il2CppString* em();  // RVA: 0x6DA830
        static Il2CppString* en();  // RVA: 0x6DA8D0
        static Il2CppString* eo();  // RVA: 0x6DA970
        static Il2CppString* ep();  // RVA: 0x6DAA10
        static Il2CppString* eq();  // RVA: 0x6DAAB0
        static Il2CppString* er();  // RVA: 0x6DAB50
        static Il2CppString* es();  // RVA: 0x6DABF0
        static Il2CppString* et();  // RVA: 0x6DAC90
        static Il2CppString* eu();  // RVA: 0x6DAD30
        static Il2CppString* ev();  // RVA: 0x6DADD0
        static Il2CppString* ew();  // RVA: 0x6DAE70
        static Il2CppString* ex();  // RVA: 0x6DAF10
        static Il2CppString* ey();  // RVA: 0x6DAFB0
        static Il2CppString* ez();  // RVA: 0x6DB050
        static Il2CppString* fa();  // RVA: 0x6DB190
        static Il2CppString* fb();  // RVA: 0x6DB230
        static Il2CppString* fc();  // RVA: 0x6DB2D0
        static Il2CppString* fd();  // RVA: 0x6DB370
        static Il2CppString* fe();  // RVA: 0x6DB410
        static Il2CppString* ff();  // RVA: 0x6DB4B0
        static Il2CppString* fg();  // RVA: 0x6DB550
        static Il2CppString* fh();  // RVA: 0x6DB5F0
        static Il2CppString* fi();  // RVA: 0x6DB690
        static Il2CppString* fj();  // RVA: 0x6DB730
        static Il2CppString* fk();  // RVA: 0x6DB7D0
        static Il2CppString* fl();  // RVA: 0x6DB870
        static Il2CppString* fm();  // RVA: 0x6DB910
        static Il2CppString* fn();  // RVA: 0x6DB9B0
        static Il2CppString* fo();  // RVA: 0x6DBA50
        static Il2CppString* fp();  // RVA: 0x6DBAF0
        static Il2CppString* fq();  // RVA: 0x6DBB90
        static Il2CppString* fr();  // RVA: 0x6DBC30
        static Il2CppString* fs();  // RVA: 0x6DBCD0
        static Il2CppString* ft();  // RVA: 0x6DBD70
        static Il2CppString* fu();  // RVA: 0x6DBE10
        static Il2CppString* fv();  // RVA: 0x6DBEB0
        static Il2CppString* fw();  // RVA: 0x6DBF50
        static Il2CppString* fx();  // RVA: 0x6DBFF0
        static Il2CppString* fy();  // RVA: 0x6DC090
        static Il2CppString* fz();  // RVA: 0x6DC130
        static Il2CppString* ga();  // RVA: 0x6DC270
        static Il2CppString* gb();  // RVA: 0x6DC310
        static Il2CppString* gc();  // RVA: 0x6DC3B0
        static Il2CppString* gd();  // RVA: 0x6DC450
        static Il2CppString* ge();  // RVA: 0x6DC4F0
        static Il2CppString* gf();  // RVA: 0x6DC590
        static Il2CppString* gg();  // RVA: 0x6DC630
        static Il2CppString* gh();  // RVA: 0x6DC6D0
        static Il2CppString* gi();  // RVA: 0x6DC770
        static Il2CppString* gj();  // RVA: 0x6DC810
        static Il2CppString* gk();  // RVA: 0x6DC8B0
        static Il2CppString* gl();  // RVA: 0x6DC950
        static Il2CppString* gm();  // RVA: 0x6DC9F0
        static Il2CppString* gn();  // RVA: 0x6DCA90
        static Il2CppString* go();  // RVA: 0x6DCB30
        static Il2CppString* gp();  // RVA: 0x6DCBD0
        static Il2CppString* gq();  // RVA: 0x6DCC70
        static Il2CppString* gr();  // RVA: 0x6DCD10
        static Il2CppString* gs();  // RVA: 0x6DCDB0
        static Il2CppString* gt();  // RVA: 0x6DCE50
        static Il2CppString* gu();  // RVA: 0x6DCEF0
        static Il2CppString* gv();  // RVA: 0x6DCF90
        static Il2CppString* gw();  // RVA: 0x6DD030
        static Il2CppString* gx();  // RVA: 0x6DD0D0
        static Il2CppString* gy();  // RVA: 0x6DD170
        static Il2CppString* gz();  // RVA: 0x6DD210
        static Il2CppString* ha();  // RVA: 0x6DD350
        static Il2CppString* hb();  // RVA: 0x6DD3F0
        static Il2CppString* hc();  // RVA: 0x6DD490
        static Il2CppString* hd();  // RVA: 0x6DD530
        static Il2CppString* he();  // RVA: 0x6DD5D0
        static Il2CppString* hf();  // RVA: 0x6DD670
        static Il2CppString* hg();  // RVA: 0x6DD710
        static Il2CppString* hh();  // RVA: 0x6DD7B0
        static Il2CppString* hi();  // RVA: 0x6DD850
        static Il2CppString* hj();  // RVA: 0x6DD8F0
        static Il2CppString* hk();  // RVA: 0x6DD990
        static Il2CppString* hl();  // RVA: 0x6DDA30
        static Il2CppString* hm();  // RVA: 0x6DDAD0
        static Il2CppString* hn();  // RVA: 0x6DDB70
        static Il2CppString* ho();  // RVA: 0x6DDC10
        static Il2CppString* hp();  // RVA: 0x6DDCB0
        static Il2CppString* hq();  // RVA: 0x6DDD50
        static Il2CppString* hr();  // RVA: 0x6DDDF0
        static Il2CppString* hs();  // RVA: 0x6DDE90
        static Il2CppString* ht();  // RVA: 0x6DDF30
        static Il2CppString* hu();  // RVA: 0x6DDFD0
        static Il2CppString* hv();  // RVA: 0x6DE070
        static Il2CppString* hw();  // RVA: 0x6DE110
        static Il2CppString* hx();  // RVA: 0x6DE1B0
        static Il2CppString* hy();  // RVA: 0x6DE250
        static Il2CppString* hz();  // RVA: 0x6DE2F0
        static Il2CppString* ia();  // RVA: 0x6DE430
        static Il2CppString* ib();  // RVA: 0x6DE4D0
        static Il2CppString* ic();  // RVA: 0x6DE570
        static Il2CppString* id();  // RVA: 0x6DE610
        static Il2CppString* ie();  // RVA: 0x6DE6B0
        static Il2CppString* if();  // RVA: 0x6DE750
        static Il2CppString* ig();  // RVA: 0x6DE7F0
        static Il2CppString* ih();  // RVA: 0x6DE890
        static Il2CppString* ii();  // RVA: 0x6DE930
        static Il2CppString* ij();  // RVA: 0x6DE9D0
        static Il2CppString* ik();  // RVA: 0x6DEA70
        static Il2CppString* il();  // RVA: 0x6DEB10
        static Il2CppString* im();  // RVA: 0x6DEBB0
        static Il2CppString* in();  // RVA: 0x6DEC50
        static Il2CppString* io();  // RVA: 0x6DECF0
        static Il2CppString* ip();  // RVA: 0x6DED90
        static Il2CppString* iq();  // RVA: 0x6DEE30
        static Il2CppString* ir();  // RVA: 0x6DEED0
        static Il2CppString* is();  // RVA: 0x6DEF70
        static Il2CppString* it();  // RVA: 0x6DF010
        static Il2CppString* iu();  // RVA: 0x6DF0B0
        static Il2CppString* iv();  // RVA: 0x6DF150
        static Il2CppString* iw();  // RVA: 0x6DF1F0
        static Il2CppString* ix();  // RVA: 0x6DF290
        static Il2CppString* iy();  // RVA: 0x6DF330
        static Il2CppString* iz();  // RVA: 0x6DF3D0
        static Il2CppString* ja();  // RVA: 0x6DF510
        static Il2CppString* jb();  // RVA: 0x6DF5B0
        static Il2CppString* jc();  // RVA: 0x6DF650
        static Il2CppString* jd();  // RVA: 0x6DF6F0
        static Il2CppString* je();  // RVA: 0x6DF790
        static Il2CppString* jf();  // RVA: 0x6DF830
        static Il2CppString* jg();  // RVA: 0x6DF8D0
        static Il2CppString* jh();  // RVA: 0x6DF970
        static Il2CppString* ji();  // RVA: 0x6DFA10
        static Il2CppString* jj();  // RVA: 0x6DFAB0
        static Il2CppString* jk();  // RVA: 0x6DFB50
        static Il2CppString* jl();  // RVA: 0x6DFBF0
        static Il2CppString* jm();  // RVA: 0x6DFC90
        static Il2CppString* jn();  // RVA: 0x6DFD30
        static Il2CppString* jo();  // RVA: 0x6DFDD0
        static Il2CppString* jp();  // RVA: 0x6DFE70
        static Il2CppString* jq();  // RVA: 0x6DFF10
        static Il2CppString* jr();  // RVA: 0x6DFFB0
        static Il2CppString* js();  // RVA: 0x6E0050
        static Il2CppString* jt();  // RVA: 0x6E00F0
        static Il2CppString* ju();  // RVA: 0x6E0190
        static Il2CppString* jv();  // RVA: 0x6E0230
        static Il2CppString* jw();  // RVA: 0x6E02D0
        static Il2CppString* jx();  // RVA: 0x6E0370
        static Il2CppString* jy();  // RVA: 0x6E0410
        static Il2CppString* jz();  // RVA: 0x6E04B0
        static Il2CppString* ka();  // RVA: 0x6E05F0
        static Il2CppString* kb();  // RVA: 0x6E0690
        static Il2CppString* kc();  // RVA: 0x6E0730
        static Il2CppString* kd();  // RVA: 0x6E07D0
        static Il2CppString* ke();  // RVA: 0x6E0870
        static Il2CppString* kf();  // RVA: 0x6E0910
        static Il2CppString* kg();  // RVA: 0x6E09B0
        static Il2CppString* kh();  // RVA: 0x6E0A50
        static Il2CppString* ki();  // RVA: 0x6E0AF0
        static Il2CppString* kj();  // RVA: 0x6E0B90
        static Il2CppString* kk();  // RVA: 0x6E0C30
        static Il2CppString* kl();  // RVA: 0x6E0CD0
        static Il2CppString* km();  // RVA: 0x6E0D70
        static Il2CppString* kn();  // RVA: 0x6E0E10
        static Il2CppString* ko();  // RVA: 0x6E0EB0
        static Il2CppString* kp();  // RVA: 0x6E0F50
        static Il2CppString* kq();  // RVA: 0x6E0FF0
        static Il2CppString* kr();  // RVA: 0x6E1090
        static Il2CppString* ks();  // RVA: 0x6E1130
        static Il2CppString* kt();  // RVA: 0x6E11D0
        static Il2CppString* ku();  // RVA: 0x6E1270
        static Il2CppString* kv();  // RVA: 0x6E1310
        static Il2CppString* kw();  // RVA: 0x6E13B0
        static Il2CppString* kx();  // RVA: 0x6E1450
        static Il2CppString* ky();  // RVA: 0x6E14F0
        static Il2CppString* kz();  // RVA: 0x6E1590
        static Il2CppString* la();  // RVA: 0x6E16D0
        static Il2CppString* lb();  // RVA: 0x6E1770
        static Il2CppString* lc();  // RVA: 0x6E1810
        static Il2CppString* ld();  // RVA: 0x6E18B0
        static Il2CppString* le();  // RVA: 0x6E1950
        static Il2CppString* lf();  // RVA: 0x6E19F0
        static Il2CppString* lg();  // RVA: 0x6E1A90
        static Il2CppString* lh();  // RVA: 0x6E1B30
        static Il2CppString* li();  // RVA: 0x6E1BD0
        static Il2CppString* lj();  // RVA: 0x6E1C70
        static Il2CppString* lk();  // RVA: 0x6E1D10
        static Il2CppString* ll();  // RVA: 0x6E1DB0
        static Il2CppString* lm();  // RVA: 0x6E1E50
        static Il2CppString* ln();  // RVA: 0x6E1EF0
        static Il2CppString* lo();  // RVA: 0x6E1F90
        static Il2CppString* lp();  // RVA: 0x6E2030
        static Il2CppString* lq();  // RVA: 0x6E20D0
        static Il2CppString* lr();  // RVA: 0x6E2170
        static Il2CppString* ls();  // RVA: 0x6E2210
        static Il2CppString* lt();  // RVA: 0x6E22B0
        static Il2CppString* lu();  // RVA: 0x6E2350
        static Il2CppString* lv();  // RVA: 0x6E23F0
        static Il2CppString* lw();  // RVA: 0x6E2490
        static Il2CppString* lx();  // RVA: 0x6E2530
        static Il2CppString* ly();  // RVA: 0x6E25D0
        static Il2CppString* lz();  // RVA: 0x6E2670
        static Il2CppString* ma();  // RVA: 0x6E27B0
        static Il2CppString* mb();  // RVA: 0x6E2850
        static Il2CppString* mc();  // RVA: 0x6E28F0
        static Il2CppString* md();  // RVA: 0x6E2990
        static Il2CppString* me();  // RVA: 0x6E2A30
        static Il2CppString* mf();  // RVA: 0x6E2AD0
        static Il2CppString* mg();  // RVA: 0x6E2B70
        static Il2CppString* mh();  // RVA: 0x6E2C10
        static Il2CppString* mi();  // RVA: 0x6E2CB0
        static Il2CppString* mj();  // RVA: 0x6E2D50
        static Il2CppString* mk();  // RVA: 0x6E2DF0
        static Il2CppString* ml();  // RVA: 0x6E2E90
        static Il2CppString* mm();  // RVA: 0x6E2F30
        static Il2CppString* mn();  // RVA: 0x6E2FD0
        static Il2CppString* mo();  // RVA: 0x6E3070
        static Il2CppString* mp();  // RVA: 0x6E3110
        static Il2CppString* mq();  // RVA: 0x6E31B0
        static Il2CppString* mr();  // RVA: 0x6E3250
        static Il2CppString* ms();  // RVA: 0x6E32F0
        static Il2CppString* mt();  // RVA: 0x6E3390
        static Il2CppString* mu();  // RVA: 0x6E3430
        static Il2CppString* mv();  // RVA: 0x6E34D0
        static Il2CppString* mw();  // RVA: 0x6E3570
        static Il2CppString* mx();  // RVA: 0x6E3610
        static Il2CppString* my();  // RVA: 0x6E36B0
        static Il2CppString* mz();  // RVA: 0x6E3750
        static Il2CppString* na();  // RVA: 0x6E3890
        static Il2CppString* nb();  // RVA: 0x6E3930
        static Il2CppString* nc();  // RVA: 0x6E39D0
        static Il2CppString* nd();  // RVA: 0x6E3A70
        static Il2CppString* ne();  // RVA: 0x6E3B10
        static Il2CppString* nf();  // RVA: 0x6E3BB0
        static Il2CppString* ng();  // RVA: 0x6E3C50
        static Il2CppString* nh();  // RVA: 0x6E3CF0
        static Il2CppString* ni();  // RVA: 0x6E3D90
        static Il2CppString* nj();  // RVA: 0x6E3E30
        static Il2CppString* nk();  // RVA: 0x6E3ED0
        static Il2CppString* nl();  // RVA: 0x6E3F70
        static Il2CppString* nm();  // RVA: 0x6E4010
        static Il2CppString* nn();  // RVA: 0x6E40B0
        static Il2CppString* no();  // RVA: 0x6E4150
        static Il2CppString* np();  // RVA: 0x6E41F0
        static Il2CppString* nq();  // RVA: 0x6E4290
        static Il2CppString* nr();  // RVA: 0x6E4330
        static Il2CppString* ns();  // RVA: 0x6E43D0
        static Il2CppString* nt();  // RVA: 0x6E4470
        static Il2CppString* nu();  // RVA: 0x6E4510
        static Il2CppString* nv();  // RVA: 0x6E45B0
        static Il2CppString* nw();  // RVA: 0x6E4650
        static Il2CppString* nx();  // RVA: 0x6E46F0
        static Il2CppString* ny();  // RVA: 0x6E4790
        static Il2CppString* nz();  // RVA: 0x6E4830
        static Il2CppString* oa();  // RVA: 0x6E4970
        static Il2CppString* ob();  // RVA: 0x6E4A10
        static Il2CppString* oc();  // RVA: 0x6E4AB0
        static Il2CppString* od();  // RVA: 0x6E4B50
        static Il2CppString* oe();  // RVA: 0x6E4BF0
        static Il2CppString* of();  // RVA: 0x6E4C90
        static Il2CppString* og();  // RVA: 0x6E4D30
        static Il2CppString* oh();  // RVA: 0x6E4DD0
        static Il2CppString* oi();  // RVA: 0x6E4E70
        static Il2CppString* oj();  // RVA: 0x6E4F10
        static Il2CppString* ok();  // RVA: 0x6E4FB0
        static Il2CppString* ol();  // RVA: 0x6E5050
        static Il2CppString* om();  // RVA: 0x6E50F0
        static Il2CppString* on();  // RVA: 0x6E5190
        static Il2CppString* oo();  // RVA: 0x6E5230
        static Il2CppString* op();  // RVA: 0x6E52D0
        static Il2CppString* oq();  // RVA: 0x6E5370
        static Il2CppString* or();  // RVA: 0x6E5410
        static Il2CppString* os();  // RVA: 0x6E54B0
        static Il2CppString* ot();  // RVA: 0x6E5550
        static Il2CppString* ou();  // RVA: 0x6E55F0
        static Il2CppString* ov();  // RVA: 0x6E5690
        static Il2CppString* ow();  // RVA: 0x6E5730
        static Il2CppString* ox();  // RVA: 0x6E57D0
        static Il2CppString* oy();  // RVA: 0x6E5870
        static Il2CppString* oz();  // RVA: 0x6E5910
        static Il2CppString* pa();  // RVA: 0x6E5A50
        static Il2CppString* pb();  // RVA: 0x6E5AF0
        static Il2CppString* pc();  // RVA: 0x6E5B90
        static Il2CppString* pd();  // RVA: 0x6E5C30
        static Il2CppString* pe();  // RVA: 0x6E5CD0
        static Il2CppString* pf();  // RVA: 0x6E5D70
        static Il2CppString* pg();  // RVA: 0x6E5E10
        static Il2CppString* ph();  // RVA: 0x6E5EB0
        static Il2CppString* pi();  // RVA: 0x6E5F50
        static Il2CppString* pj();  // RVA: 0x6E5FF0
        static Il2CppString* pk();  // RVA: 0x6E6090
        static Il2CppString* pl();  // RVA: 0x6E6130
        static Il2CppString* pm();  // RVA: 0x6E61D0
        static Il2CppString* pn();  // RVA: 0x6E6270
        static Il2CppString* po();  // RVA: 0x6E6310
        static Il2CppString* pp();  // RVA: 0x6E63B0
        static Il2CppString* pq();  // RVA: 0x6E6450
        static Il2CppString* pr();  // RVA: 0x6E64F0
        static Il2CppString* ps();  // RVA: 0x6E6590
        static Il2CppString* pt();  // RVA: 0x6E6630
        static Il2CppString* pu();  // RVA: 0x6E66D0
        static Il2CppString* pv();  // RVA: 0x6E6770
        static Il2CppString* pw();  // RVA: 0x6E6810
        static Il2CppString* px();  // RVA: 0x6E68B0
        static Il2CppString* py();  // RVA: 0x6E6950
        static Il2CppString* pz();  // RVA: 0x6E69F0
        static Il2CppString* qa();  // RVA: 0x6E6B30
        static Il2CppString* qb();  // RVA: 0x6E6BD0
        static Il2CppString* qc();  // RVA: 0x6E6C70
        static Il2CppString* qd();  // RVA: 0x6E6D10
        static Il2CppString* qe();  // RVA: 0x6E6DB0
        static Il2CppString* qf();  // RVA: 0x6E6E50
        static Il2CppString* qg();  // RVA: 0x6E6EF0
        static Il2CppString* qh();  // RVA: 0x6E6F90
        static Il2CppString* qi();  // RVA: 0x6E7030
        static Il2CppString* qj();  // RVA: 0x6E70D0
        static Il2CppString* qk();  // RVA: 0x6E7170
        static Il2CppString* ql();  // RVA: 0x6E7210
        static Il2CppString* qm();  // RVA: 0x6E72B0
        static Il2CppString* qn();  // RVA: 0x6E7350
        static Il2CppString* qo();  // RVA: 0x6E73F0
        static Il2CppString* qp();  // RVA: 0x6E7490
        static Il2CppString* qq();  // RVA: 0x6E7530
        static Il2CppString* qr();  // RVA: 0x6E75D0
        static Il2CppString* qs();  // RVA: 0x6E7670
        static Il2CppString* qt();  // RVA: 0x6E7710
        static Il2CppString* qu();  // RVA: 0x6E77B0
        static Il2CppString* qv();  // RVA: 0x6E7850
        static Il2CppString* qw();  // RVA: 0x6E78F0
        static Il2CppString* qx();  // RVA: 0x6E7990
        static Il2CppString* qy();  // RVA: 0x6E7A30
        static Il2CppString* qz();  // RVA: 0x6E7AD0
        static Il2CppString* ra();  // RVA: 0x6E7C10
        static Il2CppString* rb();  // RVA: 0x6E7CB0
        static Il2CppString* rc();  // RVA: 0x6E7D50
        static Il2CppString* rd();  // RVA: 0x6E7DF0
        static Il2CppString* re();  // RVA: 0x6E7E90
        static Il2CppString* rf();  // RVA: 0x6E7F30
        static Il2CppString* rg();  // RVA: 0x6E7FD0
        static Il2CppString* rh();  // RVA: 0x6E8070
        static Il2CppString* ri();  // RVA: 0x6E8110
        static Il2CppString* rj();  // RVA: 0x6E81B0
        static Il2CppString* rk();  // RVA: 0x6E8250
        static Il2CppString* rl();  // RVA: 0x6E82F0
        static Il2CppString* rm();  // RVA: 0x6E8390
        static Il2CppString* rn();  // RVA: 0x6E8430
        static Il2CppString* ro();  // RVA: 0x6E84D0
        static Il2CppString* rp();  // RVA: 0x6E8570
        static Il2CppString* rq();  // RVA: 0x6E8610
        static Il2CppString* rr();  // RVA: 0x6E86B0
        static Il2CppString* rs();  // RVA: 0x6E8750
        static Il2CppString* rt();  // RVA: 0x6E87F0
        static Il2CppString* ru();  // RVA: 0x6E8890
        static Il2CppString* rv();  // RVA: 0x6E8930
        static Il2CppString* rw();  // RVA: 0x6E89D0
        static Il2CppString* rx();  // RVA: 0x6E8A70
        static Il2CppString* ry();  // RVA: 0x6E8B10
        static Il2CppString* rz();  // RVA: 0x6E8BB0
        static Il2CppString* sa();  // RVA: 0x6E8CF0
        static Il2CppString* sb();  // RVA: 0x6E8D90
        static Il2CppString* sc();  // RVA: 0x6E8E30
        static Il2CppString* sd();  // RVA: 0x6E8ED0
        static Il2CppString* se();  // RVA: 0x6E8F70
        static Il2CppString* sf();  // RVA: 0x6E9010
        static Il2CppString* sg();  // RVA: 0x6E90B0
        static Il2CppString* sh();  // RVA: 0x6E9150
        static Il2CppString* si();  // RVA: 0x6E91F0
        static Il2CppString* sj();  // RVA: 0x6E9290
        static Il2CppString* sk();  // RVA: 0x6E9330
        static Il2CppString* sl();  // RVA: 0x6E93D0
        static Il2CppString* sm();  // RVA: 0x6E9470
        static Il2CppString* sn();  // RVA: 0x6E9510
        static Il2CppString* so();  // RVA: 0x6E95B0
        static Il2CppString* sp();  // RVA: 0x6E9650
        static Il2CppString* sq();  // RVA: 0x6E96F0
        static void .cctor();  // RVA: 0x6D6A80
    };

} // namespace <PrivateImplementationDetails>{915EEBE3-64A6-451F-9001-4142610D7F79}
