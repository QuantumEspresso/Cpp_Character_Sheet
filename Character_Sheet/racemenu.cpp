#include "racemenu.h"
#include "ui_racemenu.h"
#include <QPixmap>
#include <QDebug>
#include <QStringList>

using namespace std;

QString pic_path;
QString pic_path_male="/home/vox/Pulpit/Character_Sheet/Races/male/";
QString pic_path_female="/home/vox/Pulpit/Character_Sheet/Races/female/";
QStringList races;
int raceindex, genderindex;

void fillalldescriptions(){
    races.append(QString :: fromUtf8("Człowiek jest najbardziej powszechną ze wszystkich ras. Występuje licznie wszędzie poza wyspą elfów. Ludzie mają negatywne stosunki z każdą rasą, nawet swoją. Sojusze są zawiązywane na chwile, kiedy jest to korzystne dla obu stron, i ani chwili dłużej. Biją się o wszystko z innymi rasami i między sobą. Z drugiej strony dzięki temu ludzie uczą się najwięcej i najszybciej przystosowują do nowego otoczenia."));
    races.append(QString :: fromUtf8("Murzyny pochodzą z dalekich wysp na południu. Występują jednak głównie wśród białych ludzi w postaci niewolników. Są kompletnie nieufni i podejrzliwi wobec wszystkich, których rasy posiadają niewolników, zaś wobec innych uciskanych ras w większości przypadków są bezinteresowni i otwarci. W większości nie mieli szansy za młodu się rozwinąć, więc nie grzeszą umysłem, za to od wiecznej pracy są solidnie zbudowani i odporni."));
    races.append(QString :: fromUtf8("Ludzie z żółtą karnacją są spokojniejsi i o wiele bardziej zdyscyplinowani od swoich białych kuzynów z zachodu, dodatkową żyją dużo bliżej natury od swoich krewnych. Co wcale nie oznacza, że reszta ich opisu będzie zupełnie inna. Są tak samo chciwi, zachłanni, nieufni i skorzy do intryg. Zróżnicowanie między nimi jest takie samo jak u białych. Istnieje wiele o nieskazitelnym honorze, jak i o najpodlejszych sercach. Z wyglądu wcale nie są żółci, za to są widocznie niżsi lżejsi oraz mają podściółkę tłuszczową wokół oczu. Tak zachodni pobratymcy gardzą innymi rasami, szczególnie białymi, za ich wywyższanie się."));
    races.append(QString :: fromUtf8("Leśne elfy są najpowszechniejsze poza wyspą elfów. Mają smukłe ciała, długie uszy i są ogólnie piękniejsze do ludzi. Mają od nich więcej gracji. Mówi się, że są pradawną mieszanką człowieka i szarego elfa. Żyją w największych  puszczach na wyspie elfów i kochają naturę. Wśród ludzi żyją niekiedy w lasach w nieznacznie większych społecznościach, ale przeważnie w miastach. Są bardzo zmienne z charakteru, na ogół spokojne i opanowane potrafią w jednym momencie stać się bardzo impulsywne i rozjuszone, gdy na przykład widzą podpalacza drzew. Stosunki z ludźmi nie mają takie złe z pozoru, ale kompletnie sobie nie ufają. W pełni zaufają jedynie swojemu."));
    races.append(QString :: fromUtf8("Szare elfy, zwane na wyspie elfów wysokiego rodu są smukłe i pełne gracji dużo bardziej od swoich leśnych kuzynów. Mają platynowe bądź srebrne włosy i jaśniejącą cerę. Są to istoty nasączone magią co czyni ich świetnym materiałem na magów. Są bardzo wyrafinowane i lubią się wywyższać wśród innych ras, gdy tylko przyjdzie im na to ochota. Są dość kapryśne, ale zawsze emanują spokojem. Wszystko robią z zimną krwią i szanują inne istoty jeśli posiadają taka cechę. Lubią intelektualnie testować innych i sprawdzać jakiego typu istotami są z charakteru. Szary elf ufa tylko tym co nieświadomie przejdą ich próby charakteru. Są szanowani, choć raczej nienawidzeni przez inne rasy."));
    races.append(QString :: fromUtf8("Mroczne elfy zwane także drowami są dość zdegenerowanym szczepem elfów. Żyją wśród ludzi w podziemiach w klanach. Zaś na wyspie elfów zamieszkują mroczne góry oraz lasy, gdzie rzadko dociera słońce. W przypadku wyspy elfów panuje matriarchat. Samice są kapłankami i sprawują władzę, zaś samcy są ich narzędziem, wojownikami cieni. Drowy są okrutną rasą, która jest chciwa jak ludzie. Gdyby nie szare elfy prawdopodobnie opanowałyby już cały świat. Nie są złe z natury, ale przesiąknięte zepsuciem. Dlatego te mające tego dość uciekają do krain ludzi, gdzie próbują znaleźć spokój i normalne życie. Często są traktowane gorzej z tego powodu. Co wcale nie umniejsza temu, że są ładniejsze od ludzi. Mają czarne, szare bądź blado purpurowe oblicze i czarne, bądź białe włosy. Z usposobienia najbardziej przypominają ludzi."));
    races.append(QString :: fromUtf8("Krasnoludy są dumną rasą zamieszkującą podziemia i gigantyczne kopalnie. Ich żądza kosztowności i złota jest niepohamowana równie mocno jak pycha i poczucie wyższości nad innymi rasami. Mają zdecydowanie kompleksy wielkości. Za to krasnoludy wiedzą jak wygląda prawdziwa popijawa i potrafią bezinteresownie wspierać i oddać życie za pobratymca lub kogoś kto bardzo się zasłużył dla krasnoludów. Cenią sobie w innych przede wszystkim honor i waleczność. Mają średnie stosunki z innymi rasami, panuje dość chłodna atmosfera, jednak nie przeszkadza to w handlu między tymi rasami oraz przyjmowaniem podróżników i sprawdzaniem jak mocne mają głowy."));
    races.append(QString :: fromUtf8("Gnomy są rasą wścibską i ciekawską, za razem inteligentną. Ze względu na niski wzrost i siłę częściej uciekają się do podstępów. Są odkrywcami, więc alchemia oraz inne wynalazki są u gnomów wysoko rozwinięte tak samo jak kupiectwo. Gnomy uwielbiają wyzwania intelektualne i nigdy nimi nie pogardzą. Szanują inteligencję oraz spryt. Na każdej rzeczy chcą odnieść jakąś korzyść. Inne rasy są nieufne i podejrzliwe wobec gnomów oraz przypisują im łatkę zdziercy oraz naciągacza (i słusznie) ale nie są trakto. Mają szczególny talent do magii iluzji."));
    races.append(QString :: fromUtf8("Wyglądają jak niscy ludzie, często zwani przez nich karłami. Niziołki są rasą sprytną oraz zwinna. Ze względu na wzrost są trudni do zauważenia. Lubią się skradać oraz kombinować. Są dość figlarni, przez co dość niechętnie się z nimi zadają inne rasy. Jednak gdy się do kogoś przekonają bardzo dbają o swoich kompanów i są z nimi dość zżyci. Prowadzą dość swawolny tryb życia. Są raczej koczownikami i nie zagrzewają nigdzie miejsca dłużej niż miesiąc, czyt dwa. Często kradną i robią drobne oszustwa, by zdobyć przedmioty, które potem sprzedają za oszukaną cenę tworząc o nich niestworzone historie."));
    races.append(QString :: fromUtf8("Orki są barbarzyńską rasą, z którą negocjacje są złym pomysłem. Żyją z łupieży wiosek oraz innych orkijskich plemion. Wyglądają jak wysocy, masywni ludzie, lecz z wysuniętą dolną szczęką i wystającymi dolnymi kłami. Mają raczej rzadkie cienkie włosy i szorstką skórę o barwie zieleni, brązu lub szarego. Orki po prostu nie rozumieją odmowy. Wszystko w ich plemionach załatwia się siłą. Nie obchodzi ich dobro innych, nawet swoich pobratymców, w sporadycznych przypadkach nawet własne. Łatwo poddają się emocjom (tym negatywnym i pozytywnym), są wybuchowi i impulsywni. Nie znają strachu i często litości. Czasami w swoich plemionach posiadają magów i cenią sobie ich umiejętności bojowe, ale zdecydowana większość z nich gardzi magią."));
    races.append(QString :: fromUtf8("Argonianie są jedną z odmian jaszczuroludzi. Mają przeróżne ubarwienia zarówno łusek jak i rogów. Jaszczuroludzie powstali dawno temu jako odłam od smoków (przynajmniej tak mówi legenda). Od tamtej pory nastąpił między nimi podział, na temat którego jest multum spekulacji. Argonianie żyją na bagnach i tam można ich spotkać najwięcej, jednak dobrzy zaklimatyzowali się wśród ludzi, którzy cenią sobie ich zdolności łowieckie. Argonianie są raczej małomówni oraz spokojni. Wydają się dość wyprani z emocji, jednak to tylko pozory. Nienawidzą się z troglodytami i atakują siebie nawzajem gdy tylko się ujrzą. Z Sahuaginami mają dobry kontakt i często się wspierają."));
    races.append(QString :: fromUtf8("Rodzaj jaszczuroludzia, który odszczepił się od argonianów i troglodytów podczas walk między nimi uciekając w głębiny mórz. Przystosowali się do takiego życia i tam się rozwijają. Są dość zamknięci w swojej kulturze i rzadko kiedy ktoś tam się zapuszcza. Utrzymują dobre stosunki z argonianinami, zaś troglodytów unikają, gdyż te są bezwzględne. Szanują każdą rasę i dla każdej starają się być życzliwi lecz rozdrażnieni nie mają hamulców."));
    races.append(QString :: fromUtf8("Troglodyci są brutalnym odszczepem jaszczuroludzi nie mającym skrupułów oraz nie zważającym na nic. Nie szanują innych innych ras i nie uznają ich zasad. Robią co chcą. Z reguły ignorują innych dążąc do swojego celu. Likwidują z reguły dopiero przeszkody, tych którzy nie rozumieją gdzie jest ich miejsce i próbują powstrzymać troglodytę. Większość czasu są spokojni i skupieni na swoich sprawach, ale gdy przychodzi czas walki lub dzieje się jakaś inna akcja robią się rządne krwi i dzikie. Inne rasy tolerują ich obecność (poza argonianinami), ale zawsze straż uprzedza ich na wejściu, co jest karane i mają ich bacznie na oku gotowi do działania. Troglodyta oznacza kłopoty."));
    races.append(QString :: fromUtf8("Wszyscy sferotknięci są rzadkością. W każdym z nich płynie krew istot magicznych z innych wymiarów. Są traktowani jak odmieńcy i każda rasa (poza tymi, które też są traktowane jak odmieńcy) podchodzi do nich z dystansem i podejrzliwie. Aasimarowie mają w sobie krew aniołów. Są piękniejsi od zwykłych ludzi. Mają blond lub białe włosy, lazurowe bądź jasnożółte oczy oraz białe pierzaste skrzydła. Cechują się spokojem i łagodnością, konflikt to dla nich ostateczność. Starają się szerzyć dobro gdzie tylko się udadzą."));
    races.append(QString :: fromUtf8("Wszyscy sferotknięci są rzadkością. W każdym z nich płynie krew istot magicznych z innych wymiarów. Są traktowani jak odmieńcy i każda rasa (poza tymi, które też są traktowane jak odmieńcy) podchodzi do nich z dystansem i podejrzliwie. Diablętom płynie w żyłach krew piekielnych istot. Wyróżniają się różnorakimi rogami na głowie, czerwoną lub szarą skórą, ciemnymi jak noc bądź ognistymi włosami oraz nietoperzymi skrzydłami. Są mściwi i wiecznie dążący do własnych samolubnych celów. Nie lubią być ignorowane, a ich zdolności niedoceniane. Jedni są nieobliczalni, wybuchowi i impulsywni, inni zabijają z codzienną, znudzoną miną. Zawsze jednak mają zaburzenia psychiczne spowodowane spaczeniem diabelską krwią."));
    races.append(QString :: fromUtf8("Wszyscy sferotknięci są rzadkością. W każdym z nich płynie krew istot magicznych z innych wymiarów. Są traktowani jak odmieńcy i każda rasa (poza tymi, które też są traktowane jak odmieńcy) podchodzi do nich z dystansem i podejrzliwie. Genasi ognia mają w sobie magię ognia. Włosy mają jak płomień, rysy ostre, skórę czerwonawą jak rozżarzony węgiel. Mają wybuchowy temperament i charakter gorący jak rozgrzane żelazo gotowe do kucia. Są dumni i nie lubią przegrywać."));
    races.append(QString :: fromUtf8("Wszyscy sferotknięci są rzadkością. W każdym z nich płynie krew istot magicznych z innych wymiarów. Są traktowani jak odmieńcy i każda rasa (poza tymi, które też są traktowane jak odmieńcy) podchodzi do nich z dystansem i podejrzliwie. Wiecznie z głową w chmurach, o lekkim usposobieniu lecz chwiejnym charakterze jak liście na wietrze. Lecą tam gdzie ich poniesie wiatr. Nie umieją się stresować czy zamartwiać. Do wszystkiego podchodzą na spokojnie i z zimną krwią. Mają rozwiane włosy nawet w bezwietrzną pogodę, cerę białą, oczy zimne, lecz wesołe (przeważnie)."));
    races.append(QString :: fromUtf8(" Wszyscy sferotknięci są rzadkością. W każdym z nich płynie krew istot magicznych z innych wymiarów. Są traktowani jak odmieńcy i każda rasa (poza tymi, które też są traktowane jak odmieńcy) podchodzi do nich z dystansem i podejrzliwie. Ciało pokryte delikatną łuską, delikatne błony między palcami oraz ledwo widoczne skrzela na szyi. Często skóra o zielonkawym lub niebieskim odcieniu, włosy także. Mają łagodne usposobienie. Są neutralni w każdej możliwej sprawie."));
    races.append(QString :: fromUtf8("Wszyscy sferotknięci są rzadkością. W każdym z nich płynie krew istot magicznych z innych wymiarów. Są traktowani jak odmieńcy i każda rasa (poza tymi, które też są traktowane jak odmieńcy) podchodzi do nich z dystansem i podejrzliwie. Genasi ziemi są z wyglądu najczęściej bezwłosi o ciemnobrązowej lub skalistej cerze i skórze twardej niczym głaz. Myślą dość powoli i żyją raczej bez pośpiechu. Mają lekki problem z byciem delikatnymi, za to nie mają problemu, żeby mocno przyłożyć. Ciężko ich przekonać, by zmienili zdanie na jakiś temat."));
    races.append(QString :: fromUtf8("Wszyscy sferotknięci są rzadkością. W każdym z nich płynie krew istot magicznych z innych wymiarów. Są traktowani jak odmieńcy i każda rasa (poza tymi, które też są traktowane jak odmieńcy) podchodzi do nich z dystansem i podejrzliwie. Półsmoki mają małe lub średnie smocze skrzydła, niewielkich rozmiarów ogon, czasem rogi na głowie. Bywa, że ich skórę pokrywa delikatna łuska. W ich oddechu da się wyczuć siarkę. Oczy mają dodatkową błonę i smoczy wygląd. Ich oraz diabląt ludzie obawiają się najbardziej."));
    races.append(QString :: fromUtf8("Likantropy są ludźmi, w których żyłach płynie krew zwierząt. Likantropia jest chorobą. Można min zostać poprzez ugryzienie jakiegoś likantropa lub być przez takiego urodzonym. Każdy likantrop ma pewne cechy fizyczne oraz osobowościowe zwierzęcia, którego postać może przybrać."));
    races.append(QString :: fromUtf8("Likantropy są ludźmi, w których żyłach płynie krew zwierząt. Likantropia jest chorobą. Można min zostać poprzez ugryzienie jakiegoś likantropa lub być przez takiego urodzonym. Każdy likantrop ma pewne cechy fizyczne oraz osobowościowe zwierzęcia, którego postać może przybrać."));
    races.append(QString :: fromUtf8("Likantropy są ludźmi, w których żyłach płynie krew zwierząt. Likantropia jest chorobą. Można min zostać poprzez ugryzienie jakiegoś likantropa lub być przez takiego urodzonym. Każdy likantrop ma pewne cechy fizyczne oraz osobowościowe zwierzęcia, którego postać może przybrać."));
    races.append(QString :: fromUtf8("Likantropy są ludźmi, w których żyłach płynie krew zwierząt. Likantropia jest chorobą. Można min zostać poprzez ugryzienie jakiegoś likantropa lub być przez takiego urodzonym. Każdy likantrop ma pewne cechy fizyczne oraz osobowościowe zwierzęcia, którego postać może przybrać."));
    races.append(QString :: fromUtf8("Likantropy są ludźmi, w których żyłach płynie krew zwierząt. Likantropia jest chorobą. Można min zostać poprzez ugryzienie jakiegoś likantropa lub być przez takiego urodzonym. Każdy likantrop ma pewne cechy fizyczne oraz osobowościowe zwierzęcia, którego postać może przybrać."));
    races.append(QString :: fromUtf8("Likantropy są ludźmi, w których żyłach płynie krew zwierząt. Likantropia jest chorobą. Można min zostać poprzez ugryzienie jakiegoś likantropa lub być przez takiego urodzonym. Każdy likantrop ma pewne cechy fizyczne oraz osobowościowe zwierzęcia, którego postać może przybrać."));
    races.append(QString :: fromUtf8("Likantropy są ludźmi, w których żyłach płynie krew zwierząt. Likantropia jest chorobą. Można min zostać poprzez ugryzienie jakiegoś likantropa lub być przez takiego urodzonym. Każdy likantrop ma pewne cechy fizyczne oraz osobowościowe zwierzęcia, którego postać może przybrać."));
    races.append(QString :: fromUtf8("Nimfy zamieszkują knieje oraz puszcze z dala od ludzkich osad. Mają wygląd ludzkiej bądź elfiej kobiety o bliski ich ideałom piękna. W stosunku do przybyszy są nieufne. Leśne elfy traktują jak swoich, są też bardzo życzliwe dla druidów oraz innych obrońców natury. Są zaś wredne i zawistne wobec każdego kto nie szanuje przyrody. Z reguły mają bardzo chwiejny nastrój, są dość wybredne i lubią wykorzystywać innych dla zabawy korzystając ze swych wdzięków. To naprawdę rzadkość, by nimfa opuściła swój las."));
    races.append(QString :: fromUtf8("Yuan-Ti są rasą węży. Inne rasy nie przepadają za nimi, ze względu na ich podły charakter. Uwilbiają wykorzystywać innych do swoich magicznych eksperymentów. Są bardzo przebiegli i zawsze biorą to co chcą. Nie interesuje ich żadne prawo czy nakazy społeczne. Są zawsze spokojne, jednak atakują szybko i bez wahania. Nie da się powiedzieć co siedzi w ich głowach ani co planują, są bardzo skryci. Lubią intelignetne stworzenia, gdyż mogą się one jeszcze przydać."));
    races.append(QString :: fromUtf8("Ludzie-duchy są potomkami ludzi i przeróżnych duchów natury. Mają bardzo silną więź ze światem natury, a jednocześnie ze społecznością ludzką. Zwykle są łagodni i spokojni, dostrojeni do otoczenia i pokojowo nastawieni do świata. Duchowe dziedzictwo zapewnia im świadomość nadnaturalnego świata, co często czyni z nich magów. Promienieją radością i uwielbieniem życia. Wygląd mają zróżnicowany jak ludzie, lecz nie mają zarostu na ciele, a włosy na głowie rosną im gęste i bujne. Wśród ludzi są powszechnie akceptowani."));
    races.append(QString :: fromUtf8("Tengu są rasą zamieszkującą lasy krain wschodu. W normalnej formie przypominają z wyglądu kruki humanoidalnych kształtów o czarnych, pierzastych skrzydłach. Mogą też na dowolny okres czasu przybrać ludzką postać, którą można łatwo poznać po nienaturalne długim nosie. Tengu są spokojne i opanowane lub wzburzone i chaotyczne. Ich charaktery są zawsze skrajne. Wśród ludzi są tolerowani jak swoi, elfy starają się trzymać z nimi dobre kontakty, ze względu na ich wiedzę, zaś orki i krasnoludy nie przepadają za nimi. Tengu są dość tajemniczą rasą, niewiele wiadomo o tym co robią w swoim lesie i niechętnie się tą wiedzą dzielą."));
    races.append(QString :: fromUtf8("Vanarowie są rasą małp zamieszkujących wysokie lasy w górach znajdujących się w krainach wschodu. Są bardzo zręczne i zwinne. Inne rasy powszechnie je akceptują traktując ich jak wesołków. Częściowo to prawda. Vanarowie są bardzo pozytywną i wesołą rasą. Uwielbiają się bawić i śmiać. Nie mają wyczucia granic moralnych, co sprawia, że często nieświadomie są wścibscy i łatwo irytują innych zasypując ich bardzo prywatnymi pytaniami. Jest to dość roztrzepana rasa, nie przykładająca dużej wartości do celu. Bardziej interesuje ich sama podróż."));
}


racemenu::racemenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::racemenu)
{
    ui->setupUi(this);
    fillalldescriptions();
    pic_path=pic_path_male;
}

racemenu::~racemenu()
{
    delete ui;
}

void racemenu::on_comboBox_currentIndexChanged(int index)
{
    raceindex=index;
    if(raceindex==27) ui->comboBox_2->setCurrentIndex(1);
    QPixmap picture(pic_path+QString::number(raceindex)+".jpg");
    int h = ui->pic2->height();
    int w = ui->pic2->width();
    ui->pic2->setPixmap(picture.scaled(w,h,Qt::KeepAspectRatio));
    ui->textEdit->setText(races.at(raceindex));
}


void racemenu::on_buttonBox_accepted()
{
    if(genderindex==1) raceindex=-raceindex-1;
    if(raceindex==27) raceindex=-28;
    setResult(raceindex);
}

void racemenu::on_comboBox_2_currentIndexChanged(int index)
{
    if(raceindex==27) ui->comboBox_2->setCurrentIndex(1);
    if(index==0){
        genderindex=0;
        pic_path=pic_path_male;
    }
    else {
        genderindex=1;
        pic_path=pic_path_female;
    }
    QPixmap picture(pic_path+QString::number(raceindex)+".jpg");
    int h = ui->pic2->height();
    int w = ui->pic2->width();
    ui->pic2->setPixmap(picture.scaled(w,h,Qt::KeepAspectRatio));
    ui->textEdit->setText(races.at(raceindex));
}
